#include <unordered_set>
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        unordered_set<int> numbers;

        for(int i = 0;i < nums.size();i++){
            if(numbers.count(nums[i])){
                return true;
            } else {
                numbers.insert(nums[i]);
            }
        }

        return false;
    }
};