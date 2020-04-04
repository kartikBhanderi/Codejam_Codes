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
        int n,tr;
        cin>>n>>tr;
        cout<<"Case #"<<tt-t<<": ";
        if(n==3)
        {
            if( tr==4 || tr==5 ||tr==7 ||tr==8)
            {
                cout<<"IMPOSSIBLE\n";
            }
            else
            {
                cout<<"POSSIBLE\n";
                if(tr==3) cout<<"1 2 3\n3 1 2\n2 3 1";
                if(tr==6) cout<<"1 2 3\n2 3 1\n3 1 2";
                if(tr==9) cout<<"3 1 2\n2 3 1\n1 2 3";
                cout<<endl;
            }
            
        }
        if(n==2)
        {
            if(tr==3)
            {
                cout<<"IMPOSSIBLE\n";
            }
            else
            {
                cout<<"POSSIBLE\n";
                if(tr==2) cout<<"1 2\n2 1";
                if(tr==4) cout<<"2 1\n1 2";
                cout<<endl;
            }
        }
        if(n==4)
        {
            if(tr==5 || tr==15)
            {
                cout<<"IMPOSSIBLE\n";
            }
            else
            {
                cout<<"POSSIBLE\n";
                if(tr==4) cout<<"1 2 3 4\n2 1 4 3\n3 4 1 2\n4 3 2 1";
                if(tr==6) cout<<"1 2 3 4\n2 1 4 3\n3 4 2 1\n4 3 1 2";
                if(tr==7) cout<<"1 2 3 4\n3 1 4 2\n4 3 2 1\n2 4 1 3";
                if(tr==8) cout<<"1 2 3 4\n2 3 4 1\n3 4 1 2\n4 1 2 3";
                if(tr==9) cout<<"1 2 3 4\n2 4 1 3\n4 3 2 1\n3 1 4 2";
                if(tr==10) cout<<"1 2 3 4\n2 4 1 3\n3 1 4 2\n4 3 2 1";
                if(tr==11) cout<<"1 2 3 4\n3 4 2 1\n2 1 4 3\n4 3 1 2";
                if(tr==12) cout<<"1 2 3 4\n3 4 1 2\n2 3 4 1\n4 1 2 3";
                if(tr==13) cout<<"2 1 3 4\n3 4 2 1\n1 3 4 2\n4 2 1 3";
                if(tr==14) cout<<"3 1 2 4\n1 4 3 2\n2 3 4 1\n4 2 1 3";
                if(tr==16) cout<<"4 1 2 3\n1 4 3 2\n2 3 4 1\n3 2 1 4";
                cout<<endl;
            }
        }
        if(n==5)
        {
            if(tr==6 || tr==24)
            {
                cout<<"IMPOSSIBLE\n";
            }
            else
            {
                cout<<"POSSIBLE\n";
                if(tr==5) cout<<"1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n4 3 5 1 2\n5 4 2 3 1";
                if(tr==7) cout<<"1 2 3 4 5\n3 1 4 5 2\n4 5 2 1 3\n5 3 1 2 4\n2 4 5 3 1";
                if(tr==8) cout<<"1 2 3 4 5\n2 1 4 5 3\n3 5 1 2 4\n5 4 2 3 1\n4 3 5 1 2";
                if(tr==9) cout<<"1 2 3 4 5\n2 1 4 5 3\n4 5 1 3 2\n3 4 5 2 1\n5 3 2 1 4";
                if(tr==10) cout<<"1 2 3 4 5\n2 1 4 5 3\n3 4 5 1 2\n5 3 1 2 4\n4 5 2 3 1";
                if(tr==11) cout<<"1 2 3 4 5\n2 3 1 5 4\n3 5 4 1 2\n4 1 5 2 3\n5 4 2 3 1";
                if(tr==12) cout<<"1 2 3 4 5\n2 3 1 5 4\n3 4 5 1 2\n5 1 4 2 3\n4 5 2 3 1";
                if(tr==13) cout<<"1 2 3 4 5 \n2 3 1 5 4\n5 1 4 2 3\n4 5 2 3 1\n3 4 5 1 2";
                if(tr==14) cout<<"1 2 3 4 5\n2 1 4 5 3\n3 4 5 1 2\n4 5 2 3 1 \n5 3 1 2 4";
                if(tr==15) cout<<"1 2 3 4 5 \n2 3 1 5 4\n3 4 5 1 2\n4 5 2 3 1\n5 1 4 2 3";
                if(tr==16) cout<<"1 2 3 4 5\n2 3 4 5 1\n4 1 5 2 3\n5 4 1 3 2\n3 5 2 1 4";
                if(tr==17) cout<<"1 2 3 4 5\n2 4 1 5 3\n4 3 5 2 1\n5 1 4 3 2\n3 5 2 1 4";
                if(tr==18) cout<<"1 2 3 4 5\n2 4 5 1 3\n3 5 4 2 1\n4 3 1 5 2\n5 1 2 3 4";
                if(tr==19) cout<<"1 2 3 4 5\n2 5 1 3 4\n3 4 5 1 2 \n4 3 2 5 1\n5 1 4 2 3";
                if(tr==20) cout<<"1 2 3 4 5\n2 5 4 1 3\n3 4 5 2 1\n4 3 1 5 2 \n5 1 2 3 4";
                if(tr==21) cout<<"2 1 3 4 5\n1 5 4 2 3\n3 4 5 1 2 \n4 3 2 5 1\n5 2 1 3 4";
                if(tr==22) cout<<"3 1 2 4 5\n1 5 4 2 3\n2 4 5 3 1\n4 3 1 5 2\n5 2 3 1 4";
                if(tr==23) cout<<"4 1 2 3 5\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1 \n5 3 1 2 4";
                if(tr==25) cout<<"5 1 2 3 4\n1 5 3 4 2\n2 4 5 1 3\n3 2 4 5 1\n4 3 1 2 5";
                cout<<endl;
            }
        }
    }
    return 0;
}
