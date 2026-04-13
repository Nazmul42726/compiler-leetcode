//submission link: https://leetcode.com/problems/all-paths-from-source-to-target/submissions/1975186083/

class Solution {
public:
    void dfs(int cur, int prnt, vector<vector<int>>& graph, vector<vector<int>>& result, vector<int>& curPath, int n){
        curPath.push_back(cur);

        for(auto child: graph[cur]){
            if(child != prnt){
                dfs(child, cur, graph, result, curPath, n);
            }
        }
        if(cur == n-1) result.push_back(curPath);
        curPath.pop_back();
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int> curPath;
        vector<vector<int>> result;
        dfs(0, 0, graph, result, curPath, n);
        return result;
    }
};
