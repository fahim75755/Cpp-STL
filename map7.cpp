#include<bits/stdc++.h>
using namespace std;

int main(){
map<string,int> count;
string s;
int n;
cin>>n;

while(n--){

    cin>>s;
    count[s]++;


    if(count[s]>1){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}


}