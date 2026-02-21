 #include<bits/stdc++.h>
 using namespace std;

 int main(){
    int t;
    cin>>t;
    cin.ignore();
while (t--){
        string s;
        getline(cin,s);
string temp;
vector<string>v;

for(auto u:s){
    if(isspace(u)){
        v.push_back(temp);
        temp.clear();
    }
    else temp += u;
}

v.push_back(temp);
int Max=0;
map<string,int>count;
for(auto u: v){
count[u]++;
Max= max(Max,count[u]);
}

string ans;
for(auto u:v){
    if(count[u]==Max){
        ans =u;
        break;
    }
}
cout<<ans<<"  "<<Max<<endl;
    }
 }