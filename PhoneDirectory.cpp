struct link{
        link *pointer[26];
        bool end=false;
        bool isContainKey(char ch){
          return (pointer[ch-'a']!=NULL);
        }
        void put(char ch,link *l){
            pointer[ch-'a']=l;
        }
        link *get(char ch){
            return pointer[ch-'a'];
        }
        void setend(){
            end=true;
        }
        bool isEnd(){
            return end;
        }
    };
    link *root;
    
class Solution{
public:
 pair<bool,link*> search(string& pre,link* curr,int pos,string& temp){
        if(!curr)return {false,NULL};
        if(pre.size()==pos)return {true,curr};
        temp+=pre[pos];
        return search(pre,curr->pointer[pre[pos]-'a'],pos+1,temp);
    }
    void insertAll(link* curr,string& temp,vector<string>& t){
        if(curr->isEnd()){
            t.push_back(temp);
            for(int i=0;i<26;i++){
                if(curr->pointer[i]){
                    temp+=char(i+97);
                    insertAll(curr->pointer[i],temp,t);
                    temp.pop_back();
                }
            }
            return;
        }
        for(int i=0;i<26;i++){
            if(curr->pointer[i]){
                temp+=char(i+97);
                insertAll(curr->pointer[i],temp,t);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        root = new link();
         int i,l,j;
         string temp;
         link *node=root;
    for(j=0;j<n;j++){
        node=root;
        temp=contact[j];
   
        for(i=0;i<temp.length();i++){
            
            if(!node->isContainKey(temp[i])){
                node->put(temp[i],new link());
                
                
                
            }
            
         
       
            node=node->get(temp[i]);
        }
        node->setend();
    }
    vector<vector<string>>ans;
     node=root;
     string pre="";
    for(i=0;i<s.length();i++){
        pre+=s[i];
        string temp="";
             auto p=search(pre,root,0,temp);
            if(p.first){
                vector<string> t;
                insertAll(p.second,temp,t);
                ans.push_back(t);
            }else{
                ans.push_back({"0"});
            }
        }
    
    
        return ans;
       
    }
