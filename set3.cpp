#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
set<string>s;

s.insert("a");
s.insert("mim");
s.insert("fahim");
s.insert("a");
s.insert("mim");
s.insert("fahim");
//strings are sorted lexicographically
cout<<s.size()<<endl;

for(auto u:s)
cout<<u<<"  ";
cout<<"ff"<<5/10<<endl;
}