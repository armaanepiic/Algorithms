//Bismillahir rahmanir rahim
//Arman Hossain C193033
//Programming is nothing but an addiction

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pi 3.14159
#define pb push_back

void input_output()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{

    // n = size of the array
    // num = query
    // number = the number to search

    input_output();

    int n, num;
    cin >> n >> num;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x = sizeof(a) / sizeof(a[0]);
    sort(a, a + x);
    for (int i = 0; i < num; i++)
    {
        int number;
        cin >> number;
        int low, high, mid;
        low = 0;
        high = n - 1;
        bool flag = 0;
        while (low <= high)
        {
            mid = (low + high) / 2;
            if (a[mid] == number)
            {
                flag = 1;
                break;
            }
            if (a[mid] > number)
                high = mid - 1;
            else if (a[mid] < number)
                low = mid + 1;
        }
        if (flag == 0)
            cout << "not found\n";
        else if (flag == 1)
            cout << "found\n";
    }
    return 0;
}
