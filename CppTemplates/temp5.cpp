#include <bits/stdc++.h>
using namespace std;

template<typename T1,typename T2,typename T3 = int>
T3 sum(T1 a,T2 b) {
    return a + b;
}

int sum(float a = 10,float b= 20) {
    return a + b;
}//converts to integer type


int main() {
    cout << sum<int,float>(10,5.6) << "\n";
    cout << sum<int,float>(5.6,10) << "\n";
    cout << "\n";
    cout << sum() << "\n";
    return 0;
}