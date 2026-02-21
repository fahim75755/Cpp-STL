#include <bits/stdc++.h>
using namespace std; 
bool cmp(pair<int,int> &p1, pair <int,int>&p2 ){
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first) return (p1.second<p2.second);
return 0;
}


int main() {

    vector<pair<int,int>> v;
    v={{5,6},{3,129},{3,600},{5,56}};

sort( v.begin(),v.end(),cmp);
for(auto u: v)
cout<< u.first<<"  "<<u.second<<endl;

}