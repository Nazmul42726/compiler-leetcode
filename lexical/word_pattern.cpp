//submission link: https://leetcode.com/problems/word-pattern/submissions/1968465660/

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> chStr;
        unordered_map<string, char> strCh;

        int n = s.size();
        int m = pattern.size();

        int j = 0;
        string cur;
        for(int i=0; i<n; i++){
            if(s[i] == ' '){
                if(j == m-1) return false;
                if(chStr.find(pattern[j]) != chStr.end() and chStr[pattern[j]] != cur) return false;
                if(strCh.find(cur) != strCh.end() and strCh[cur] != pattern[j]) return false;
                
                chStr[pattern[j]] = cur;
                strCh[cur] = pattern[j];

                cur.clear();
                j++;
            }
            else cur.push_back(s[i]);
        }
        if(j < m-1) return false;
        if(chStr.find(pattern[j]) != chStr.end() and chStr[pattern[j]] != cur) return false;
        if(strCh.find(cur) != strCh.end() and strCh[cur] != pattern[j]) return false;
        return true;
    }
};
