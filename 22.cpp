class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> temp = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string> s;
        for(auto c:words){
            string ans="";
            for(auto w:c)
                ans += temp[w-'a'];
            s.insert(ans);
        }
        return s.size();
    }
};
