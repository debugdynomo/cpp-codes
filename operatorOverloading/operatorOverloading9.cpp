//dynmaic memory allocation
#include <bits/stdc++.h>
using namespace std;

class Obj {
    int val;
    int x = 100;
public:
    Obj(int v=0): val(v) { cout << "Construct " << val << "\n"; }
    ~Obj() { cout << "Destruct " << val << "\n"; }

    void* operator new(size_t sz) {
        cout << "Custom new\n";
        cout << "sz: " << sz << "\n";
        return malloc(sz);
    }
    void operator delete(void* p) {
        cout << "Custom delete\n";
        free(p);
    }
    void* operator new[](size_t sz) {
        cout << "Custom new[]\n";
        cout << "sz(array): " << sz << "\n";
        return malloc(sz);
    }
    void operator delete[](void* p) {
        cout << "Custom delete[]\n";
        free(p);
    }
};

int main() {
    Obj* p = new Obj(10);
    delete p;
    Obj* arr = new Obj[2];
    delete[] arr;

    int *n = new int(10);

    cout << *n << "\n";
    return 0;
}