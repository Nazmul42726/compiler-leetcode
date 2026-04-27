//submission link: https://leetcode.com/problems/regular-expression-matching/submissions/1983569400/

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty()) return s.empty();

        bool firstMatch = (s.size() and (s[0] == p[0] or p[0] == '.'));

        if(p.size() > 1 and p[1] == '*'){
            bool usingStar = (firstMatch and isMatch(s.substr(1), p));
            bool notUsingStar = isMatch(s, p.substr(2));

            return (usingStar or notUsingStar);
        }
        else return (firstMatch and isMatch(s.substr(1), p.substr(1)));
    }
};
