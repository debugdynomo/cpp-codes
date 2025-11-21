#include <bits/stdc++.h>
using namespace std;

class A {
    A(){
        cout << "object of class A is created" << "\n";
    }
    public:
        friend class B;
        void displayMSG() {
            cout << "Hello from class A" << "\n";
        }
    ~A() {
        cout << "Resorces of A are released" << "\n";
    }
};

class B {
    public: 
    A* create_A() {
        cout << "From class B" << "\n";
        return new A();//this B class is about to access private member from class A (which is friend from A -> B)
        //it can access everything from class A.private ,public, protected 
    }
    ~B() {
        cout << "Resorces of B are released" << "\n";  
    }
};



int main() {
    cout << "Start" << "\n";
    B b;
    A *a;
    a = b.create_A();

    a->displayMSG();
    

    delete a;
    cout << "END" << "\n";
    return 0;
}