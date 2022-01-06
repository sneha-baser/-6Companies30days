string printMinNumberForPattern(string s){
        // code here 
        string ans="";
        int c=1,i;
	    stack<int>st;
	    for(i=0;i<=s.length();i++){
	        st.push(c);
	        c++;
	        if( i==s.length() || s[i]=='I' ){
	            while(st.empty()==0)
	            {
	             char c=st.top()+'0';   
	                ans=ans+c;
	                st.pop();
	            }
	        }
	       
	      
	    }
	   // return ans;
	   return ans;
    }
