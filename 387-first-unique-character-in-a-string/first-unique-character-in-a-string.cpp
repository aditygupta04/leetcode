class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> hp;

        for(char c : s){
            hp[c]++;
        }

        for(int i = 0; i < s.length(); i++){
            if(hp[s[i]] == 1){
                return i;
            }
        }
        return -1;
    }
};