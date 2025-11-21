#include <bits/stdc++.h>
using namespace std;

class Vector{
    int a,b;
    public:
        Vector(int a=0,int b=0){
            this->a = a;
            this->b = b;
        }
        void display(){
            cout << a << "i + " << b << "j" << endl;
            return; 
        }
        Vector operator+(Vector &v);
        ~Vector(){
            cout << "resources freed";
        }
};
Vector Vector::operator +(Vector &v){
    this->a += v.a;
    this->b += v.b;
    return *this;
}


int main() {
    Vector v1(10,20);
    Vector v2(30,40);
    v1.display();
    v2.display();
    Vector v3=v1+v2;
    v3.display();
    return 0;
}