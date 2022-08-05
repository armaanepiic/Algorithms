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


int prime[10000001];

bool isPrime(int x)
{
	if (x == 1)
		return false;
	for (int i = 2; i * i <= x; ++i)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

void Sieve(int n)
{
	ll count_primes = 0;
	vi v;
	
	prime[0] = prime[1] = 1;

	for (int i = 2; i * i <= n; ++i)
	{
		if (prime[i] == 0)
		{
			//count_primes++;
			for (int j = i*i ; j <= n; j += i)
			{
				prime[j] = 1;
			}
		}
	}
	for (int i = 2; i <= n; ++i)
	{
		if (prime[i] == 0){
			//cout << i << " ";
			v.pb(i);
			//count_primes++;
		}
	}
	//cout << "Numbers of pimes = " << count_primes << endl;
	// for (int i = 0; i <= n; ++i)
	// {
	// 	cout << prime[i] << " ";
	// }
	cout << endl;
	out(v);
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

	// if (isPrime(n))
	// 	cout << "yes" << endl;
	// else
	// 	cout << "no" << endl;

	Sieve(n);


	return 0;
}
