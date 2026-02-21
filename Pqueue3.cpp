#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
optimize();


priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;


q.push({4,3});
q.push({3,2});
q.push({1,88});
q.push({0,1});
q.push({34,2});
q.push({99,2});
q.push({0,12});

while(!q.empty()){
    cout<<q.top().first<<" "<<q.top().second<<endl;
    q.pop();
}
}