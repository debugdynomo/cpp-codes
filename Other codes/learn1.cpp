#include <bits/stdc++.h>
using namespace std;

class A{
    private:
        static int count;
            int m;
    public:
        A(){
            cout << "Normal constructor is called"<<"\n";
            count++;
        }
        A(A &b){
            cout << "Copy constructor is called" << "\n";
            count++;
        }
        int pm;
        void show(){
            cout << count << endl;
        };
        ~A(){
            cout << "destructor is called" << "\n";
        }
};

int A::count = 0;

int main() {
    A a;
    a.show();
    A b = a;
    b.show();
    return 0;
}