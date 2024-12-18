#include <bits/stdc++.h>

using namespace std;

int main () {

    int x, y;
    char a;

    cin >> x >> a >> y;

    if (a == '+'){cout << x + y << "\n";}
    else if (a == '-'){cout << x - y << "\n";}
    else if (a == '*'){cout << x * y << "\n";}
    else {cout << x / y << "\n";}

    return 0;
}