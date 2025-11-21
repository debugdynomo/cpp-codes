#include <bits/stdc++.h>
using namespace std;

double divide(double a,double b) {
    if(b == 0.0) {
        throw 0;
    }
    return a/b;
}

int main() {
    cout << "START" << "\n";

    double a, b;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    try{
        int t = divide(a,b);
        cout << "Ans: " << t <<  "\n";
    }
    catch(int t) {
        cout << "division by zero undefined" << "\n";
    }
    catch(...) {
        cout << "unexcepted error occurred" << "\n";
    }
    cout << "END" << "\n";
    return 0;
}