
#include <iostream>
#include <string.h>

using namespace std;

class student
{
private:
    int rollNumber;
    string name;
    int mathMark;
    int phyMark;
    int chemMark;
public:
    student(int r, string n, int m, int p, int c);

    int totalMarks();
    void grade();
};

int main()
{
    int r, m, p, c;
    string n;
    cout << "Enter roll of student: ";
    cin >> r;
    cout << "\nEnter name of student: ";
    cin >> n;
    cout << "\nEnter marks of student: ";
    cin >> m;
    cin >> p;
    cin >> c;

    student s(r, n, m, p, c);

    cout << "\nTotal mark: " << s.totalMarks() << endl;
    s.grade();

    return 0;
}

student::student(int r, string n, int m, int p, int c)
{
    rollNumber = r;
    name = n;
    mathMark = m;
    phyMark = p;
    chemMark = c;
}

int student::totalMarks()
{
    return mathMark + phyMark + chemMark;
}

void student::grade()
{
    int average = totalMarks() / 3;
    if (average < 40)
    {
        cout << "Grade C" << endl;
    }
    else if (average >= 40 && average < 60)
    {
        cout << "Grade B" << endl;
    }
    else
        cout << "Grade A" << endl;
}

