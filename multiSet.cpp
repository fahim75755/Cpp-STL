#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
    multiset<int>s;
    s.insert(4);
    s.insert(88);
    s.insert(5);
    s.insert(00);
    s.insert(00);
    s.insert(00);
    s.insert(00);
    s.insert(5);

    for(auto u:s)
    cout<<u<<" ";
    cout<<endl;

    cout<<s.count(0)<<endl;
    s.erase(0);

for(auto u:s)
    cout<<u<<" ";
    cout<<endl;

}