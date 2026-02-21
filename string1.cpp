#include<bits/stdc++.h>
using namespace std;

int main(){

string s1 ="a";
string s2="b";
s1.clear();
cout<<s1<<endl;
cout<<s2.empty()<<endl;   //0- if not empy . 1-if empty
string s3="BANGLADESH";

string ::iterator it;
for(it=s3.begin();it!=s3.end();it++){


    cout<<*it;

}
cout<<endl;
// s.pop_back();
//s.back();

for(auto u: s3)
cout<<u;
cout<<endl;

}