#include <bits/stdc++.h>
using namespace std; 
int main() {

    vector<pair<int,int>>v;
   v.push_back({10,6});
   v.push_back({3,9});
   v.push_back({2,0});
   v.push_back({3,4});
   v.push_back({8,6});
   v.push_back({3,4});

   sort(v.begin(),v.end());

   for(auto u: v){
    cout<<u.first<<" "<<u.second<<endl;

   }
   cout<<"----------"<<endl;
   pair<int,int>q[]={{5,6},{3,4},{5,5},{9,0}};
   sort(q,q+4);
    for(int i=0;i<4;i++){
        cout<<q[i].first <<" "<<q[i].second<<endl;

    }
    cout<<"---------"<<endl;

    int size =unique(v.begin(),v.end())-v.begin();
for(int i=0;i<size;i++){

    cout<<v[i].first<<" "<<v[i].second<<endl;

}

}