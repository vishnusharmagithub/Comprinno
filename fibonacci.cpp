#include <bits/stdc++.h>
using namespace std;
int32_t main()
{
    int t=1;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int vis[26]={0},k=0;
        for(int i=0;i<a.size();i++)
        vis[a[i]-'a']++;
        for(int i=0;i<26;i++)
        if(vis[i]>0)
        k++;
        int b[k];
        k=0;
        for(int i=0;i<26;i++)
        if(vis[i]>0)
        b[k++]=vis[i];
        sort(b,b+k);
        int f=0,ff=0;
        if(k>2)
        {
            for(int i=2;i<k;i++)
            {
                if(b[i]!=(b[i-1]+b[i-2]))
                {
                    f=1;
                    break;
                }
            }
            swap(b[0],b[1]);
            for(int j=2;j<k;j++)
            if(b[j]!=(b[j-1]+b[j-2]))
            {
                ff=1;
                break;
            }
        }
        if(!ff or !f)
        cout<<"Dynamic\n";
        else
        cout<<"Not\n";
    }
    return 0;
}