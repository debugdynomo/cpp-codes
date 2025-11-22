#include <iostream>
using namespace std;

class Demo {
private:
    static int count;  // Private static variable

public:
    Demo() { count++; }

    static int getCount() {   // Static getter
        return count;
    }
};

int Demo::count = 0;

static int func() {
    return 10;
}

int func() {
    return 100;
}

int main() {
    Demo a, b, c;

    //cout << Demo::count << "\n";
    
    cout << "Total objects created: " << Demo::getCount() << endl;

    cout << func() << "\n";
}