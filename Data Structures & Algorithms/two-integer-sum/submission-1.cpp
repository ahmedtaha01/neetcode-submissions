#include <unordered_map>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashTable;

        for(int i = 0; i < nums.size();i++){
            int secondNumber = target - nums[i];

            if(hashTable.find(secondNumber) != hashTable.end()){
                return {hashTable[secondNumber],i};
            } else {
                hashTable.insert({nums[i],i});
            }
        }

        return {};
    }
};
