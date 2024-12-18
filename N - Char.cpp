#include <bits/stdc++.h>

using namespace std;

int main () {

    char b;

    cin >> b;

    bool u = isupper(b);

    if (u) {cout << char(tolower(b)) << "\n";}
    else {cout << (char)toupper(b) << "\n";}
    

    return 0;
}