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
vi primes;
bitset<N> bs;
void sieve(int upperbound)
{
    bs.set();
    bs[0] = bs[1] = 0;
    for(int i = 2; i <= upperbound; ++i)
    {
        if(bs[i])
        {
            for(ll j = i * 1ll *  i; j <= upperbound; j += i)
            {
                bs[j] = 0;
            }
            primes.push_back(i);
        }
    }
}
void solve()
{
    int n, k;
    cin >> n >> k;

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