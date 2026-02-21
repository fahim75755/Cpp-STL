#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    v.push_back("bangla");
    v.push_back("eng");
    v.push_back("eng");

    sort(v.begin(),v.end());

    int size = unique (v.begin(),v.end())-v.begin();

    cout<<size<<endl;


    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;

    }


    int a=9530;
    string p= to_string(a);//conversion int value to string
    cout<<p<<endl;
    string q= "56";
    int f =stoi (q);//string to int
    cout<< f+2<<endl;


}