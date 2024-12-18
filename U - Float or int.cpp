#include <bits/stdc++.h>

using namespace std;

int main () {

    float x;

    cin >> x;

    int a = int(x);

    if (a == x){
        cout << "int " << a << "\n";
    }
    else {
        cout << "float " << a << " " << float(x - a) << "\n";
    }

    

    return 0;
}