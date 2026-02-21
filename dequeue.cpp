#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();
    deque<int>dq;
    dq.push_front(22);
    dq.push_front(50);
    dq.push_front(58);
    dq.push_front(45);
    dq.push_front(5);
    dq.push_front(0);
    dq.push_back(4);
    dq.push_back(99);

    cout<<dq.front()<<" "<<dq.back()<<endl;
    dq.pop_front();
    cout<<dq.front()<<" "<<dq.back()<<endl;
  cout<<  dq.size()<<endl;
  cout<<dq.empty()<<endl;
  
}