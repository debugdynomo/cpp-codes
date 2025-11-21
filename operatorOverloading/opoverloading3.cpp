#include <iostream>
using namespace std;

class Counter {
    int value;
public:
    Counter(int v=0): value(v) {}

    // Pre-increment (++obj)
    Counter& operator++() {
        ++value;
        return *this;
    }

    // Post-increment (obj++)
    Counter operator++(int) {
        Counter temp = *this;
        ++value;
        return temp;
    }

    void show() const { cout << value << endl; }
};

int main() {
    Counter p(5), c;

    c = ++p;   // pre-increment
    cout << "After c = ++p:\n";
    p.show();  // 6
    c.show();  // 6

    c = p++;   // post-increment
    cout << "\nAfter c = p++:\n";
    p.show();  // 7
    c.show();  // 6
}
