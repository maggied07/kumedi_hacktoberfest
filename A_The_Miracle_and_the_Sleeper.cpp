
#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int main()
{
    IOS;
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        if(a>ceil(b/2.0))
        {
            cout<<b-a<<endl;
        }
        else
        {
            if(b%2!=0)
            {
                ll x=(b-1)/2;
                ll y=b-x-1;
                cout<<y<<endl;
            }
            else
            {
                ll x=b/2+1;
                cout<<b-x<<endl;
            }
        }
    }
}
