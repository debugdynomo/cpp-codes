//relational operators
#include <bits/stdc++.h>
using namespace std;

class Num {
    int x;
public:
    Num(int v): x(v) {}
    bool operator==(Num& obj) { return x == obj.x; }
    bool operator!=(Num& obj) { return x != obj.x; }
    bool operator<(Num& obj) { return x < obj.x; }
    bool operator>(Num& obj) { return x > obj.x; }
    bool operator<=(Num& obj) { return x <= obj.x; }
    bool operator>=(Num& obj) { return x >= obj.x; }
};

int main() {
    Num a(5), b(7);
    cout << (a<b) << " " << (a==b) << " " << (a!=b) << "\n";

    return 0;
}