
string encode(string src)
{     
  //Your code here 
  int l=src.length(),i;
  char c;
  c=src[0];
  int count=1;
  string ans="";
  for(i=1;i<l;i++){
      if(src[i]==c)
      count++;
      else{
          ans=ans+c;
        
          ans=ans+char(count+'0');
          count=1;
          c=src[i];
      }
      
  }
  ans=ans+c;
          ans=ans+char(count+'0');
  return ans;
}    
