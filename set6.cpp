#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();

    set<pair<int,int>,greater<pair<int,int>>>s;

s.insert({1,3});
s.insert({1,35});
s.insert({5,4});
s.insert({2,88});
s.insert({5,4});
s.insert({21,8});

for(auto u:s)
cout<<u.first<<" "<<u.second<<endl;


}

