#include <iostream>
using namespace std;
struct Student {
    string name;
    int age;
    float cgpa;
}
int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student s[100];
    for(int i = 0; i < n; i++) {
        cout << "Enter name age cgpa: ";
        cin >> s[i].name >> s[i].age >> s[i].cgpa;
    }
    cout << "\n";
    cout<<"Student Information:";
    cout<<"\n";
    for(int i = 0; i < n; i++) {
        cout << s[i].name << " " << s[i].age << " " << s[i].cgpa;
        cout<<"\n";
    }
}
