#include<bits/stdc++.h>

using namespace std;

int main(){

int count =0;


string s ="abcde";

bool f1 =next_permutation (s.begin(),s.end());
//changes the string into the immediate greater string and return 0/1
cout<< f1<<" "<<s<<endl;
do{
    cout<<s<<endl;
    count ++;
    if(count==5){//ei condition na dile sb permutations print hbe then false hy jabe cond
        break;
    }
}while(next_permutation(s.begin(),s.end()) );
return 0;
//
}