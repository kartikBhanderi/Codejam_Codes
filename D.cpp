#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

#define mod 1000000007 
#define check exit(0)
#define nl cout<<endl;
#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
#define ll long long int
#define trace(x) cerr<<#x<<" : "<<x<<endl;
#define deb(v) for(int i=0;i<v.size();i++) {cout<<v[i]; (i==v.size()-1) ? cout<<"\n":cout<<" "; }
#define jaldi ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace __gnu_pbds;
using namespace std;

int main()
{
    //jaldi
    int t,b;
    cin>>t>>b;
    int tt=t;
    while(t--)
    {
        vector<int> ans;
        for(int i=0;i<b;i++)
        {
            int x;
            cout<<i+1<<endl;
            cin>>x;
            ans.push_back(x);
        }
        for(int i=0;i<b;i++ ) cout<<ans[i];
        cout<<endl;
        char c;
        cin>>c;
        if(c=='N') break;
    }
    return 0;
}
