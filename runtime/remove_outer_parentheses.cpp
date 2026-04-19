//submission link: https://leetcode.com/problems/remove-outermost-parentheses/submissions/1975160575/

class Solution {
public:
    string removeOuterParentheses(string s) {
        int cnt = 0;
        string result;
        int n = s.size();

        for(int i=0; i<n; i++){
            if(s[i] == '('){
                cnt++;
                if(cnt > 1) result.push_back(s[i]);
            }
            else{
                cnt--;
                if(cnt) result.push_back(s[i]);
            }
        }
        return result;
    }
};
