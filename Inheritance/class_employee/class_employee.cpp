#include <iostream>
#include <string>

using namespace std;

class employee
{
private:
    int id;
    string name;

public:
    employee(int i, string n)
    {
        id = i;
        name = n;
    }

    int getId()
    {
        return id;
    }

    string getName()
    {
        return name;
    }
};

class eFullTime : public employee
{
private:
    int salary;

public:
    eFullTime(int i, string n, int s):employee(i, n)
    {
        salary = s;
    }

    int getSalary()
    {
        return salary;
    }
};

class ePartTime : public employee
{
private:
    int wage;
public:
    ePartTime(int i, string n, int w):employee(i, n)
    {
        wage = w;
    }

    int getWage()
    {
        return wage;
    }
};



int main()
{
    eFullTime e1(107, "Hanh", 1);
    ePartTime e2(108, "SDas", 10);

    cout << "Id: " << e1.getId() << " Name: " << e1.getName() << " Salary: " << e1.getSalary() << endl;
    cout << "Id: " << e2.getId() << " Name: " << e2.getName() << " Salary: " << e2.getWage() << endl;     

    cin.ignore();
    return 0;
}