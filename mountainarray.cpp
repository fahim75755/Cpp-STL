#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[500],n,ans;
    cin>>n;

    int end=n-1,i,key;
    int start=0,mid;
    for(i=0;i<n;i++){
cin>>arr[i];
    }


    while(start<=end){
mid=start +(end-start)/2;

if(arr[mid]>arr[mid-1]){

    ans=mid;
    start=mid+1;

}
else 
end=mid-1;
        
    }
    cout<<ans<<endl;

}