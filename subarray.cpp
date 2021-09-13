//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 3.14159
#define pb push_back
void input_output()
{
    /* #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif */
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    input_output();

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }

        for (int i = 0, l = 1; i < v.size(); i++, l++)
        {
            for (int j = l; j <= v.size(); j++)
            {
                for (int m = i; m < j; m++)
                {
                    cout << v[m] << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}