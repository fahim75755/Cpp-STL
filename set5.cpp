#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
set<int,greater<int>>s;

//greater<int> this comparator helped to reverse the sort
//<int> the type here will be the same as other values in set

s.insert(4);
s.insert(3);
s.insert(99);
s.insert(1);
s.insert(4);
s.insert(3);
s.insert(9);
s.insert(16);

for(auto u:s)
cout<<u<<" ";
cout<<endl;

}


