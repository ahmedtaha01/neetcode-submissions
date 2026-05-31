class Solution {
private:
    std::string encoding_text = "<&&>";
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";

        for(int i =0; i < strs.size();i++){
            encoded_string += strs[i] + encoding_text;
        }

        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> decoded_strs;
        string decoded_str = "";
        int encoding_text_enumerator = 0;

        for(int i = 0;i < s.size();i++){
            decoded_str += s[i];
            if(s[i] == encoding_text[encoding_text_enumerator]){
                if(encoding_text_enumerator == encoding_text.size() - 1){
                    encoding_text_enumerator = 0;
                    decoded_str.erase(decoded_str.size() - encoding_text.size());
                    decoded_strs.push_back(decoded_str);
                    decoded_str = "";
                } else {
                    encoding_text_enumerator++;
                }
            }
        }
        return decoded_strs;
    }
};
