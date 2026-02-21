#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
map<string,int> count;

cin>>n;
    while(n--){
        cin>>s;
count[s]++;
if(count[s]>1)
    cout<<s<<count[s]-1<<endl;
else cout<<"OK"<<endl;

}
    }

