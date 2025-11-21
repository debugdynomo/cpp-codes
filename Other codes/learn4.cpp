#include <bits/stdc++.h>
using namespace std;

class rectangle{
    private:
        int l,b;
    public:
        rectangle(){
            this->l = 10;
            this->b = 10;
        }
        void setter(int i,int j){
            l = i;
            b = j;
        }
        friend int area(rectangle &box){
            return box.l*box.b;
        }
};

class square : public rectangle{
    private:
        int l,b;
    public:
        square(){
            this->l = 10;
            this->b = 10;
        }
        void setter(int i,int j){
            l = i;
            b = j;
        }
        friend int area(square &box){
            return box.l*box.b;
        }
};

int area(rectangle &box);
int area(square &box);

int main() {
    rectangle r = rectangle();
    r.setter(10,20);
    cout << area(r) << endl;
    square s = square();
    s.setter(20,20);
    cout << area(s) << endl;
    return 0;
}