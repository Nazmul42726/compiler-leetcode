//submission link: https://leetcode.com/problems/basic-calculator-ii/submissions/1977280922/

class Solution {
public:
    int calculate(string t) {
        //'+' = -1, '-' = -2, '*' = -3, '/' = -4
        string s;
        for(auto ch: t){
            if(ch != ' ') s.push_back(ch);
        }
        int n = s.size();
        vector<int> st;
        int cur = 0;
        for(int i=0; i<n; i++){
            if(s[i] >= '0' and s[i] <= '9'){
                cur *= 10;
                cur += (s[i] - '0');
            }
            else{
                if(st.size() and (st.back() == -3 or st.back() == -4)){
                    int lst = st.back(); st.pop_back();
                    int x = st.back(); st.pop_back();

                    if(lst == -3) st.push_back(x * cur);
                    else st.push_back(x / cur);
                }
                else st.push_back(cur);
                
                cur = 0;
                if(s[i] == '+') st.push_back(-1);
                else if(s[i] == '-') st.push_back(-2);
                else if(s[i] == '*') st.push_back(-3);
                else st.push_back(-4);
            }
        }
        
        if(st.size() >= 2 and (st.back() == -3 or st.back() == -4)){
            int lst = st.back(); st.pop_back();
            int x = st.back(); st.pop_back();

            if(lst == -3) st.push_back(x * cur);
            else st.push_back(x / cur);
        }
        else st.push_back(cur);

        n = st.size();
        int result = st[0];
        
        for(int i=1; i<n; i+=2){
            if(st[i] == -1) result += st[i+1];
            else result -= st[i+1];
        }
        return result;
    }
};
