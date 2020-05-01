#include <conio.h>
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef long long ll;

ll fctrl(ll n)
{
    ll num = n;
    ll count = 0;
    while (num != 0)
    {
        ll k = num / 5;
        count += k;
        num = num / 5;
    }
    return count;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        cout << fctrl(n) << endl;
    }
    return 0;
}
