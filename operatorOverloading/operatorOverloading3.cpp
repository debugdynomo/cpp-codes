//bitwise operator
#include <iostream>
using namespace std;

class Bits {
    int x;
public:
    Bits(int v): x(v) {}
    Bits operator&(Bits& obj) { return Bits(x & obj.x); }
    Bits operator|(Bits& obj) { return Bits(x | obj.x); }
    Bits operator^(Bits& obj) { return Bits(x ^ obj.x); }
    Bits operator~() { return Bits(~x); }
    Bits operator<<(int s) { return Bits(x << s); }
    Bits operator>>(int s) { return Bits(x >> s); }
    int val() { return x; }
};

int main() {
    Bits a(6), b(3);
    cout << (a&b).val() << " " << (a|b).val() << " "
         << (a^b).val() << " " << (~a).val() << " "
         << (a<<1).val() << " " << (a>>1).val() << "\n";
}