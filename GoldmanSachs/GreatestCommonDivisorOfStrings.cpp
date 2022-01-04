 string gcdOfStrings(string str1, string str2) {
        int i,l1,l2,j;
        l1=str1.length();
        l2=str2.length();
        i=0,j=0;
        string s;
        if(l2<l1)
            swap(str1,str2);
        for(j=str1.size();j>=1;j--){
            if(str1.size()%j!=0)
                continue;
            if(str2.size()%j!=0)
                continue;
            int flag=1;
            s=str1.substr(0,j);
            for(i=0;i<str1.size();i=i+j){
                if(str1.substr(i,j)!=s)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                continue;
             for(i=0;i<str2.size();i=i+j){
                if(str2.substr(i,j)!=s)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                continue;
            
            return s;
            
        }
        
     return "";   
        
    }
