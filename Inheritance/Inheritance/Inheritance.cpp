

#include <iostream>

using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    void setLength(int l);
    void setbreadth(int b);

    Rectangle(int l = 1, int b = 1);
    Rectangle(Rectangle &r);

    int getLength();
    int getbreadth();

    int area();
    int perimeter();

    int isSquare();

    ~Rectangle();
};

class Cuboid : public Rectangle
{
private:
    int height;

public:
    Cuboid()
    {
        height = 1;
    }

    Cuboid(int l, int b, int h) : Rectangle(l, b)
    {
        height = h;
    }

    void setHeight(int h)
    {
        height = h;
    }

    int getHeight()
    {
        return height;
    }

    int volume()
    {
        return getLength() * getbreadth() * height;
    }
};

int main()
{
    Cuboid c(2, 3, 4);
    cout << c.area() << endl;
    cout << c.volume() << endl;
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
}

Rectangle::Rectangle(Rectangle &r)
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
