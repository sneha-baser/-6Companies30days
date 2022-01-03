 vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        int i,l;
        l=string_list.size();
        map<string,vector<string>>m;
        for(i=0;i<l;i++){
            string temp=string_list[i];
            sort(temp.begin(),temp.end());
            m[temp].push_back(string_list[i]);
        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        return ans;
        
    }
