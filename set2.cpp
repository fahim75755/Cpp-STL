#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
set<int>s;
s.insert(9);
s.insert(11);
s.insert(2);
s.insert(5);//log 2 (n)
s.insert(5);
s.insert(4);
s.insert(1);


cout<<s.count(2)<<endl;//does 2 exist here or not..
cout<<s.count(8)<<endl;//does 8 exist here

cout<< *s.begin()<<endl;//sorted kore then hishab
cout<<"last ele "<<*(--s.end())<<endl;// *(s.end()--) doesnt work as this is post decre

cout<<*(s.rbegin())<<endl;
s.erase(2);
s.erase(s.begin());
s.erase(--s.end());


}