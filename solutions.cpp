#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        string s;
        cin>>n>>q;
        cin>>s;
        vector<vector<int> > ps(27,vector<int>(n+1,0));
        for(int i=0;i<n;i++)
        ps[s[i]-'a'+1][i+1]++;
        for(int i=1;i<=26;i++)
        {
           for(int j=1;j<=n;j++)
            ps[i][j]=ps[i][j-1]+ps[i][j];           
        }
        while(q--)
        {
            int l,r;
            cin>>l>>r;
            int od=0;
            for(int i=1;i<=26;i++)
            {
                //cout<<ps[i][r]<<" "<<ps[i][l-1]<<endl;    
                if((ps[i][r]-ps[i][l-1])%2!=0)
                    od++;
            }
           // cout<<od<<endl;
            if(od<=1)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
}