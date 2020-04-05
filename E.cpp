#include <bits/stdc++.h>

using namespace std;

bool rs[60][60], cs[60][60],flag;
int puck[60][60];
int n,k,t;


void MyFunc(int aadu, int ubhu, int m) 
{
    if(aadu == n && ubhu == n + 1 && m == k && !flag) 
    {
        flag = true;
        cout << "Case #" << t << ": " << "POSSIBLE\n";
        for (int i = 1; i <= n; ++i) 
        {
            for (int j = 1; j <= n; ++j) 
            {
                cout << puck[i][j] << " ";
            }
            cout <<endl;
        }
        return;
    } 
    else if (aadu > n) 
    {
        return;
    }
    else if (ubhu > n) 
    {
        MyFunc(aadu + 1, 1, m);
    }
    for (int i = 1; i <= n && !flag; ++i) 
    {
        if (!rs[aadu][i] && !cs[ubhu][i]) 
        {
            rs[aadu][i] = cs[ubhu][i] = true;
            if (aadu == ubhu) 
            {
                m=m+i;
            }
            puck[aadu][ubhu] = i;

            MyFunc(aadu, ubhu + 1, m);

            rs[aadu][i] = cs[ubhu][i] = false;
            if (aadu == ubhu) 
            {
                m=m-i;
            }
            puck[aadu][ubhu] = 0;
        }
    }
}

int main() 
{
    int total;
    cin>>total;
    for (t = 1; t <=total; ++t) 
    {
        cin>>n>>k;
        MyFunc(1, 1, 0);
        if (!flag) cout << "Case #" << t << ": " << "IMPOSSIBLE\n";
        flag = false;
    }
    return 0;
}
