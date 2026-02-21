#include <bits/stdc++.h>
using namespace std; 
int main() {
 
//pair<int,int>p;
//cin>>p.first>>p.second;
//cout<<p.first<<p.second<<endl;

int n;
cin>>n;
vector<pair<string,string>>v (n);
for(int i=0;i<n;i++){
    cin>>v[i].first>>v[i].second;
}

sort(v.begin(),v.end());
int sz=unique(v.begin(),v.end())-v.begin();
cout<<sz<<endl;

}