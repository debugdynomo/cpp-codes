#include <bits/stdc++.h>
using namespace std;

template<typename T> 
class test{
        T y;
    public:
        test(T x) : y(x) {}
        ~test() {
            cout << "Resources for test, released" << "\n";
        }   
        void display() {
            cout << "y: " << this->y << "\n";
        }
};
template<typename T1=int,typename T2=int> 
class box{
    T1 a;
    T2 b;

    public:
        box(T1 x,T2 y) : a(x),b(y) {};
        void display() {
            cout << "a: " << a << "\n" << "b: " << b << "\n";
        }
        ~box(){
            cout << "Resources for box, released" << "\n";
        }
};

template <typename T1,typename T2>
class Subject{
    T1 str1;
    T1 str2;

    T2 size;

    public:
        Subject(T2 s,T1 a,T1 b) {
            size =  s;

            str1 = a;
            str2 = b;
        }
        void display();
        ~Subject() {
            cout << "Resources for subject, released" << "\n";
        }
};

template <typename T1,typename T2>
void Subject<T1,T2> :: display() {
    cout << this->str1 << ", " << this->str2 << " are friends" << "\n";
    return;
}

template<typename T>
void SWAP(T &a,T &b) {
    T temp = b;
    b = a;
    a = temp;
    cout << "This is from template function" << "\n";
    return;
}

void SWAP(int &a,int &b) {
    int temp = b;
    b = a;
    a = temp;
    cout << "This is from normal function" << "\n";
    return;
}

template<typename S>
void name(S s) {
    s = "VISHNU";
    cout << s << "\n";
    return;
}

template<typename T,int size = 10>//here size acts as global to this function mulBy10
T mulBy10(T a) {
    return a*size;
}


//! ******** THIS IS IMPORTANT *******
template<typename T, int size>
class Array {
    T *arr = new T[size];
public:
    Array() {
        for (int i = 0; i < size; i++)
            arr[i] = 0;
    }

    // 👇 friend template declaration
    template<typename U, int sz>
    friend void display(const Array<U, sz>&);

    ~Array() {
        cout << "resources are freed for Array\n";
        delete[] arr;
    }
};

// 👇 define template friend
template<typename U, int sz>
void display(const Array<U, sz>& a) {
    cout << "friend display function\n";
    for (int i = 0; i < sz; i++)
        cout << a.arr[i] << " ";
    cout << "\n";
}


int main() {
    test<int> t1(10),t2(20.5);

    t1.display();
    t2.display();


    Subject<string,int> s1(2,"vishnu","satya");
    s1.display();

    box<> b1(10,20),b2(20,30);
    b1.display();
    b2.display();

    int a = 10000;
    int b = 50000;

    cout << "before swap" << "\n";
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";

    cout << "after swap" << "\n";
    SWAP(a,b);
    cout << "a: " << a << "\n";
    cout << "b: " << b << "\n";  
    
    
    name("satya");
 
    cout << mulBy10(23.3) << "\n";

    Array<int,10> num;
    display(num);//num display function as it is a friend function it is not a member function
 
    return 0;
}