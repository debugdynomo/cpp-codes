#include <bits/stdc++.h>
using namespace std;

class Time{
    int t;
    public:
        Time(int i = 10){
            t = i;
        }
        void get_id(){
            cout << t << endl;
        }
        ~Time(){}
};

int main() {
    Time a[3] = {1,2};
    for(int i=0;i<3;i++){
        a[i].get_id();
    }
    return 0;
}