#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int c = 0, d = 0;
        for (int i = 0; i < n; i++)
        {
            if ((a[i] == "cookie" || a[i] == "milk") && a[i + 1] == "milk")
                c++;
            else if (a[i] == "milk" && a[i + 1] == "milk")
                c++;
           
            else if (a[i] == "cookie" && (a[i + 1] == "cookie"||a[i] == "cookie"))
                d++;
        }
        if (d >= 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}