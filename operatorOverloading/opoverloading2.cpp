#include <bits/stdc++.h>
using namespace std;

class Box{
    int l,b;
    public:
        Box(int l = 0,int b = 0){
            this->l = l;
            this->b = b;
        }
        void area(){
            cout << "Area: " << l*b << "\n";
            return;
        }
        void details(){
            cout << "Box: l = " << l << " ,b = " << b << "\n";
            return;
        }
        Box operator +(Box &A){
            this->l+=A.l;
            this->b+=A.b;
            return *this;
        }
        friend Box operator *(Box &A,int k);
        ~Box(){
            cout << "resources released succesfully" << "\n";
        }
};  
Box operator * (Box &A,int k){
    Box temp;
    temp.l = A.l * k;
    temp.b = A.b * k;
    return temp;
}

int main() {
    Box b1(10,20);
    Box b2(20,30);
    b1.details();
    b1.area();
    b2.details();
    b2.area();

    b1 = b1 + b2;

    b1.details();
    b1.area();

    Box b4(4,5);
    b4.details();
    b4.area();
    b4 = b4*3;//scale the length and breadth with k; l=l*k, b=b*k
    b4.details();
    b4.area();
    return 0;
}