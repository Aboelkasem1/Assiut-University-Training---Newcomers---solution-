#include <bits/stdc++.h>
 
using namespace std;
 
int main () {
 
    int x, y, z;
    char a, b;
    bool c;
    cin >> x >> a >> y >> b >> z;
 
    if (a == '+'){c = (x + y) == z;}
    else if (a == '-'){c = (x - y) == z;}
    else if (a == '*'){c = (x * y) == z;}
    else {c = (x / y) == z;}

    if (c){
        cout << "Yes\n";
    } else {
        if (a == '+'){cout << x + y << "\n";}
        else if (a == '-'){cout << x - y << "\n";}
        else if (a == '*'){cout << x * y << "\n";}
        else {cout << x / y << "\n";}
    }
    return 0;
}