#include <bits/stdc++.h>

using namespace std;

int main () {

    int x, y;

    bool a;

    cin >> x >> y;

    a = (x % y == 0) || (y % x == 0);

    if(a){cout << "Multiples\n";}
    else{cout << "No Multiples\n";}

    return 0;
}