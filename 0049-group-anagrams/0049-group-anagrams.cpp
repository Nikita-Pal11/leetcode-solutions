class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<map<char,int>,int> mp;
        vector<vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            map<char,int> x;
            for(int j=0;j<strs[i].size();j++)x[strs[i][j]]++;
            if(mp.find(x)!=mp.end()){
                ans[mp[x]].push_back(strs[i]);
            }
            else{
                mp[x]=ans.size();
                ans.push_back({strs[i]});
            }
        }
        return ans;
    }
};