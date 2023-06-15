#include <iostream>

using namespace std;

class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};

class rectangle : public shape
{
private:
    int length;
    int breadth;

public:
    rectangle(int l = 1, int b = 1)
    {
        length = 1;
        breadth = 1;
    }

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
    }
};

class circle : public shape
{
private:
    int radius;

public:
    circle(int r = 1)
    {
        radius = r;
    }

    float area()
    {
        return (3.14 * radius * radius);
    }

    float perimeter()
    {
        return (2 * 3.14 * radius);
    }
};

int main()
{
    shape *s = new rectangle();
    cout << "Rectangle\nArea: " << s->area() << " Perimeter: " << s->perimeter() << endl;

    s = new circle();
    cout << "Circle\nArea: " << s->area() << " Perimeter: " << s->perimeter() << endl;

    cin.ignore();
    return 0;
}
