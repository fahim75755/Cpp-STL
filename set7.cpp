#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main(){
    optimize();

    set<int>s={5,5,5,5,4,4,4,3,3,2,9,6,122,89,7};
cout<<"first element "<<*++s.begin()<<" "<<endl;
cout<<"first element "<<*s.begin()++<<" "<<endl;

  for (auto it = s.begin(); it != s.end(); it++) {
        std::cout << *it << " ";
    }
    cout<<"last element "<<*s.rbegin()<<" "<<endl;
}