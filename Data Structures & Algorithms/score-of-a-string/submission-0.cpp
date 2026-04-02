class Solution {
public:
    int scoreOfString(string s) {
        int score=0;
        for(int x=0;x<s.size()-1;x++){
            score+=abs(s[x]-s[x+1]);
        }
        return score;
    }
};