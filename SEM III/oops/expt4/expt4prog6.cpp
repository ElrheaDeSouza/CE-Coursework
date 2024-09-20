/*Write a program demonstrating use of destructrors.*/
#include <iostream>
using namespace std;

class volume
{
public:
    volume()
    {
    cout << "CONSTRUCTOR CALLED" <<endl;
    }
    ~volume()
    {
    cout << "DESTRUCTOR CALLED" <<endl;
    }
};

int main()
{
      volume t1;
      volume t2;

    return 0;
}


