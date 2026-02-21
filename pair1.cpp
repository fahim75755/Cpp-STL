#include <bits/stdc++.h>
using namespace std; 
int main() {
 
pair<int,int>p;
p=make_pair(3,6);

p.first++;
cout<<p.first<<" "<<endl;

pair <string , vector<int>>q;
q ={"fahim",{5,3,1}};
cout<<q.first<<" "<<q.second.size()<<endl;

pair<int,int>p1,p2;

p1={5,3};
p2={5,10};
if(p1<p2){
    cout<<"yes"<<endl;

}
pair<int,int> t =min(p1,p2);//stores smaller one
cout<<t.first<<" "<<t.second<<endl;

}