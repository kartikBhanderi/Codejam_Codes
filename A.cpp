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
    jaldi
    int t;
    cin>>t;
    int tt=t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) cin>>arr[i][j];
        }

        int trace=0,nr=0,nc=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) trace+=arr[i][j];
            }
        }

        for(int i=0;i<n;i++)
        {
            vector<bool> mp(n+1,false);
            for(int j=0;j<n;j++)
            {
                int ce=arr[i][j];
                if(mp[ce])
                {
                    nr++;
                    break;
                }
                mp[ce]=true;
            } 
        }

        for(int i=0;i<n;i++)
        {
            vector<bool> mp(n+1,false);
            for(int j=0;j<n;j++)
            {
                int ce=arr[j][i];
                if(mp[ce])
                {
                    nc++;
                    break;
                }
                mp[ce]=true;
            }
        }

        cout<<"Case #"<<tt-t<<": "<<trace<<" "<<nr<<" "<<nc<<endl;
    }
    return 0;
}
