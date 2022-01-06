 int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0;
        int l=nums.size();
        int j=0,i;
        int ans=INT_MAX;
        for(i=0;i<l;i++){
            sum=sum+nums[i];
            if(sum>=target){
                ans=min(ans,i-j+1);
                while(sum>=target){
                        ans=min(ans,i-j+1);
                    sum=sum-nums[j];
                    j++;
                }
                
            }
        }
        if(ans==INT_MAX)
            ans=0;
        return ans;
        
    }
