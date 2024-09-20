
/*
#include <iostream>
using namespace std;
#include<stdlib.h>

class Student {
private:
  string name;
  int age;
  int roll_no;

public:
  // Default constructor
  Student()
  {
    name = "Unknown";
    age = 0;
    roll_no = 0;
  }

  Student(string name, int age, int roll_no)

      : name(name), age(age), roll_no(roll_no) {}


  void display()
  {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll No: " << roll_no << endl;
  }
};

int main()
{
  string name;
  int age;
  int roll_no;

 Student student1;
 student1.display();
    cout<<"\nEnter the name";
    cin>>name;
    cout<<"\nEnter the age:";
    cin>>age;
    cout<<"\nEnter the roll number:";
    cin>>roll_no;

      Student student2(name,age,roll_no);
      student2.display();

  return 0;
}
*/

#include <iostream>
#include <string>
using namespace std;

class Student {
private:
  string name;
  int age;
  int roll_no;

public:
  // Default constructor
  Student() {
    name = "Unknown";
    age = 0;
    roll_no = 0;
  }

  // Parameterized constructor
  Student(string name, int age, int roll_no) : name(name), age(age), roll_no(roll_no) {}

  // Display function
  void display() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Roll No: " << roll_no << endl;
  }
};

int main() {
  int choice;
  string name;
  int age;
  int roll_no;
  int n;
  Student student1;
  student1.display();
  while (true) {
    cout << "\n1 to enter the details\t\t2 to exit\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1:
        cout << "\nEnter the total number of students: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
          cout << "\nEnter the name: ";
          cin >> name;
          cout << "\nEnter the age: ";
          cin >> age;
          cout << "\nEnter the roll number: ";
          cin >> roll_no;

          Student student2(name, age, roll_no);
          student2.display();
        }
        break;

      case 2:
        exit(1);
        break;

      default:
        cout << "\nInvalid choice";
        Student student1;
        student1.display();
        break;
    }
  }

  return 0;
}
