#include <bits/stdc++.h>

using namespace std;

int main () {

    long double x;

    cin >> x;


    if (x >= 0 && x <= 25.0000){cout << "Interval [0,25]\n";}
    else if (x > 25.00001 && x <= 50.0000000){cout << "Interval (25,50]\n";}
    else if (x > 50.00000001 && x <= 75.0000000){cout << "Interval (50,75]\n";}
    else if (x > 75.000000000001 && x <= 100.0000000){cout << "Interval (75,100]\n";}
    else {cout << "Out of Intervals\n";}

    

    return 0;
}