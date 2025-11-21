#include <bits/stdc++.h>
using namespace std;

class matrix{
    private:
        int m,n;
    public:
        matrix(int r,int c){
            this->m = r;
            this->n = c;
        }
        void set_values(int m,int n){
            this->m = m;
            this->n = n;
        }
        ~matrix(){}
};


int main() {
    const matrix A(10,10);
    A.set_values(20,20);
    return 0;
}