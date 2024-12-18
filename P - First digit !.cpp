#include <bits/stdc++.h>

using namespace std;

int main () {

    string a;

    cin >> a;

    bool x = (a[0] - 48) % 2 == 0;

    if (x) {cout << "EVEN\n";}
    else {cout << "ODD\n";}

    return 0;
}