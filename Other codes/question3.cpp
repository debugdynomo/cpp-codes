#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;       // dynamic array
    int capacity;   // max size
    int front;      // index of front element
    int rear;       // index of last element
    int count;      // current number of elements

public:
    // constructor
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    // destructor
    ~Queue() {
        delete[] arr;
    }

    // enqueue operation
    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue overflow\n";
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = x;
        count++;
    }

    // dequeue operation
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow\n";
            return;
        }
        cout << "Removed: " << arr[front] << endl;
        front = (front + 1) % capacity;
        count--;
    }

    // get front element
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty\n";
            return -1;
        }
        return arr[front];
    }

    // check if queue is empty
    bool isEmpty() {
        return (count == 0);
    }

    // check if queue is full
    bool isFull() {
        return (count == capacity);
    }

    // get current size
    int size() {
        return count;
    }
};
int main() {
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    cout << "Front element: " << q.peek() << endl;
    cout << "Queue size: " << q.size() << endl;

    q.dequeue();
    q.dequeue();

    q.enqueue(50);
    q.enqueue(60);
    q.enqueue(70);   // should show overflow if beyond 5

    cout << "Front element: " << q.peek() << endl;
    cout << "Queue size: " << q.size() << endl;

    return 0;
}
