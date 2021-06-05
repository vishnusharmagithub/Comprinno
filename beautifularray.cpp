#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define rep(i, n) for (int i = 0; i < n; i++)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main()
{
    fast int t, other = 0, minus = 0, one = 0;
    ;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        rep(i, n)
        {
            cin >> arr[i];
            if ((arr[i] > 1 || arr[i] < -1))
                other++;

            if (arr[i] == -1)
                minus++;

            if (arr[i] == 1)
                one++;
        }

        if(minus==0)
        {
            if(other>1)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
        else if(other==0)
        {
            if(one==0 && minus>1)
                cout<<"no\n";
            else
                cout<<"yes\n";
        }
        else
            cout<<"no\n";
        other = 0, minus = 0, one = 0;
    }
    return 0;
}