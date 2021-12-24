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
const int N = 5e6 + 100;
int sp[N];
ll prefixSum[N];
void sieve()
{
    int _upperbound = N - 10;
    iota(sp, sp + _upperbound, 0);
    for (int i = 2; i * 1ll * i <= _upperbound; ++i)
    {
        if (sp[i] == i)
        {
            for (ll j = i * 1ll * i; j <= _upperbound; j += i)
            {
                sp[j] = i;
            }
        }
    }
}
int NumberOfPrimeFactor(int x)
{
    int count = 1;
    while(sp[x] != x)
    {
        x /= sp[x];
        count++;
    }
    return count;
}
void preCompute()
{
    sieve();
    for(int i = 2; i <= N - 10; ++i)
    {
        prefixSum[i] = prefixSum[i - 1] + NumberOfPrimeFactor(i);
    }
}
ll GetRangeSum(int l, int r)
{
    if(l > r)
        return 0;
    return prefixSum[r] - ( l ? prefixSum[l - 1] : 0);
}
void solve()
{
    ll a, b;
    cin >> a >> b;
    cout<<GetRangeSum(b + 1, a) <<'\n';
}

int main(void)
{
    preCompute();
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
}