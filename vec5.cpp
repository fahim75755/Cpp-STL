#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int>v ={5,2,2,2,2,3,10,9,7};

    sort(v.begin(),v.end());

    int size = unique(v.begin(),v.end())-v.begin();

    for(int i =0;i<size;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
vector<int>:: iterator it= max_element(v.begin(),v.end());
int n= max_element(v.begin(),v.end()) -v.begin();

//  !!!   max_element -> O(n)
//  !!!   min_element -> O(n)

//*max... dile dereferenced hbe
//this func returns iterator of max ele
//so to get index we subtracted two pointers to know the distance

cout<<n<<endl;

}