#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mem(x,val) memset(x,val,sizeof(x))
#define F(i,n) for(ll i=0;i<n;i++)
#define pb push_back
#define endl '\n'
#define mod 1000000007
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll t;
    cin>>t;
    for(ll tc=1;tc<=t;tc++)
    {
        ll n;
        cin>>n;
        string s;
        cin>>s;
        stack<char> st;
        st.push(s[0]);
        for(ll int i=1;i<n;i++)
            {
              if(!st.empty() && ((st.top()=='A' && s[i]=='B') || (st.top()=='B' && s[i]=='A')))
                st.pop();
              else
                st.push(s[i]);
            }
            if(st.size()==1)
              cout<<"Case #"<<tc<<": "<<"Y"<<endl;
            else
              cout<<"Case #"<<tc<<": "<<"N"<<endl;
}
return 0;
}