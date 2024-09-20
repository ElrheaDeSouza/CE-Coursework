#include <iostream>
#include <stdlib.h>
using namespace std;
class student
{
private:
    int score[5];
public:
    void getdata();
    void putdata();
    friend int sum(student); // declare sum() as a friend function inside the class
};
void student::getdata()
{
    int i;
    cout << "\n Enter the marks obtained in 5 subjects by student " << i++ << ":" << endl;
    for (int i = 0; i < 5; i++)
        cin >> score[i];
}
int sum(student s) // define sum() inside the class
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + s.score[i]; // access the private member score
    }
    return sum;
}
void student::putdata()
{
    cout << "\n";
    for (int i = 0; i < 5; i++)
        cout << score[i] << " ";
}
int main()
{
    student s[30];
    student kristen;
    cout<<"\n marks scored by kristen";
    kristen.getdata();
    kristen.putdata();
    int n;
    cout << "\n Enter the total number of students:";
    cin >> n;
    for (int i = 0; i < n; i++)
        s[i].getdata();
    cout  << n;
    for (int i = 0; i < n; i++)
        s[i].putdata();

    int higherScoreCount = 0;
    for (int i = 0; i < n; i++) {
        if (sum(s[i]) > sum(kristen))
        {
            higherScoreCount++;
        }
    }
    cout << "\n The number of students who scored higher than Kristen are: " << higherScoreCount << endl;
    return 0;
}
