#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
 set<int>s ={1,5,5,3,3,55};

 cout<<s.size()<<endl;

 for(auto u:s)
 cout<<u<<" ";
cout<<endl;
 set<int>:: iterator it;
 for(it=s.begin();it!=s.end();it++)
 cout<<*it<<"  ";

 cout<<endl;
 s.clear();
 cout<<s.empty()<<endl;
//set<int>::iterator it1;           // Can point to any set<int>
//set<string>::iterator it2;        // Can point to any set<string>  
//vector<int>::iterator it3;        // Can point to any vector<int>
///short cut below
//set<int> s = {1, 2, 3};
//auto it = s.begin();  // Compiler automatically determines the type

unordered_set<int>p;//prints in random order or no guarantee of sorting
//avg case complex O(1);

p.insert(3);
p.insert(5);
p.insert(4);
p.insert(1);
cout<<"------------------------";

for(auto itt=p.begin();itt!=p.end();itt++){
    cout<<*itt<<" ";
    cout<<endl;
}

}