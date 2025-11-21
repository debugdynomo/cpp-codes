#include <bits/stdc++.h>
using namespace std;

class base{
    public:
        int x;
        base(int i){
            cout << "default constructor is called" << endl;
            this->x = i;
        }
        void show(){
            cout << x << endl;
        }
        ~base(){}
};



int main() {
    base b1(10);
    base b2 = b1;
    b2.show();
    return 0;
}