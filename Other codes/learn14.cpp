#include <bits/stdc++.h>
using namespace std;

void add(vector<int> &n){
    for(int i=0;i<n.size();i++){
        n[i]++;
    }
    return;
}
class A {
public:
    int i;
    A() {
        cout << "Constructor of A\n";
    }
    A(int i){
        cout << "para constructor of A" << endl;
    }
    ~A(){}
};
class B {
public:
    B() {
        cout << "Constructor of B\n";
    }
    B(int i){
        cout << "para constructor of B" << endl;
    }
    ~B(){}
};
class C : public B, public A {
public:
    C() : A(10), B(20) {
        cout << "Constructor of C\n";
    }
    C(int i){
        cout << "para constructor of C" << endl;
    }
    ~C(){}
};
int main() {
    C obj;
    A a = A{};
    cout << a.i << endl;// produces garbage values

    int x = 10;
    int *p = &x;
    cout << &x << endl;
    cout << *p << endl;
    vector<int> num = {1,2,3,4,5,6,7,8,9,10};
    add(num);
    for(int i=0;i<num.size();i++){
        cout << num[i] << endl;
    }
    return 0;
}