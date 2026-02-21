#include<bits/stdc++.h>
using namespace std;

int main(){

    //sorted unique ele
    map<int,bool>vis;
    vector<int>v ={6,6,7,4 ,5, 6 ,2};
//
    for(auto u: v) vis[u]=1;

    for(auto u:vis){
        cout<<u.first<<"   "<<u.second<<endl;
    }

//pushing map in a vec

vector<map<string,int>> p;

map <string,int>c;
c["A"]=5;

p.push_back(c);
cout<<p[0]["A"]<<endl;

}
