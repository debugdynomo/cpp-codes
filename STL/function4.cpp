#include <bits/stdc++.h>
using namespace std;

template<typename T>
class Box {
    T data;
    public: 
        Box(T x) : data(x) {
            cout << "object is created" << "\n";
        } 

        void display() {
            cout << data << "\n";
        }

        ~Box() {
            cout << "Resources are freed" << "\n";
        }
};

int main() {
    Box<int> b1(50);
    Box<string> b2("oops");

    b1.display();
    b2.display();
    
    return 0;
}