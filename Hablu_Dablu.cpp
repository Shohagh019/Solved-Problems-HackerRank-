#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ll n,h;
    cin>>n>>h;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        ll x;
        cin>>x;
        mx=max(mx,x);
    }
    ll dp=0;
    for(int i=1; i<=mx-1; i++)
    {
        dp+=i;
    }
    if(h-dp<1) cout<<"Dablu"<<endl;
    else cout<<"Hablu"<<endl;
    return 0;
}