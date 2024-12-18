#include <bits/stdc++.h>

using namespace std;

int main () {

    long long a, b, c, ma = -1000001, mi = 1000001, m;

    cin >> a >> b >> c;

    if (a > ma){
        ma = a;

        mi = min(c, b);
        m = max(c, b);
    }

    if (b > ma){
        ma = b;

        mi = min(a, c);
        m = max(a, c);
    }

    if (c > ma){
        ma = c;

        mi = min(a, b);
        m = max(a, b);
    }


    cout << mi << "\n";
    cout << m << "\n";
    cout << ma << "\n\n";

    cout << a << "\n";
    cout << b << "\n";
    cout << c << "\n";

    return 0;
}
