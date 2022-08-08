//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.


//    resources :     https://www.youtube.com/watch?v=6PDtgHhpCHo&list=PL2_aWCzGMAwLL-mEB4ef20f3iqWMGWa25&index=6




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


void leastPrimeFactor(int n)
{
    vector<int>least_prime(n + 1 , 0);
    least_prime[0] = least_prime[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        if (least_prime[i] == 0)
        {
            least_prime[i] = i;

            for (int j = i * i; j <= n; j += i)
            {
                if (least_prime[j] == 0)
                    least_prime[j] = i;
            }
        }
    }

    cout << "least prime of " << n << " = " << least_prime[n];
}

void allFactors(int n)
{
    vector<int>factors;
    int count = 0;
    for (int i = 1; i * i <= n ; ++i)
    {
        if (n % i == 0)
        {
            if (i % 2 == 0) {
                count++;
                factors.push_back(i);
            }
            if (i * i != n) {
                if ((n / i) % 2 == 0)
                    factors.push_back(n / i);
                if (i % 2 == 0)count++;
            }

        }
    }
    sort(all(factors));
    cout << "The factors of " << n << " = " ;
    out(factors);
    cout  << "even factor = " << count;
}


void primeFactors(int n)
{
    int count;

    for (int i = 2; i*i <= n; ++i)
    {
        if (n % i == 0)
        {
            count = 0;
            while (n % i == 0)
            {
                n /= i;
                count++;
            }
            while (count--)
                cout << i << " ";
        }
    }
    if(n != 1)
        cout << n;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n; cin >> n;
    //leastPrimeFactor(n);
    //allFactors(n);
    primeFactors(n);
    return 0;
}
