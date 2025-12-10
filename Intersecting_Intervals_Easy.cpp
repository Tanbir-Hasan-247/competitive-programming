/**
 *   In the name of Allah, the Most Gracious, the Most Merciful.
 *   Author : Tanbir Hasan
 *   Time & Date : 21:05:02 03/12/2025
 **/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define maxVal(a) *max_element(a.begin(), a.end())
#define minVal(a) *min_element(a.begin(), a.end())
#define allr(a) a.rbegin(), a.rend()
#define lcm(a, b) (a * b) / __gcd(a, b)
#define gcd(a, b) __gcd(a, b)
#define all(a) a.begin(), a.end()
#define ll long long
#define pb push_back
#define endl "\n"

ll fun(const vector<ll> &lefta, const vector<ll> &leftb, const vector<ll> &righta, const vector<ll> &rightb, const vector<ll> &a, const vector<ll> &b)
{
    ll ans = LLONG_MIN;

    for (int i = 0; i < a.size(); i++)
    {
        ans = max(ans, lefta[i] + righta[i] - a[i] + leftb[i] + rightb[i] - b[i]);
    }
    return ans;
}

void left(const vector<ll> &arr, vector<ll> &bestLeft)
{
    int n = arr.size();
    ll cur = arr[0];
    bestLeft[0] = cur;
    for (int i = 1; i < n; i++)
    {
        cur = max(arr[i], cur + arr[i]);
        bestLeft[i] = cur;
    }
}

void right(const vector<ll> &arr, vector<ll> &bestRight)
{
    int n = arr.size();
    ll cur = arr[n - 1];
    bestRight[n - 1] = cur;
    for (int i = n - 2; i >= 0; i--)
    {
        cur = max(arr[i], cur + arr[i]);
        bestRight[i] = cur;
    }
}

void solve()
{
    int n;
    cin >> n;

    vector<ll> a(n), b(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        cin >> b[i];
    }

    vector<ll> lefta(n), leftb(n), righta(n), rightb(n);

    left(a, lefta);
    left(b, leftb);

    right(a, righta);
    right(b, rightb);

    cout << fun(lefta, leftb, righta, rightb, a, b) << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
