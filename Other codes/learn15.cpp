#include <bits/stdc++.h>
using namespace std;

class Singleton {
private:
    static Singleton* instance;
    Singleton() {
        cout << "Object is created" << "\n";
        count++;
    }  // private constructor 

public:
    static int count;
    static Singleton* getInstance() {
        if (!instance) {
            instance = new Singleton();
        }
        return instance;
    }
};

int Singleton::count = 0;
Singleton* Singleton::instance = nullptr;

int main() {
    // Singleton s;       // ❌ Error: constructor is private
    cout << "Count: " << Singleton::count << "\n";
    Singleton* s1 = Singleton::getInstance(); // ✅ Controlled creation
    cout << "Count: " << Singleton::count << "\n";
    Singleton* s2 = Singleton::getInstance();
    cout << "Count: " << Singleton::count << "\n";

    cout << "Done" << "\n";
}