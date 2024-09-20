//Derive class OMNIVORE from classes HERBIVORE and CARNIVORE
//(ASSUME NECESSARY DATA)
#include<iostream>
using namespace std;

class Herbivore
{
public:
    void eatPlants()
    {
        cout << "Herbivore eats plants." << endl;
    }
};

class Carnivore
{
public:
    void eatMeat()
     {
        cout << "Carnivore eats meat." << endl;
    }
};

class Omnivore : public Herbivore, public Carnivore
{
public:
    void eatEverything() {
        cout << "Omnivore eats everything.So be careful" << endl;
    }
};

int main()
{
    Omnivore omnivore;
    omnivore.eatPlants();
    omnivore.eatMeat();
    omnivore.eatEverything();
    return 0;
}
