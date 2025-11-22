#include <bits/stdc++.h>
using namespace std;

class demo {
    int x = 10;//intialised to 0
    public:
        int getx() const {
            return x;
        }
        void display() {
            cout << x << "\n";
        }
};

int &func(int &y) {
    return y;
}

int main() {
    demo obj;
    cout << obj.getx() << "\n";
    const int &x = obj.getx();
    obj.display();


    int p,y;
    y = 10;
    p = func(y);

    cout << p << " " << y << "\n";
    return 0;
}