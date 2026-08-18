class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> charcount;
        for(char ch : s){
            charcount[ch]+=1;
        }
        for(char ch1 : t){
            charcount[ch1]-=1;
        }
        for(auto& pair :charcount){
            if(pair.second!=false){
                return false;
            }
        }
        return true;
    }
};