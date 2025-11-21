#include <bits/stdc++.h>
using namespace std;

class DynmaicArray{
    private:
        int capacity;
        int size;
        int *arr;
        void resize(int new_capacity){
            if(new_capacity == 0) new_capacity = 1;
            int *temp = new int[new_capacity];
            for(int i=0;i<size;i++){
                temp[i] = arr[i];
            }
            delete[] arr;
            arr = temp;
            capacity = new_capacity;
        }
    public:
        DynmaicArray() : capacity(1) , size(0) {
            arr = new int[capacity];
        }
        int Size(){
            return size;
        }
        void details(){
            cout << "Size: " << size << "\n" << "Capacity: " << capacity << "\n";
        }
        void add(int item){
            if(size == capacity){
                resize(capacity*2);
            }
            arr[size++] = item;
        }
        int get(int index){
            if(index < 0 || index >= size){
                cout << "out of bound" << "\n";
                return -1;
            }
            return arr[index];
        }
        void remove_last(){
            if(size == 0){
                cout << "array is empty" << "\n";
                return;
            }
            size--;
            if(size <= capacity/4){
                resize(capacity/2);
            }
            return;
        }
        ~DynmaicArray(){}
};


class Stack{
    DynmaicArray arr;
    public:
        void pop(){
            if(is_empty()){
                cout << "Stack is empty" << endl;
                return;
            }
            arr.remove_last();
            return;
        }
        void push(int item){
            arr.add(item);
            return;
        }
        bool is_empty(){
            if(arr.Size() == 0) return true;
            return false;
        }
        int top(){
            if(is_empty()){
                cout << "Stack is empty" << "\n";
                return -1;
            }
            return arr.get(arr.Size()-1);
        }
        ~Stack(){}
};

int main() {
    DynmaicArray vec;
    for(int i=0;i<10;i++){
        vec.add(i);    
    }
    vec.details();
    for(int i=0;i<3;i++){
        vec.remove_last();
    }
    vec.details();
    for(int i=0;i<3;i++){
        vec.remove_last();
    }
    vec.details();

    Stack s;
    for(int i=0;i<10;i++){
        s.push(i);    
    }
    cout << s.top() << endl;
    for(int i=0;i<3;i++){
        s.pop();
    }
    cout << s.top() << endl;
    for(int i=0;i<3;i++){
        s.pop();
    }
    cout << s.top() << endl;
    return 0;
}