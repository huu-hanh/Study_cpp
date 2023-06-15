#include <iostream>

using namespace std;

class animal
{
private:
    int weight;

public:
    void eat()
    {
        cout << "Eat" << endl;
    }
    void sleep()
    {
        cout << "Sleep" << endl;
    }
};

class dog : public animal
{
public:
    void bark()
    {
        cout << "Bark" << endl;
    }
};

int main()
{
    animal *p;
    dog d;
    d.bark();
    d.eat();
    d.sleep();

    p = &d;
    p->eat();
    p->sleep();
    // p -> bark(); Error

    // dog *p;      Error
    // animal a;
    // p = &a;

    cin.ignore();
    return 0;
}