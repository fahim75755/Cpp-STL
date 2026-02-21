#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();

set<pair<int,int>>s;

s.insert({2,3});
s.insert({4,6});
s.insert({4,3});
s.insert({2,3});
s.insert({4,6});
s.insert({4,3});
//at first sorted on first element ,then second ele

for(auto u: s)
cout<<u.first<<" "<<u.second<<endl;
}