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
            map<pair<int,int>,queue<int>> mp;
            vector<pair<int,int>> v;
            for(int i=0;i<n;i++)
            {
                int l,r;
                cin>>l>>r;
                mp[{l,r}].push(i);
                v.push_back({l,r});
            }
            int j=0,c=0;
            sort(v.begin(),v.end());

            string ans(n,'x');
            bool flag=true;
            for(int i=0;i<n;i++)
            {
                int st=v[i].first;
                int et=v[i].second;
                if(j<=st)
                {
                    j=et;
                    int fr=mp[{st,et}].front();
                    mp[{st,et}].pop();
                    ans[fr]='J';
                }
                else if(c<=st)
                {
                    c=et;
                    int fr=mp[{st,et}].front();
                    mp[{st,et}].pop();
                    ans[fr]='C';
                }
                else
                {
                    flag=false;
                    break;
                }
            }
            cout<<"Case #"<<tt-t<<": ";
            if(flag) cout<<ans<<endl;
            else cout<<"IMPOSSIBLE\n";
        }
        return 0;
    }
