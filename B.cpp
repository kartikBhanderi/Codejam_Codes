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
        string s;
        cin>>s;
        int n=s.length();
        string ans="";

        vector<int> v;
        for(char c:s) v.push_back(c-'0');
        //deb(v);

        int ld=0;
        int diff;
        for(int i=0;i<n;i++)
        {
            int cd=v[i];
            //trace(cd);
            diff=cd-ld;
            ld=cd;
            if(diff>0)
            {
                string tmp(diff,'(');
                ans+=tmp;
            }
            else if(diff<0)
            {
                string tmp(abs(diff),')');
                ans+=tmp;
            }
            ans+=char(cd+'0');
        }
        diff=0-ld;
        if(diff>0)
        {
            string tmp(diff,'(');
            ans+=tmp;
        }
        else if(diff<0)
        {
            string tmp(abs(diff),')');
            ans+=tmp;
        }

        cout<<"Case #"<<tt-t<<": "<<ans<<endl;
    }
    return 0;
}
