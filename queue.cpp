#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main(){
    optimize();
queue<int>q;
q.push(2);
q.push(4);
q.push(77);

q.push(q.front());

cout<<q.front()<<endl;
q.pop();
cout<<q.front()<<endl;
q.push(55);
cout<<q.front()<<endl;
cout<<"-------"<<endl;

while(!q.empty()){
    cout<<q.front()<<endl;
    q.pop();
}
}


