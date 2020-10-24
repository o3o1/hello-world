#include <iostream>
#include <cstdio>
#include <cstring>
#include <math.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, d = 1, p, ans = 0;
    cin >> a >> b;
    for (ll c; a <= b; d++)
    {
        p = a % b + 1;
        c=d%10;
        a += c;
        ans += p;
    }
    cout << ans << endl;
}