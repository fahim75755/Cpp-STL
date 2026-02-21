#include <bits/stdc++.h>
using namespace std;

int main(){
    
map <string,string> gender;
gender ["fahim"]="male";
gender["rupa"]="female";
gender["robert"]="male";

cout<<gender["fahim"]<< " "<<gender["rupa"]<<endl;
for(auto u: gender){
cout<<u.first<<"  "<<u.second<<endl;
}

vector <long long int >v ={23,1094,1004,1004,1094,6,6,8,8,8,8};
map<long long , int> count;

for(int i =0;i<v.size();i++){
count[v[i]]++;
}
cout <<count[1004]<<" --- "<<count[1094] <<endl;

for(auto u: count){
    cout<<u.first<<"  "<<u.second<<endl;
cout<<"aa ";
}
    
}