//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction.
#include <bits/stdc++.h>
using namespace std;
#define     pb          push_back

#define     sortv       sort(v.begin(), v.end())
#define     rev_sortv   sort(v.begin(), v.end(), greater<int>())
#define     print(e)    for(int i = 0; i<e.size() ; i++)cout << e[i] << " ";


using ll    =   long long int;
using ull   =   unsigned long long;
using vi    =   vector<int>;
using vll   =   vector<ll>;
using vc    =   vector<char>;
using vs    =   vector<string>;



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    getline(cin , s);
    vi v;
    
    v.pb(0);
    for (int i = 0; i < s.length(); ++i)
    {
        if(s[i] == ' ')
        {
            v.pb(i-1);
            v.pb(i+1);
        }
    }
    v.pb(s.length()-1);
    //print(v);

    //cout<< s.length() << endl;

    int max , min , max_len = 0 , min_len = INT_MAX;
    int temp;
    for (int i = 0; i < v.size(); i+=2)
    {
        int len = abs(v[i] - v[i+1]);
        if(len > max_len){
            max_len = len+1;
            max = v[i];
        }
        if(len < min_len)
        {
            min_len = len+1;
            min = v[i];
        }
    }
    
    cout << "Largest word length = " << max_len << endl;

    for (int i = 0; i < max_len; ++i)
    {
        cout << s[max];
        max++;
    }
    cout << endl;
    cout << "Smallest word length = " << min_len << endl;
    for (int i = 0; i < min_len; ++i)
    {
        cout << s[min];
        min++;
    }


    return 0;
}