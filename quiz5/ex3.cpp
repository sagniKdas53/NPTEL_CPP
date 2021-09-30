#include <iostream>

using namespace std;

class Student
{

    string name;

    string sub;

    int marks;

protected:
    Student(string n, string s, int m) : name(n), sub(s), marks(m) {}

public:
    friend void studDetails(const Student &); //LINE-1
};

class Bengali : public Student
{
public:
    Bengali(string n, int m) : Student(n,"Bengali",m) {} //LINE-2
};

class English : public Student
{
public:
    English(string n, int m) : Student(n,"English",m) {} //LINE-3
};

void studDetails(const Student &s)
{

    cout << s.name << " --> (" << s.sub << " - " << s.marks << ")";
}

int main()
{
    string s;
    int m, n;
    Student *st;
    cin >> m >> s >> n;
    if (m == 1)
        st = new Bengali(s, n);
    else
        st = new English(s, n);
    studDetails(*st);
    return 0;
}