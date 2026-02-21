#include<bits/stdc++.h>

using namespace std;

int main(){

vector<int> p={5,6,5};
p.clear();//delets elements
cout<<p.size()<<endl;

cout<<p.empty();//bool func-check whether a func is empty
p.resize(10);//default element 0
cout<<endl;

for(int i=0;i<p.size();i++){
    cout<<p[i]<<" ";
}
vector<int>q (10);//default 0 value.. this is the process to use vector in short cut
vector<int>t(10,6);//default 6 value

vector<int>tmp;
tmp=t; //copies t vector to tmp

//auto it =st.find(v[i]) finds value..gives an iterator..if not found then st.end();
}