string FirstNonRepeating(string str){
		    // Code here
		queue<char> q;
int Count[26] = { 0 };
string o;

// traverse whole stream
for (int i = 0; i<str.length(); i++) {

// push each character in queue
q.push(str[i]);

// increment the frequency count
Count[str[i] - 'a']++;

// check for the non pepeating character
while (!q.empty()) {
if (Count[q.front() - 'a'] > 1)
q.pop();
else {
o += q.front() ;
break;
}
}

if (q.empty())
o+= '#' ;
}
return o;
}
