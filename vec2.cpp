#include<bits/stdc++.h>

using namespace std;

int main (){
 /*   vector<int>v ={9,3,5,2};

vector <int>:: iterator it;
 for(it =v.begin();it !=v.end();it++){
    cout<<*it<<" ";

 }
 cout<<endl;

 for each loop
 vector<int>p ={4,3,6,5};
 for(int &u:p){
    u +=3;

 }
 for(int u:p){
 cout<<u<<" ";
 }
*/
 int n;
 vector<int>h;
 while (1){

    cin>>n;
    if(n==0){
        break;
    }
    h.push_back(n);
 }
    cout<<h.size()<<endl;
    for(auto u:h)
    cout<<u<<" ";
 

 cout<<endl;
}