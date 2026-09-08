class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        vector<pair<int,int>> v;
        for(auto it:trips){
            int p=it[0];
            int from=it[1];
            int to=it[2];
            v.push_back({from,p});
            v.push_back({to,-p});
        }
        sort(v.begin(),v.end(),[](auto &a,auto &b){
            if(a.first==b.first)return a.second<b.second;
            return a.first<b.first;
        });
        int c=0;
        for(auto it:v){
         c=c+it.second;
         if(c>capacity)return false;
        }
        return true;
    }
};