#include <iostream>
#include <cmath>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual functions (make this an abstract class)
    virtual double area() const = 0;
    virtual double perimeter() const = 0;

    // Virtual destructor (important for polymorphism)
    virtual ~Shape() {}
};

// Derived class: Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return M_PI * radius * radius;
    }
    double perimeter() const override {
        return 2 * M_PI * radius;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const override {
        return length * width;
    }
    double perimeter() const override {
        return 2 * (length + width);
    }
};

// Derived class: Triangle
class Triangle : public Shape {
    double a, b, c;  // sides
public:
    Triangle(double x, double y, double z) : a(x), b(y), c(z) {}

    double area() const override {
        double s = (a + b + c) / 2;  // semi-perimeter
        return sqrt(s * (s - a) * (s - b) * (s - c));  // Heron’s formula
    }
    double perimeter() const override {
        return a + b + c;
    }
};

int main() {
    // Polymorphism in action
    Shape* s1 = new Circle(5);
    Shape* s2 = new Rectangle(4, 6);
    Shape* s3 = new Triangle(3, 4, 5);

    cout << "Circle: Area = " << s1->area() 
         << ", Perimeter = " << s1->perimeter() << endl;

    cout << "Rectangle: Area = " << s2->area() 
         << ", Perimeter = " << s2->perimeter() << endl;

    cout << "Triangle: Area = " << s3->area() 
         << ", Perimeter = " << s3->perimeter() << endl;

    // Clean up
    delete s1;
    delete s2;
    delete s3;

    return 0;
}
