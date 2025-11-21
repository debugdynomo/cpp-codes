#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(){
            this->data = 0;
            this->next = nullptr;
        }
        Node(int data){
            this->data = data;
            this->next = nullptr;
        }
};
class List{
    Node *head;
    public:
    void print(){
        cout << head->data << endl;
    }
};



int main() {
    List l1;
    l1.print();
    return 0;
}