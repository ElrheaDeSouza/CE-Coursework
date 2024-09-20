/* Analyze the following problem statement and explain the significance of C++ constructs to be
used in the following example. Create a class that includes a data member that holds a "serial
number” for each object created from the class. That is, the first object created will be
numbered 1, the second 2, and so on. To do this, you'll need another data member that records
a count of how many objects have been created so far. Then, as each object is created, its
constructor can examine this count member variable to determine the appropriate serial
number for the new object. Add a member function that permits an object to report its own
serial number. Then write a main() program that creates five objects and queries each one
about its serial number. They should respond with message "I am object number 1", and so on. */

#include<iostream>
using namespace std;
class Object
{
int sr_no;
static int count;
public:
Object()
{ sr_no = count++; }
void display()
{
    cout<<"I am object number"<<sr_no<<endl;
}
};
int Object::count = 1;
int main()
{
Object obj[5];
for(int i = 0; i<5; i++)
obj[i].display();
return 0;
}
