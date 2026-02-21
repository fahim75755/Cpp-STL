#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);//makes the cin,cout faster
#define endl '\n'

int main(){

    optimize();

char c='a';
    bool f1 =isupper(c);
cout<<f1<<endl;
bool f2 =islower(c);
cout<<f2<<endl;
bool f3 =isspace (c);
cout<<f3<<endl;
bool f4=isalpha(c);
cout<<f4<<endl;

char n = toupper (c);
cout<<n<<endl;

string q="bangladesh";
q.erase (q.begin()+2,q.begin()+6);
cout<<q<<endl;

string a1="pakistan";
string a2="bangladesh";

copy (a1.begin()+2,a1.begin()+4,back_inserter(a2));
cout<<a2<<endl;

a1.erase(remove(a1.begin(),a1.end(),'a'),a1.end());
cout<<a1<<endl;

}