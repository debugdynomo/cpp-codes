#include <bits/stdc++.h>
using namespace std;

class base{
    public:
        void print(){
            cout << "hello from base class" << endl;
        }
};
class vishnu : public base{
    public:
        void print(){
            cout << "hello from vishnu class" << endl;
        }
};


int main() {
    vishnu devvish;
    devvish.print();
    return 0;
}