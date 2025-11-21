#include <bits/stdc++.h>
using namespace std;

class student{
    int roll_no,marks;
    int tell = 104;
    string name;
    private:
        
    public:
        static int objectcount;
        student(){
            objectcount++;
        }
        void set_data(int r,int m,string n){
            roll_no = r;
            marks = m;
            name = n;
        }
        void display(){
            cout << "Roll no: " << roll_no << endl;
            cout << "marks: " << marks << endl;
            cout << "Name: " << name << endl;
            cout << "objectcount: " << objectcount << endl;
        }
        ~student(){
            cout << "class is destroyed" << endl;
        }
};

int student::objectcount; //only static variables can be intialized outside the class


int main() {
    student s1;
    s1.set_data(1000,70,"vishnu");
    s1.display();
    student s2;
    s2.set_data(1001,75,"satya");
    s2.display();
    return 0;
}