 string decodeString(string s) {
        int l=s.length();
        int i,j;
        stack<string>st;
        int currnum=0;
        string currstring="";
        for(i=0;i<l;i++){
            if(s[i]=='['){
                st.push(currstring);
                // cout<<currnum<<" ";
                st.push(to_string(currnum));
                currstring = "";
                currnum = 0;
            }
            else if(s[i]==']'){
                string s= st.top();
                int num= stoi(s);
                // cout<<num<<" ";
                st.pop();
                string prevs= st.top();
                st.pop();
                string temp=currstring;
                for(j=1;j<num;j++)
                    currstring=currstring+temp;
                currstring = prevs+ currstring;
            }
            else if(isdigit(s[i]))
                currnum = currnum*10+s[i]-'0';
            else
                currstring = currstring+ s[i];
        }
        return currstring;
        
    }
