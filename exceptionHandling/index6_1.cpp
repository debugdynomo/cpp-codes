// This example catches all exceptions.
#include <iostream>
using namespace std;
void Xhandler(int test) {
    try{
        if(test==0) throw test; // throw int
        if(test==1) throw 'a'; // throw char
        if(test==2) throw 123.23; // throw double
    }
    catch(int t) {//!int instances are caught by this catch block
        cout << "caught exception of instance int" << "\n";
    }
    catch(...) { // catch all exceptions of any data type //!this acts as default exception catch, 
        //!if any previous catches fails then this catches every thing
        cout << "Caught One!\n";
    }
    cout << "Exit from the function" << "\n";
}
int main() {
    cout << "Start\n";
    int t;
    for(int i=0;i<3;i++) {
        cout << "Enter t: ";
        cin >> t;
        Xhandler(t);
    }
    cout << "End";
}