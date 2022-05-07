//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;


#define     pb              push_back
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()



int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    

    string a , b ;
    cin >> a >> b;
    int temp = 0 , rem = 0, carry=0;
    string c = "";
    int len1 = sz(a);

    for (int i = 0; i < len1; ++i)
    {
        temp = a[len1 - i - 1 ]- '0' + b[len1 - i - 1 ]- '0' + carry;
        if(temp > 9)
        {
            int m = temp%10;
            c+='0'+m;
            carry = temp/10;
            // temp+=carry;
        }
        else
        {
            c+='0'+temp;
            carry = 0;
        }
    }
    if(carry > 0)
        c+='0'+carry;
    int len3= sz(c);
    for (int i = 0; i < len3; ++i)
    {
        cout << c[len3-i-1];
    }
  
    return 0;
}
