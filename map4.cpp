#include<bits/stdc++.h>
using namespace std;

int main(){

int t;
cin>>t;
while (t--){

    int n;
    cin>>n;
    map<string,int>count;

    for(int i=0;i<n;i++){

        string s;
        cin>>s;
        count[s]++;

    }

    int ans =0;

    for(auto u:count){
        if(u.second==2) ans++;

    }
    cout<<ans<<endl;
    
}

}