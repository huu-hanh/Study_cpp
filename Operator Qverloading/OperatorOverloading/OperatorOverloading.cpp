
#include <iostream>

using namespace std;

class complex
{
private:
    int real;
    int img;
public:

    complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    friend ostream& operator<<(ostream& out, complex& c);

    friend complex operator+(complex c1, complex c2);
    //co the truy cap cac thanh phan private cua object
};

int main()
{
    complex c1(1, 2);
    complex c2(3, 4);
    complex c3;
    c3 = c1 + c2;
    cout << c3;
    return 0;
}

complex operator+(complex c1, complex c2)
{
    complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

ostream& operator<<(ostream& out, complex& c)
{
    out << c.real << " + i" << c.img;
    return out;
}