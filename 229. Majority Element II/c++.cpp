class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int threshold = n / 3;  

       
        unordered_map<int, int> hashTable;

        for (int i : nums) {
            hashTable[i]++;
        }

       
        vector<int> result;

       
        for (auto& entry : hashTable) {
            if (entry.second > threshold) {
                result.push_back(entry.first);
            }
        }

        return result;
    }
};
