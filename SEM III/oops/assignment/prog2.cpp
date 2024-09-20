/* Create a class called time that has separate int member data for hours, minutes, and seconds.
One constructor should initialize this data to 0, and another should initialize it to fixed values.
Another member function should display it, in 11:59:59 format. The final member function
should add two objects of type time passed as arguments. A main() program should create two
initialized time objects and one that isn't initialized. Then it should add the two initialized values
together, leaving the result in the third time variable. Finally, it should display the value of this
third variable. Make appropriate member functions. const. */

#include <iostream>
using namespace std;
class Time
{
  int hours;
  int minutes;
  int seconds;
public:
  // Constructor that initializes data to 0
  Time()
 {
    hours = 0;
    minutes = 0;
    seconds = 0;
  }
  // Constructor that initializes data to fixed values
  Time(int h, int m, int s):hours(h),minutes(m),seconds(s) {}

  // Member function to display time in 11:59:59 format
  void display()
  {
    cout << hours << ":" << minutes << ":" << seconds << endl;
  }
  // Member function to add two objects of type Time
  Time add(const Time &t1, const Time &t2)
  {
    Time t3;
    t3.hours = t1.hours + t2.hours;
    t3.minutes = t1.minutes + t2.minutes;
    t3.seconds = t1.seconds + t2.seconds;

    // Handle the case when the seconds are greater than 59
    if (t3.seconds > 59) {
      t3.seconds -= 60;
      t3.minutes++;
    }

    // Handle the case when the minutes are greater than 59
    if (t3.minutes > 59) {
      t3.minutes -= 60;
      t3.hours++;
    }

    // Handle the case when the hours are greater than 23
    if (t3.hours > 23) {
      t3.hours -= 24;
    }

    return t3;
  }
};

int main() {
    int a,b,c,d,e,f;
    Time t0;
  // Create two initialized time objects
  cout<<"\n Enter the 1st time in hrs min and sec :";
  cin>>a>>b>>c;
  cout<<"\n Enter the 2nd time in hrs min and sec :";
  cin>>d>>e>>f;

  Time t1(a,b,c);
  Time t2(d, e, f);

  // Create one uninitialized time object
  Time t3;

  // Add the two initialized values together and store the result in the third time variable
  t3 = t3.add(t1, t2);

  // Display the value of the third time variable
  t3.display();

  return 0;
}

