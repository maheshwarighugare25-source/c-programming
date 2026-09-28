#include <iostream>
using namespace std;


float area(float radius)
{
    return 3.14 * radius * radius;
}


float area(float length, float breadth)
{
    return length * breadth;
}


float area(float base, float height, char)
{
    return 0.5 * base * height;
}

int main()
{
    float r, l, b, base, h;

    cout << "Enter radius of circle: ";
    cin >> r;
    cout << "Area of Circle = " << area(r) << endl;

    cout << "\nEnter length and breadth of rectangle: ";
    cin >> l >> b;
    cout << "Area of Rectangle = " << area(l, b) << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> base >> h;
    cout << "Area of Triangle = " << area(base, h, 't') << endl;

    return 0;
}