//Derive classes DOCTOR,ENGINEER,ARTIST from class PERSON. Derive class SPECIALIST
//DOCTOR from class DOCTOR.

#include<iostream>
#include<string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string name, int age) : name(name), age(age) {}

    virtual void display() {
        cout << "Person: " << name << ", " << age << endl;
    }
};

class Doctor : public Person {

public:
     string specialty;

    Doctor(string name, int age, string specialty) : Person(name, age), specialty(specialty) {}

    void display() {
        cout << "Doctor: " << name << ", " << age << ", " << specialty << endl;
    }
};

class Engineer : public Person {
private:
    string field;

public:
    Engineer(string name, int age, string field) : Person(name, age), field(field) {}

    void display() {
        cout << "Engineer: " << name << ", " << age << ", " << field << endl;
    }
};

class Artist : public Person {
private:
    string artForm;

public:
    Artist(string name, int age, string artForm) : Person(name, age), artForm(artForm) {}

    void display() {
        cout << "Artist: " << name << ", " << age << ", " << artForm << endl;
    }
};

class SpecialistDoctor : public Doctor {
//private:
//    string specialtyArea;

public:
    string specialtyArea;
    SpecialistDoctor(string name, int age, string specialty, string specialtyArea) : Doctor(name, age, specialty), specialtyArea(specialtyArea) {}

    void display() {
        cout << "Specialist Doctor: " << name << ", " << age << ", " << specialty << ", " << specialtyArea << endl;
    }
};

int main() {
    Person person("John", 30);
    person.display();

    Doctor doctor("Jane", 35, "Neurology");
    doctor.display();

    Engineer engineer("Joe", 40, "Civil");
    engineer.display();

    Artist artist("Jill", 45, "Painting");
    artist.display();

    SpecialistDoctor specialistDoctor("Jack", 50, "Cardiology", "Heart Failure");
    specialistDoctor.display();

    return 0;
}
