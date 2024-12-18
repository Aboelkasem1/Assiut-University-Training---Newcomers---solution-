#include <bits/stdc++.h>

using namespace std;

int main () {

    int a, b;
    char x;

    cin >> a >> x >> b;

    if (x == '>'){
        if (a > b){
            cout << "Right\n";
        }
        else{
            cout << "Wrong\n";
        }
    }
    if (x == '<'){
        if (a < b){
            cout << "Right\n";
        }
        else{
            cout << "Wrong\n";
        }
    }
    if (x == '='){
        if (a == b){
            cout << "Right\n";
        }
        else{
            cout << "Wrong\n";
        }
    }

    return 0;
}
