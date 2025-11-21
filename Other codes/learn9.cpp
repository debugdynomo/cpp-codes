#include <bits/stdc++.h>
using namespace std;

class base{
    public:
        int x = 10;
    ~base(){}
};  
class derived : public base{

};  

int main() {
    base b,*p;
    derived d;
    p = &d;
    return 0;
}