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
ll gcd(int a, int b)
{
    return (b ? gcd(b, a % b) : a);
}
ll lcm(int a, int b)
{
    return a * (b / gcd(a, b));
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << lcm(a, b) << '\n';
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