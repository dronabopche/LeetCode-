Problem : Given strings s1, s2, and s3, find whether s3 is formed by an interleaving of s1 and s2.

An interleaving of two strings s and t is a configuration where s and t are divided into n and m 
substrings
 respectively, such that:

s = s1 + s2 + ... + sn
t = t1 + t2 + ... + tm
|n - m| <= 1
  
The interleaving is s1 + t1 + s2 + t2 + s3 + t3 + ... or t1 + s1 + t2 + s2 + t3 + s3 + ...
Note: a + b is the concatenation of strings a and b.

Solution :Step 1 : If the length of s3 is not equal to the sum of the lengths of s1 and s2, return false.
          Step 2 :  Frequency Count:
               Create three frequency arrays for s1, s2, and s3 to count occurrences of each character.
               If the combined frequency of characters in s1 and s2 does not match the frequency in s3, return false.
          Step 3 :Dynamic Programming Setup:
               Create a 2D boolean DP table dp[m + 1][n + 1] where m is the length of s1 and n is the length of s2.
               Initialize dp[0][0] = true (base case: both s1 and s2 are empty, so s3 is also empty).
          Step 4 :DP Table Filling:
               For each i from 0 to m (characters from s1):
               For each j from 0 to n (characters from s2):
               If s1[i-1] == s3[i+j-1] and dp[i-1][j] is true, set dp[i][j] = true.
               If s2[j-1] == s3[i+j-1] and dp[i][j-1] is true, set dp[i][j] = true.
          Step 5 :Final Check:
               Return dp[m][n], which indicates whether all of s3 can be formed by interleaving s1 and s2.

Code:
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {

        if (s1.length() + s2.length() != s3.length()) {
            return false; 
        }
        
        unordered_map<char, int> count1, count2, count3;
        
      
        for (char c : s1) count1[c]++;
        for (char c : s2) count2[c]++;
        for (char c : s3) count3[c]++;
        
        
        for (auto& entry : count3) {
            char c = entry.first;
            if (count1[c] + count2[c] != entry.second) {
                return false;
            }
        }

        int m = s1.length(), n = s2.length();
        vector<vector<bool>> dp(m + 1, vector<bool>(n + 1, false));
        
        dp[0][0] = true; 
    
        for (int i = 0; i <= m; ++i) {
            for (int j = 0; j <= n; ++j) {
                if (i > 0 && dp[i - 1][j] && s1[i - 1] == s3[i + j - 1]) {
                    dp[i][j] = true;
                }
                if (j > 0 && dp[i][j - 1] && s2[j - 1] == s3[i + j - 1]) {
                    dp[i][j] = true;
                }
            }
        }

       
        return dp[m][n];
    }
};
