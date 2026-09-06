class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        unordered_map<int,vector<int>> mp;
        int j=0,ans=0;
        if(nums.size()==0)return 0;
        mp[0].push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
             if(nums[i-1]+1==nums[i]){
                mp[j].push_back(nums[i]);
             }
             else if(nums[i-1]==nums[i])continue;
             else{
                j=j+1;
                 mp[j].push_back(nums[i]);
             }
        }
        for(auto it:mp){
            int s=it.second.size();
            cout<<it.first<<"  ";
            ans=max(ans,s);
        }
        return ans;
    }
};