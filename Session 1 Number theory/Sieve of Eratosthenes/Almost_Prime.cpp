//
// Created by Mohamed Khaled Mostafa on 12/24/21.
//

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define all(s) s.begin(),s.end()
#define rall(s) s.rbegin(),s.rend()
#define vi vector<ll>
#define ii pair<int,int>
const int N = 5e5 + 100;

map<ll, int> Factorize(ll n)
{
    map<ll, int> ret;
    for (ll i = 2; i * i <= n; i += 1 + (i & 1))
    {
        while (n % i == 0)
        {
            ret[i]++;
            n /= i;
        }
    }
    if (n > 1)
        ret[n]++;
    return ret;
}

void solve()
{
    int n;
    cin >> n;
    int count = 0;
    for (int i = 1; i <= n; ++i)
    {
        auto x = Factorize(i);
        if (x.size() == 2)
            count++;
    }
    cout << count << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    //cin >> tc;
    while (tc--)
        solve();
}