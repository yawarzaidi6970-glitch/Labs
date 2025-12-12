#include <iostream>
using namespace std;
struct Course {
    string name;
    float gpa;
}
struct Address {
    string street;
    string city;
    string state;
    int zip;
}
struct Student {
    float cgpa;
    Course courses[3];
    Address addr;
}
int main() {
    Student s1, s2;
    cout << "Enter Student 1 CGPA: ";
    cin >> s1.cgpa;
    cout << "Enter Student 1 Courses and GPAs:\n";
    for(int i = 0; i < 3; i++){
        cin >> s1.courses[i].name >> s1.courses[i].gpa;
    }
    cout << "Enter Student 1 Address:\n";
    cin >> s1.addr.street >> s1.addr.city >> s1.addr.state >> s1.addr.zip;
    cout << "Enter Student 2 CGPA: ";
    cin >> s2.cgpa;
    cout << "Enter Student 2 Courses and GPAs:\n";
    for(int i = 0; i < 3; i++){
        cin >> s2.courses[i].name >> s2.courses[i].gpa;
    }
    cout << "Enter Student 2 Address:\n";
    cin >> s2.addr.street >> s2.addr.city >> s2.addr.state >> s2.addr.zip;
    cout << "\n";
    cout<<"Highest GPA in each course:\n";
    for(int i = 0; i < 3; i++){
        cout << s1.courses[i].name << ": ";
        if(s1.courses[i].gpa > s2.courses[i].gpa)
            cout << "Student 1 (" << s1.courses[i].gpa << ")\n";
        else if(s2.courses[i].gpa > s1.courses[i].gpa)
            cout << "Student 2 (" << s2.courses[i].gpa << ")\n";
        else
            cout << "Both equal (" << s1.courses[i].gpa << ")\n";
    }
    cout<<"\n";
    cout << "Higher CGPA: ";
    if(s1.cgpa > s2.cgpa)
        cout << "Student 1 (" << s1.cgpa << ")";
    else if(s2.cgpa > s1.cgpa)
        cout << "Student 2 (" << s2.cgpa << ")";
    else
        cout << "Both equal (" << s1.cgpa << ")";
}
