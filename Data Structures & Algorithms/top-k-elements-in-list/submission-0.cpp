#include <unordered_map>

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> frequencies;
        vector<int> ordered_nums_by_frequency;
        int max_frequency = 0;
        int number = 0;

        for(int i =0;i<nums.size();i++){
            frequencies[nums[i]]++;
        }

        for (int i =0; i < k; i++){
            for(auto item : frequencies){
                if(item.second > max_frequency){
                    max_frequency = item.second;
                    number = item.first;
                }
            }

            ordered_nums_by_frequency.push_back(number);
            frequencies.erase(number);
            max_frequency = 0;
            number = 0;
        }

        return ordered_nums_by_frequency;
    }
};
