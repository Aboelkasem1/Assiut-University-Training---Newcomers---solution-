#include <bits/stdc++.h>

using namespace std;

int main () {

    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif

    long long x, l, z, f;

    cin >> x >> l >> z >> f;

    x %= 100;
    l %= 100;
    z %= 100;
    f %= 100;

    int a = (x * l * z * f) % 100;

    if (a < 10){cout << 0 << a << "\n";}
    else{cout << a << "\n";}

    return 0;
}