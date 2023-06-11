
#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;
public:
    //Mudators
    void setLength(int l);
    void setbreadth(int b);

    //constructor
    Rectangle(int l = 1, int b = 1);
    Rectangle(Rectangle& r);

    //Accessor
    int getLength();
    int getbreadth();

    //Facilitators
    int area();
    int perimeter();

    //Enquiry
    int isSquare();

    //Detructor
    ~Rectangle();
};

int main()
{

    Rectangle r1(10, 5);
    cout << r1.area() << endl;
    return 0;
}

void Rectangle::setLength(int l)
{
    if (l > 0)
        length = l;
    else
        length = 1;
}

void Rectangle::setbreadth(int b)
{
    if (b > 0)
        breadth = b;
    else
        breadth = 1;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setbreadth(b);
//this pointer
//    this->length = length;
//    this->breadth = breadth;
}

Rectangle::Rectangle(Rectangle& r)
{
    length = r.length;
    breadth = r.breadth;
}

int Rectangle::getLength()
{
    return length;
}

int Rectangle::getbreadth()
{
    return breadth;
}

int Rectangle::area()
{
    return length * breadth;
}

int Rectangle::perimeter()
{
    return 2 * (length + breadth);
}

int Rectangle::isSquare()
{
    if (length == breadth)
        return 1;
    else
        return 0;
}

Rectangle::~Rectangle()
{
    cout << "Rectangle destroyed" << endl;
}

