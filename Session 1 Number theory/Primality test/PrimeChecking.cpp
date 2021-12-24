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
bool isPrime(ll x)
{
    if(x < 2)
        return false;
    for(ll i = 2; i * 1ll * i <= x; i += 1 + (i & 1))
        if(x % i == 0)
            return false;
    return true;
}
void solve()
{
    ll n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
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