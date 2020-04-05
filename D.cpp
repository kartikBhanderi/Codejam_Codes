#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define inf 1000000005
#define check exit(0)
#define nl cout<<endl;
#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define trace(x) cerr<<#x<<" : "<<x<<endl;
#define deb(v) for(int i=0;i<v.size();i++) {cout<<v[i]; (i==v.size()-1) ? cout<<"\n":cout<<" "; }
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace __gnu_pbds;
using namespace std;


int stringtoint(string s)
{
    int ans;
    stringstream gharkainput(s);
    gharkainput>>ans;
    return ans;
}

void Func(string& s)
{
    for(char& all:s)
    {
        if(all=='1')all='0';
        else if(all=='0')all='1';
    }
}


ll power(ll base,ll exp)
{
    // mod ka dhyan rkhe ;)
    ll ans=1;
    //base%=mod;
    while(exp>0)
    {
        if(exp&1) ans = (ans*base);
        base = (base*base);
        exp/=2;
    }
    return ans;
}

int main() 
{
    int n,t;
    cin>>t>>n;
    while(t--)
    {
        char le,cha;
        string s(n,'?');
        int i,j,x=-1,y=-1;
        for(i=1,j=0;j<n/2;i+=2)
        {
            if(i>10 && i%10==1)
            {
                if(y!=-1)
                {
                    cout << y+1 << endl;
                    cin >> le;
                    if(s[y]!=le)Func(s);
                }
                else {cout << "1\n";cin>>le;}
                if(x!=-1)
                {
                    cout << x+1 << endl;
                    cin >> le;
                    if(s[x]!=le)reverse(s.begin(),s.end());
                }
                else 
                {
                    cout << "1\n";
                    cin>>le;
                }
            }
            else
            {
                cout << j+1 << endl;
                cin >> s[j];
                cout << n-j << endl;
                cin >> s[n-1-j];
                if(s[j]==s[n-1-j])y=j;
                else if(s[j]!=s[n-1-j]) x=j;
                ++j;
            }
        }
        cout<<s<<endl;
        cin>>cha;
        if(cha=='N')return 0;
    }
}
