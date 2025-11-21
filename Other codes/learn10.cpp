#include <bits/stdc++.h>
using namespace std;

class Demo {
    public:
    static int r;
    static void show() {
        r++;
        std::cout << "Static function called\n";
    }

    void callStatic() {
        this->show(); 
        Demo::show();  
    }
};
int Demo::r = 0;

int main() {
    Demo d;
    d.callStatic();
    cout << d.r << endl;
    return 0;
}