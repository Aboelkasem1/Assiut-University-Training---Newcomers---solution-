#include <bits/stdc++.h>

using namespace std;

int main () {

    char b;

    cin >> b;

    bool u = isupper(b);
    bool l = islower(b);

    if (u) {cout << "ALPHA\nIS CAPITAL\n";}
    else if (l) {cout << "ALPHA\nIS SMALL\n";}
    else {cout << "IS DIGIT\n";}

    return 0;
}