#include <iostream>
using namespace std;

class Box
{
private:
    double length, width, height;

public:
    // Default constructor
    Box()
    {
        length = 1;
        width = 1;
        height = 1;
        cout << "Default constructor called." << endl;
    }

    // Parameterized constructor
    Box(double l, double w, double h)
    {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized constructor called." << endl;
    }

    // Copy constructor
    Box(const Box &b)
    {
        length = b.length;
        width = b.width;
        height = b.height;
        cout << "Copy constructor called." << endl;
    }

    // Calculate volume
    double volume()
    {
        return length * width * height;
    }

    // Display object information
    void display()
    {
        cout << "Length : " << length << endl;
        cout << "Width  : " << width << endl;
        cout << "Height : " << height << endl;
        cout << "Volume : " << volume() << endl;
        cout << "------------------------" << endl;
    }

    // Destructor
    ~Box()
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main()
{
    cout << "Creating object using default constructor:" << endl;
    Box box1;
    box1.display();

    cout << "\nCreating object using parameterized constructor:" << endl;
    Box box2(10, 5, 4);
    box2.display();

    cout << "\nCreating object using copy constructor:" << endl;
    Box box3(box2);
    box3.display();

    cout << "\nExiting program..." << endl;

    return 0;
}

