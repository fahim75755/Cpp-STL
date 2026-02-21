#include<bits/stdc++.h>
using namespace std;

int main(){


    vector<int>v ={5,1,23,6,90,7,78,6};

    cout<<v.back()<<endl;//last ele print

    v.pop_back();//last ele delet
    cout<<v.back()<<endl;
cout<<*v.begin()<<endl;
v.erase ( v.begin()+2);

cout<<v.size()<<endl;

for(auto u:v)
cout<<u<<" ";
cout<<endl;

reverse (v.begin(),v.end());
//after reverse then deletion (in front ele)is efficient 

while (! v.empty())
{
    cout<<v.back()<<endl;
v.pop_back();
}
cout<<v.size()<<endl;
}