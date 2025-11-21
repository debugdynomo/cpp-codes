#include <bits/stdc++.h>
using namespace std;

class Time{
    public:
        int x;
        Time(){
            x = 0;
        }
        ~Time(){}
};

int main() {
    Time t1;
    t1.x = 10;
    cout << t1.x << endl;
    Time t2 = t1;
    cout << t2.x << endl;
    return 0;
}