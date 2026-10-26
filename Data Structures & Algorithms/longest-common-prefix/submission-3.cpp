class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int n = strs.size();
        for(int i=1;i<n;i++){
            int j = 0;
            int m = strs[i].size();
            while(j<m&&j<ans.size()&& ans[j]==strs[i][j]) j++;
            ans.resize(j);
        }
        return ans;
    }
};