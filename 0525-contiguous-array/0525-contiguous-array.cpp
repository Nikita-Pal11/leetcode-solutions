class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans=0;
        map<int,int> mp;
        if(nums[0]==0){
            mp[-1]=0;
            nums[0]=-1;
        }
        else{
            mp[1]=0;
        }
        for(int i=1;i<nums.size();i++ ){
             if(nums[i]==0){
                nums[i]=-1;
             }
             nums[i]=nums[i]+nums[i-1];
             if(nums[i]==0){
                ans = max(ans,i+1);
             }

             if(mp.find(nums[i])!=mp.end()){
               ans=max(ans,i-mp[nums[i]]);
             }
             else{
             mp[nums[i]]=i;
             }
        }
        return ans;
    }
};