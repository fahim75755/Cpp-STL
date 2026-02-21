#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="aaaaaa";
    string s1 ="aa";
    if(s1<s) cout<<"done"<<endl;

vector<string> v;

    v.push_back("mahim");
    v.push_back("fahim");
    v.push_back("mister");

    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;

    }
    string s5="abcdagata";
s5.erase(remove(s5.begin(),s5.end(),'a'),s5.end());//removes a particular alphabet
cout<<s5<<endl;
s5.pop_back();
cout<<s5<<endl;

}