#include <unordered_map>
#include <algorithm>

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hashTable;
        vector<vector<string>> values;

        for(int i = 0; i < strs.size();i++){
            string str = strs[i];
            sort(str.begin(),str.end());

            hashTable[str].push_back(strs[i]);
        }

        for(auto item : hashTable){
            values.push_back(item.second);
        }

        return values;
    }
};
