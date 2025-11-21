//Arithematic operator
#include <bits/stdc++.h>
using namespace std;

class Num {
        int x;
    public:
        Num(int v=0): x(v) {}
        
        Num operator+(Num& obj) {
            return Num(x + obj.x);
        }
        Num operator-(Num& obj) {
            return Num(x - obj.x);
        }
        Num operator*(Num& obj) {
            return Num(x * obj.x);
        }
        Num operator/(Num& obj) {
            return Num(x / obj.x);
        }
        Num operator%(Num& obj) {
            return Num(x % obj.x);
        }
        int val() { 
            return x;
        }

        ~Num(){
            cout << "resources freed" << "\n";
        }
};

int main() {
    Num a(10), b(3);
    cout << (a+b).val() << " " << (a-b).val() << " " 
         << (a*b).val() << " " << (a/b).val() << " " 
         << (a%b).val() << "\n";
    return 0;
}