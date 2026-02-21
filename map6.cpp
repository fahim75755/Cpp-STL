#include<bits/stdc++.h>
using namespace std;

int main(){

    map <int,int>count;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        count[a]++;
    }
    int ans=0;
    for(auto u:count){
        if(u.second>=u.first)
        ans+= u.second-u.first;
        
        else ans +=u.second;

}
cout<<ans<<endl;


}