//submissions link: https://leetcode.com/problems/ransom-note/submissions/1977202829/

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.size();
        int m = ransomNote.size();

        vector<int> cnt(26, 0);
        for(int i=0; i<n; i++){
            cnt[magazine[i]-'a']++;
        }
        for(int i=0; i<m; i++){
            int cur = ransomNote[i] - 'a';
            if(cnt[cur] == 0) return false;
            cnt[cur]--;
        }
        return true;
    }
};
