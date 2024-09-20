#include<iostream>
using namespace std;

class Feet
{
    double feet;
    public:
    Feet(double f){feet=f;}
    double get_feet(){return feet;}
    void display_ft(){cout<<"\nfeet :"<<feet;}
};

class Inches{
    double inches;
    public:
    Inches(){inches=0;}
    void operator =(Feet& a){
        inches = a.get_feet()*12;
    }
    void display_inches(){cout<<"\nInches :"<<inches;}
};

int main(){
    double feet;
    Inches i;

    cout<<"enter value in feet :";
    cin>>feet;

    Feet f(feet);
    i=f;
    i.display_inches();
    f.display_ft();

    return 0;
}

