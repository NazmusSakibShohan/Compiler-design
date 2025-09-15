#include <iostream>
using namespace std;

class Rectangle {
private:
      int length;
      int width;
      int area;
      int perimeter;

    // Private member functions to update area and perimeter
    void updateArea() {
        area = length * width;
    }

    void updatePerimeter() {
        perimeter = 2 * (length + width);
    }

public:
    // Constructor to initialize length and width
    Rectangle(  int len,   int wid) {
        length = len;
        width = wid;
        updateArea();
        updatePerimeter();
    }


    // Public member functions to set length and width
    void setLength(  int len) {
        length = len;
        updateArea();
        updatePerimeter();
    }

    void setWidth(  int wid) {
        width = wid;
        updateArea();
        updatePerimeter();
    }

     // Public member functions to get length and width
      int getLength() {
        return length;
    }

      int getWidth() {
        return width;
    }

    // Public member functions to get area and perimeter
    int  getArea() {
        return area;
    }

    int  getPerimeter() {
        return perimeter;
    }
};

int main() {
    Rectangle my(5, 3);
    cout << " Initial Rectangle:" << endl;
    cout << " Length: " << my.getLength() << endl;
    cout << " Width: " << my.getWidth() << endl;
    cout << " Area: " << my.getArea() << endl;
    cout << " Perimeter: " << my.getPerimeter() << endl<<endl;

    my.setLength(7); // Update the length
    my.setWidth(4); // Update the width

    cout << " Modified Rectangle:" << endl;
    cout << " Length: " << my.getLength() << endl;
    cout << " Width: " << my.getWidth() << endl;
    cout << " Area: " << my.getArea() << endl;
    cout << " Perimeter: " << my.getPerimeter() << endl<<endl;

    return 0;
}
