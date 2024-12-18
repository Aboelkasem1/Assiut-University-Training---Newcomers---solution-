#include <bits/stdc++.h>

using namespace std;

int main () {

    string fn1, fn2, ln1, ln2;

    cin >> fn1 >> ln1;
    cin >> fn2 >> ln2;

    int a = ln1 == ln2;

    if (a) {cout << "ARE Brothers\n";}
    else {cout << "NOT\n";}

    return 0;
}