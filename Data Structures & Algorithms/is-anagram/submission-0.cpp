
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashTableForS;
        unordered_map<char, int> hashTableForT;

        if(s.size() != t.size()){
            return false;
        }

        for(char c : s){
            hashTableForS[c]++;
        }

        for(char c : t){
            hashTableForT[c]++;
        }

        for (auto character : hashTableForS) {
            if(character.second != hashTableForT[character.first]){
                return false;
            }
        }

        return true;
    }
};
