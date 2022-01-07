 int longestMountain(vector<int>& arr) {
        int i,l;
        l=arr.size();
        int count=1,flag=0,fflag=0;
        int ans=0;
        for(i=1;i<l;i++){
            int j=i;
            count=1;
            flag=0;
            fflag=0;
            while(j<l && arr[j]>arr[j-1]){
                j++;
                count++;
                fflag=1;
            }
            
            while(i!=j && j<l && arr[j]<arr[j-1]){
                j++;
                count++;
                flag=1;
            }
            j--;
            if(flag==1 && fflag==1 && count>=3)
            {
                i=j;
                ans=max(ans,count);
            }
            
        }
        return ans;
        
    }
