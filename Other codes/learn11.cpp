#include <bits/stdc++.h>
using namespace std;

int *get(int i){
    int *ptr = &i;
    return ptr;
}
void vishnu(int height = 6,int branch){ // default argumemnt are grouped together till the end no gaps in blw them;
    return;
}
void foo(int x, short y);
void foo(double x, int y);

int main() {
    int *a = get(10);
    cout << *a;
    short s = 2;
    foo(5.0, s); // ❌ Ambiguous
    return 0;
}