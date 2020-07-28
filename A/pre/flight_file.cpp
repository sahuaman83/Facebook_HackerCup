#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
int main(){
    ifstream in;
    in.open("travel_restrictions_input.txt");
    ofstream out;
    out.open("Aman_facebook.txt");
    ll t;
    in>>t;
    for(ll tc=1;tc<=t;tc++)
    {
        ll n;
        in>>n;
        string I,O;
        in>>I>>O;
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
           out<<"Case #"<<tc<<":"<<endl;
            for(ll int i=0;i<n;i++)
            {
                for(ll int j=0;j<n;j++)
                {
                    out<<a[i][j];
                }
                out<<endl;
            }
}
return 0;
}