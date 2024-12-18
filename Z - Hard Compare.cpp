#include<bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
#endif


    double a, b, c, d;

    cin >> a >> b >> c >> d;

    double ab = log10(a) * b;
    double cd = log10(c) * d;


    if (ab > cd) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
