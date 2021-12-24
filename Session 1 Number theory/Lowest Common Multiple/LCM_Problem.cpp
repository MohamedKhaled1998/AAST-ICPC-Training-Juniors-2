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

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a * 2 > b)
    {
        cout << -1 << ' ' << -1 << '\n';
    }
    else
        cout << a << ' ' << a * 2 << '\n';
}

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}