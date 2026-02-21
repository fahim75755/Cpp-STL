#include<bits/stdc++.h>
using namespace std;

int main(){




    string s;
getline(cin,s);

    //sort(s.begin(),s.end());//according to ascii

    //int size=unique(s.begin(),s.end())-s.begin();
//for (int i=0;i<size;i++)
    //cout<<s[i];
    cout<<*max_element(s.begin(),s.end())<<endl;
    cout<<*min_element(s.begin(),s.end())<<endl;

    s.erase(s.begin());
    s.erase(s.end()-1);

    cout<<s<<endl;
    
    


}