//      problem link:               https://www.spoj.com/problems/TDKPRIME/

   
#include <bits/stdc++.h>
using namespace std;


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;




#define     pb              push_back
#define     mp              make_pair
#define     ff              first
#define     ss              second
#define     sortv           sort(v.begin(), v.end())
#define     rev_sortv       sort(v.begin(), v.end(), greater<int>())
#define     inv             vi v;for(int i = 0; i < n; ++i){int x;cin >> x; v.pb(x);};
#define     out(v)          for(int i = 0; i < v.size(); ++i){cout << v[i] << " ";}cout << endl;
#define     sz(s)           (s).length()
#define     all(x)          (x).begin(), (x).end()
#define     digits(x)       trunc(log10(x))+1
#define     even(x)         (x)%2
#define     inn             int n;cin>>n;


vector<int>primes;

bool ar[90000001];

void sieve()
{
    int maxN = 90000000;
    ar[0] = ar[1] = 1;

    for (int i = 2; i*i <= maxN ; ++i)
    {
        if(ar[i] == false)
        {
            for (int j = i*i ; j <= maxN ; j += i)
            {
                ar[j] = true;
            }
        }
    }
    for (int i = 2; i <= maxN; ++i)
    {
        if(!ar[i])
            primes.pb(i);
    }
    //out(primes);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int t;cin>> t;
    sieve();
    while(t--) {
        int n;cin>>n;
        cout << primes[n-1] << endl;
    }
    return 0;
}






/*

Input:
7
1
10
100
1000
10000
100000
1000000

Output:
2
29
541
7919
104729
1299709
15485863
    
*/
