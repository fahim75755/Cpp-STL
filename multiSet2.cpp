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
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    auto it= s.find(1);//to delete one duplicate number
    s.erase(it);

    for(auto u:s)
    cout<<u<<" ";
    cout<<endl;
}