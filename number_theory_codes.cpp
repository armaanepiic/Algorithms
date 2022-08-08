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


// Normal method of recognizing a prime number

bool isPrime(int n)
{
    if(n == 1)
        return false;
    for (int i = 2 ; i * i <= n; ++i)
    {
        if(n%i==0)
            return false;
    }
    return true;
}


// sieve of erathosthenes

int prime[10000001];

void sieve(int n)
{
    prime[0] = prime[1] = 1;

    vi primes;

    int countPrimes = 0;

    for (int i = 2 ; i*i <= n; ++i)
    {
        if(prime[i] == 0)
        {
            
            for (int j = i*i ; j <= n ; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; ++i)
    {
        if(prime[i] == 0){
            //cout << i << " ";
            countPrimes++;
            primes.pb(i);
        }
    }
    out(primes);
    cout << "Number of Primes = " << countPrimes;
    
}


// all factors of a number

void allFactors(int n)
{
    vector<int>factors;
    vector<int>odd_factors;
    vector<int>even_factors;
    ll sum_even = 0 , sum_odd = 0;

    ll sum = 0;
    for (int i = 1; i*i <= n; ++i)
    {
        if(n%i == 0){
            factors.push_back(i);
            if(i%2 == 0){
                even_factors.pb(i);
                sum_even+=i;
            }
            else{
                odd_factors.pb(i);
                sum_odd += i;
            }
        }
        if(i*i != n){
            factors.push_back(n/i);
            if((n/i) % 2 == 0){
                even_factors.pb(n/i);
                sum_even += n/i;
            }
            else{
                odd_factors.pb(n/i);
                sum_odd += n/i;
            }
        }
    }
    sort(all(factors));
    for (int i = 0; i < factors.size(); ++i)
    {
        sum += factors[i];
        cout << factors[i] << " ";
    }
    cout << endl << "Sum of factors = " << sum << endl;
    sort(all(even_factors));
    sort(all(odd_factors));

    cout << "even factors : ";out(even_factors);
    cout << "odd factors : ";out(odd_factors);
    cout << "sum of even factors : " << sum_even << endl;
    cout << "sum of odd factors : " << sum_odd << endl;

}


// prime factors of a number


void primeFactors(int n)
{
    ll count;
    ll sum = 0;

    for (int i = 2; i*i <= n; ++i)
    {
        if(n%i == 0)
        {
            count = 0;
            while(n%i == 0)
            {
                n /= i;
                count++;
            }
            while(count--){
                cout << i << " ";
                sum += i;
            }
        }
    }
    if(n != 1)
        cout << n << endl;
    sum += n;
    cout << "Sum of prime factors : " << sum << endl;

}

//	least prime factor of a number

void leastPrimeFactor(int n)
{
    vector<int>least_prime(n+1 , 0);

    least_prime[0] = least_prime[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        if(least_prime[i] == 0)
        {
            least_prime[i] = i;
            for (int j = i*i; j <= n; j+=i)
            {
                if(least_prime[j] == 0)
                    least_prime[j] = i;
            }
        }
    }
    cout << "least prime of " << n << " = " << least_prime[n];

}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("F:/io/input.txt", "r", stdin);
    freopen("F:/io/output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    /*if(isPrime(n))
        cout << "Prime";
    else
        cout << "Not Prime";
*/
    //  sieve(n);

    //  allFactors(n);

    //  primeFactors(n);
    
    //  leastPrimeFactor(n);

    return 0;
}
