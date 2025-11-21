#include <bits/stdc++.h>
using namespace std;

template<typename t> 
t minimum(t a,t b) {
    cout << "From template function" << "\n";
    return a <= b ? a : b;
}

int minimum(int a,int b) {
    cout << "From Non template function" << "\n";
    return a <= b ? a : b;
}

int main() {
    int a,b;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;

    cout << "min: " << minimum(a,b) << "\n";
    cout << "min: " << minimum<int>(a,b) << "\n";
    return 0;
}