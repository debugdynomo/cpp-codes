#include <bits/stdc++.h>
using namespace std;

int MYABS(int x) {
    return x < 0 ? -x : x;
}

float MYABS(float x) {
    return x < 0 ? -x : x;
}

double MYABS(double x) {
    return x < 0 ? -x : x;
}

int main() {
    int a = 10;
    float f = 10.4;
    double d = 123.4;
    
    cout << MYABS(a) << "\n";
    cout << MYABS(f) << "\n";
    cout << MYABS(d) << "\n";
    
    return 0;
}