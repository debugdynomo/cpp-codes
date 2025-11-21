#include <bits/stdc++.h>
using namespace std;

template<typename T>
T sum(T a,T b) {
    cout << "from template function" << "\n";
    return (a+b);
}

int sum(int a,int b) {
    cout << "from Non template function" << "\n";
    return (a+b);
}


int main() {
    int a,b;
    a = 10;
    b = 20;

    cout << sum(a,b) << "\n";
    cout << sum<int>(a,b) << "\n";
    return 0;
}