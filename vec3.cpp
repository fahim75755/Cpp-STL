#include<bits/stdc++.h>

using namespace std;

int main(){

int arr[]={5,5,4,0,9,8};

vector<int> v ={23,235,5,1,56,44,3};
sort(arr+0,arr+5);

for(int i =0;i<5;i++){

    cout<<arr[i];
}
cout    <<endl;

sort(v.begin()+2,v.begin()+6);
for (auto u:v)
cout<<u<<" ";
cout<<endl;

vector<int> vec={5,4,1,0,12,18,10,23,21};

sort(v.begin(),v.end() ,greater<int>());//greater values come first


for(auto u:v)
cout<<u<<" ";
cout<<endl;


sort(v.rbegin(),v.rend());//reverse order sorting
for(auto u:v)
cout<<u<<" -";
cout<<endl;


vector <int>d ={6,1,4};
reverse (d.begin(),d.end());
for(auto u :d)
cout<<u<<" ";
cout<<endl;

}