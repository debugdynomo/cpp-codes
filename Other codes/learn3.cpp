#include <bits/stdc++.h>
using namespace std;
class Vishnu{
    protected:
        int height = 190;
    public:
        void showheight(){
            cout << height << endl;
        }
};
int main() {
    Vishnu vishnu;
    vishnu.showheight();
    return 0;
}