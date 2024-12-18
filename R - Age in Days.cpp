#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int d, y, m;
 
    cin >> d;
 
    y = d / 365;
    cout << y << " years" <<"\n";
 
    m = (d % 365) / 30;
    cout << m << " months" <<"\n";
 
    d = (d % 365) % 30;
    cout << d << " days" <<"\n";
 
 
    return 0;
}