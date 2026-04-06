//submissions link: https://leetcode.com/problems/decode-string/submissions/1968450169/

class Solution {
public:
    string decodeString(string s) {
        int n = s.size();
        int cnt = 0, brc = 0;
        string result, rpt;
        
        for(int i=0; i<n; i++){
            if(s[i] >= '0' and s[i] <= '9'){
                if(brc){
                    rpt.push_back(s[i]);
                    continue;
                }
                cnt *= 10;
                cnt += (s[i] - '0');
            }
            else if(s[i] == '[' or s[i] == ']'){
                if(s[i] == '['){
                    brc++;
                    if(brc > 1) rpt.push_back(s[i]);
                }
                else if(brc == 1){
                    string tmp = decodeString(rpt);
                    for(int j=0; j<cnt; j++) result += tmp;
                    cnt = 0;
                    brc = 0;
                    rpt.clear();
                }
                else{
                    brc--;
                    rpt.push_back(s[i]);
                }
            }
            else{
                if(cnt == 0) result.push_back(s[i]);
                else rpt.push_back(s[i]);
            }
        }
        return result;
    }
};
