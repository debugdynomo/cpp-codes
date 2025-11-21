//[] , ()
#include <iostream>
using namespace std;

class Arr {
    int data[5] = {1,2,3,4,5};
public:
    int& operator[](int i) { return data[i]; }
};

class Fun {
public:
    int operator()(int a, int b) { return a+b; }
};

int main() {
    Arr arr;
    cout << arr[2] << "\n";
    Fun f;
    cout << f(3,4) << "\n";
}