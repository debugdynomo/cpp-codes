#include <bits/stdc++.h>
using namespace std;

class box {
    static int id;
    public:
        int l,b;
        box(int a,int b){
            this->id++;
            l = a;
            this->b = b;
        }
        void showid(){
            cout << id << endl;
        }
        ~box(){
            cout << "destroyed" << endl;
        }
};
int box::id;

int main() {
    box b1(2,3);
    box b2(4,5);
    {
        box b3(1,2);
        cout << "b3 object is created" << endl;
    }
    b1.showid();
    b2.showid();
    return 0;
}