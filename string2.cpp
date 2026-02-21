#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//makes the cin,cout faster
#define endl '\n'
//using endl causes flash ..makes slow(advanced topic)..thats why alternative way either use \n or define in that way


int main(){

string s1 ="aabsaa";
string s2= s1;

reverse(s2.begin(),s2.end());

if(s2==s1){
    cout<<"yes"<<endl;

}
else cout<<"no"<<endl;
}
//next_permutation() ->
//returns a bool:true → if it could rearrange into a next lexicographically greater permutation.
//false → if it was already the last permutation (largest order).