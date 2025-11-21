// Catching derived classes.
#include <iostream>
using namespace std;
class B {};
class D: public B {};
int main()
{
    D derived;
    try {
        throw derived;
    }
    catch(D d) {
        cout << "caught a derived class.\n";
    }
    catch(B b) {
        cout << "Caught a base class.\n";
    }
    return 0;
}