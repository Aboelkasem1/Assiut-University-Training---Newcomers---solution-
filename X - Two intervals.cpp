#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    long long x, l2, z, f;
    
    cin >> x >> l2 >> z >> f;
 
    long long a = max(x, max(l2, max(z, f)));
    long long b = min(x, min(l2, min(z, f)));
 
    if (a == l2 && b == x && l2 >= z && f >= x) {
        cout << z << " "; cout << f << "\n";
    }
    else if (a == f && b == x && l2 >= z && f >= x){
        cout << z << " "; cout << l2 << "\n";
    }
    else if (a == l2 && b == z && l2 >= z && f >= x){
        cout << x << " "; cout << f << "\n";
    }
    else if (a == f && b == z && l2 >= z && f >= x){
        cout << x << " "; cout << l2 << "\n";
    }
    else {
        cout << -1  << "\n";
    }
    return 0;
}