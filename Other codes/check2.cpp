#include <bits/stdc++.h>
using namespace std;


class base{
    int i,j;
    public: 
        void set(int a,int b){
            i = a;
            j = b;
        }
        void show(){
            cout << i << " " << j << endl;
        }
        ~base(){}
};

class derived : public base{
    int k;
    public:
        derived(){
            k = 10;
        }
        void showk(){
            cout << k << endl;
        }
        void setvia(int a,int b){
            i = a;
            j = b;
        }
        ~derived(){}
};

int main() {
    derived obj;
    obj.set(1,2);
    obj.show();
    obj.showk();
    return 0;
}