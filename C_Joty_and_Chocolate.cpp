#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll gcd(ll a, ll b)
{
    return __gcd(a, b);
}
ll lcm(ll a, ll b)
{
    return ((a / gcd(a, b)) * b);
}
int main()
{
    ll n, a, b, p, q, ans = 0, ovlp;
    cin >> n >> a >> b >> p >> q;
    ans += ((n / a) * p);
    ans += ((n / b) * q);
    ovlp = (n / lcm(a, b));
    ans -= (ovlp * (p + q));
    ans += (ovlp * max(p, q));
    cout << ans << "\n";
    return 0;
}