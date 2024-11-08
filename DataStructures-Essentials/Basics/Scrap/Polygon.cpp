#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;
public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
    virtual double calculate_area() = 0;
};

class Rectangle : public Polygon {
public:
    double calculate_area() override {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    double calculate_area() override {
        return 0.5 * width * height;
    }
};

int main() {
    Polygon* polygonPtr;

    Rectangle rect;
    Triangle tri;

    polygonPtr = &rect;
    polygonPtr->set_value(10, 5);
    cout << "Area of Rectangle: " << polygonPtr->calculate_area() << endl;

    polygonPtr = &tri;
    polygonPtr->set_value(10, 5);
    cout << "Area of Triangle: " << polygonPtr->calculate_area() << endl;

    return 0;
}
