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
int CountDivisors(ll x)
{
    ll ret = (x == 1 ? 1 : 2);
    for(ll i = 2; i * i <= x; ++i)
    {
        if(x % i == 0)
        {
            ret++;
            ll firstDivisor = i;
            ll secondDivisor = x / i;
            if(firstDivisor != secondDivisor)
                ret++;
        }
    }
    return ret;
}
void solve()
{
    ll n;
    cin >> n;
    cout << CountDivisors(n);
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