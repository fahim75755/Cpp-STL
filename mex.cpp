/*
O(n) MEX
int n = v.size();
vector<bool>has(n+1);
for(auto u:v) {
    if(u>=0 && u<=n) has[u]=1;
}
ll mex=0;
while(has[mex]) mex++;
cout<<mex<<endl;

// to find all not present elements
    vector<ll>v(n),ans;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    for(ll i=0;i<n;i++){
        if(mp[i]==0)ans.push_back(i);
    }


*/