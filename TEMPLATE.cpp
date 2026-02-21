
//gcd
int g=0;
for(int i=1;i<=n;i++){
    cin>>arr[i];

    if((arr[i]!=i)){
    g=gcd(g,abs(arr[i]-i));
}
}

int r= 0b101011;
int res=r^(000001<<2);
cout<<bitset<8>(res)<<endl;

    //prime number longest chain
    for(int i=2;i*i<=temp;i++){
        int cnt=0;
        while(temp%i==0){
            temp/=i;
            cnt++;
        }
        ans+=cnt;
    }

    //trick string
    string(n-2,'5');//5 n-2 bar print hbe


    //ebhabe print kra jay
    for(int i=2;i<=n;i++){
			int x;
			cin>>x;
			S+=x;
			cout<<S<<" ";
	}

    ll sum=accumulate(v.begin(),v.end(),0LL);//0LL is initial value..
    //accumulate adds all