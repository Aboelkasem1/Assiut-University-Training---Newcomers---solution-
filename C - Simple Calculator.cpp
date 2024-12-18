#include <bits/stdc++.h>
using namespace std;

int main () {
    int x, y;

    long long a, l = 1;

    cin >> x >> y;

    a = x + y;
    cout << x << " + " << y << " = " << a <<endl;
    a = l * x * y;
    cout << x << " * " << y << " = " << a <<endl;
    a = x - y;
    cout << x << " - " << y << " = " << a <<endl;

    return 0;
}
