#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
optimize();
    
int n,m;
priority_queue<int,vector<int>,greater<int>>pq[5][5];// here 25 priority queues
cin>>n;
int arr1[n],arr2[n],arr3[n];

for(int i=0;i<n;i++)
cin>>arr1[i];

for(int i=0;i<n;i++)
cin>>arr2[i];
    
for(int i=0;i<n;i++)
cin>>arr3[i];

for(int i=0;i<n;i++)
pq[arr2[i]][arr3[i]].push(arr1[i]);//rest 20 remains empty 

cin>>m;
while(m--){
int c;
cin>>c;

int ans=INT_MAX;
int f,b;
for(int i=1;i<=3;i++){
   if(!pq[c][i].empty() && pq[c][i].top()<ans){
      ans=pq[c][i].top();
      f=c,b=i;
   }
}
for(int i=1;i<=3;i++){
   if(! pq[i][c].empty() && pq[i][c].top()<ans){
      ans=pq[i][c].top();
      f=i,b=c;     
   }
}

if(ans==INT_MAX)
ans=-1;
else 
pq[f][b].pop();

cout<<ans<<" ";
}
}