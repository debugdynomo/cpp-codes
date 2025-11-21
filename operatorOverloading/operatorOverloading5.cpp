//increment/decrement
#include <bits/stdc++.h>
using namespace std;

class Num {
    int x;
public:
    Num(int v): x(v) {}
    Num& operator++() { ++x; return *this; }       // prefix ++n
    Num operator++(int) { Num tmp=*this; x++; return tmp; } // postfix n++
    Num& operator--() { --x; return *this; }
    Num operator--(int) { Num tmp=*this; x--; return tmp; }
    int val() const { return x; }
};

int main() {
    Num a(5);

    cout << (++a).val() << "\n";
    cout << (a++).val() << "\n";
    cout << a.val() << "\n";
    return 0;
}