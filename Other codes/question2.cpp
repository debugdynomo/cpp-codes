#include <bits/stdc++.h>
using namespace std;
const m = 50;

int &max(int &a,int &b){
    return (a >= b ? a : b);
}

class box{
    static int num;
    public:
        ~box(){}
};

int main() {
    int a = 10;
    int b = 20;
    int c = max(a,b);
    cout << "c: " << c;
    cout << m << endl;

    return 0;
}