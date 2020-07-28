#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
#define crap ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
int main(){
    crap;
    ll t;
    cin>>t;
    for(ll tc=1;tc<=t;tc++)
    {
        ll n;
        cin>>n;
        string I,O;
        cin>>I>>O;
        char a[n][n];
        for(ll int i=0;i<n;i++)
            {
                for(ll int j=0;j<n;j++)
                {
                    if(i==j)
                        a[i][j]='Y';
                    else
                        a[i][j]='N';
                }
            }
           for(ll int i=0;i<n;i++)
           {
                ll ind=i;
                while(O[ind]!='N' && ind<n)
                {
                    if(ind!=i)
                    {
                        if(I[ind]=='Y')
                            a[i][ind]='Y';
                        else
                            break;
                    }
                    ind++;
                }

                if(O[ind]=='N' && I[ind]=='Y')
                    a[i][ind]='Y';

                ind=i;
                while(O[ind]!='N' && ind>=0)
                {
                    if(ind!=i)
                    {
                        if(I[ind]=='Y')
                            a[i][ind]='Y';
                        else
                            break;
                    }
                    ind--;
                }
                
                if(O[ind]=='N' && I[ind]=='Y')
                    a[i][ind]='Y';
           } 
           cout<<"Case #"<<tc<<":"<<endl;
            for(ll int i=0;i<n;i++)
            {
                for(ll int j=0;j<n;j++)
                {
                    cout<<a[i][j];
                }
                cout<<endl;
            }
}
return 0;
}