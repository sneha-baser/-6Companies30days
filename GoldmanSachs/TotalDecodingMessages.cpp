int CountWays(string str){
		    // Code here
		    int l=str.length();
		    if(str[0]=='0')
		    return 0;
		    if(l==1 )
		    return 1;
		    int i;
		    int count1=1,count2=1;
		    for(i=1;i<l;i++){
		        int count=0;
		        int d=str[i]-'0';
		        if(d>0)
		        count=(count+count2)%1000000007;
		        int dd=(str[i-1]-'0')*10 + d;
		        if(dd>9 && dd<=26)
		        count=(count+count1)%1000000007;
		        count1=count2%1000000007;
		        count2=count%1000000007;
     }
        return count2%1000000007;
    }
