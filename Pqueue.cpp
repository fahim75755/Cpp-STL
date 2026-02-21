#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
optimize();

//log2n
priority_queue<int>q;

q.push(5);
q.push(1);
q.push(22);
q.push(33);
q.push(50);
q.push(1);
q.push(0);
q.push(99);


cout<<q.top()<<endl;
q.pop();
cout<<q.top()<<endl;
cout<<"-------"<<endl;

while(!q.empty()){
    cout<<q.top()<<endl;
    q.pop();
}
}