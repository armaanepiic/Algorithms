//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.

//  resources :   https://www.youtube.com/watch?v=dolcMgiJ7I0&list=PL2_aWCzGMAwLL-mEB4ef20f3iqWMGWa25&index=5



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



void allFactors(int n)
{
    vector<int>factors;

    for (int i = 1; i*i <= n ; ++i)
    {
        if(n % i == 0)
        {
            factors.push_back(i);
            if(i*i != n)
                factors.push_back(n/i);
        }
    }
    sort(all(factors));
    cout << "The factors of " << n << " = " ;
    out(factors);
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    int n;cin>>n;
    //leastPrimeFactor(n);
    allFactors(n);
    return 0;
}
