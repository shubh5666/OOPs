#include <iostream>
using namespace std;

class Student {
public:
    string name, gender;
    int age;

    Student(string name, string gender, int age) {
        this->name = name;
        this->gender = gender;
        this->age = age;
    }

    ~Student() {
        cout << "Student object destroyed: " << name << endl;
    }
    void display() {
        cout << name << " " << gender << " " << age << endl;
    }
};

int main() {
    Student s1("Shubh", "Male", 10);
    s1.display();
}
