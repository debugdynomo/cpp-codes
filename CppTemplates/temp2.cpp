#include <bits/stdc++.h>
using namespace std;

template<typename T>
void Print() {
    int i = 100;
    cout << "i: " << i << "\n";
}

void Print() {
    int i = 200;
    cout << "O: " << i << "\n";
}

int main() {
    cout << "Start\n";
    Print();   // ✅ specify template argument
    cout << "End\n";
    return 0;
}