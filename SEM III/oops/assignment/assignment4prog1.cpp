/*A storekeeper maintains a file which contains the
list of all food items. Write an iterative menu-driven
c++ program that will access the file and implement
the following tasks. Use reading and writing of class
object concepts from the file to implement the program
a) Display the food item details when the food
item name is entered
b) Display the food items between the price
range 100 to 500
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
class Dish
{
    char name[30], mnf[30], code[30];
    double price;
    bool storageStatus;
public:
    void newDish();
    void displayDish();
    void writeData();
    friend void updateFile(vector<Dish>&);
    friend void searchItemByName(char[]);
    friend void displayInRange(int, int);
};
//Constructor to initialize values of a Dishobject using user input
void Dish :: newDish()
 {
    storageStatus = false;
    cout<<"NEW ITEM ENTRY\n";
    cout<<"Item name: ";
    cin.getline(name,30);
    cout<<"Manufacturer: ";
    cin.getline(mnf, 30);
    cout<<"Price: ";
    cin>>price;
    cin.ignore();
 }
 //Fuicntion to display a food item
  void Dish :: displayDish(){
  cout<<"\nItem name: "<<name<<endl;
  cout<<"Manufacturer: "<<mnf<<endl;

  cout<<"Price: "<<price<<endl;
  cout.fill('_');
  cout<<setw(50)<<"_"<<endl;
}
//Fucntion to search for item in file by name
void searchItemByName(char searchName[])
{
  ifstream itemFile("DishFile.DAT");
  if (!itemFile)
 {
  cerr << "Error opening file: " << "file" << endl;
  return;
 }
Dish tempItem;
itemFile.seekg(0);
int i=0;

while(itemFile.good())
{
itemFile.read(reinterpret_cast<char*>(&tempItem), sizeof(Dish));

if(!strcmp(searchName,

tempItem.name))
tempItem.displayDish();
}
cout<<"EOF\n";
itemFile.close();
}
//Function to search for item in file by code
void searchItemByCode(vector<Dish> &items,
string code){
}
//Update food item list file
void updateFile(vector<Dish> &items)
{
for(unsigned int i=0;i<items.size();i++)
    {
if(!(items[i].storageStatus))
  {
    ofstream itemFile("DishFile.DAT",ios::app);
    itemFile.write((char*)&items[i],
    sizeof(Dish));
    itemFile.close();
    items[i].storageStatus=true;
 }
}
}
//Function to add new items to Dish vector array
void addItems(vector<Dish> &items)
{
cout<<"\n\t\tNEW FOOD ITEM\n";
Dish item;
item.newDish();
int c;
cout<<"[Esc] discard\t\t[Enter] save & continue ";
c = _getwch();
switch(c)
{
    case 27: break;
    case 13: items.push_back(item);
    updateFile(items);
    break;
}
}
void displayInRange(int min, int max)
{
ifstream itemFile("DishFile.DAT");
if (!itemFile)
{
cerr << "Error opening file: " << "file" << endl;
return;
}
Dish tempItem;
itemFile.seekg(0);
int i=0;
while(itemFile.good())
{
itemFile.read(reinterpret_cast<char*>(&tempItem), sizeof(Dish));

if(tempItem.price>=min && tempItem.price<=max)
tempItem.displayDish();
}
itemFile.close();
}

int main()
{
int c;
vector<Dish> items;
cout<<setw(10)<<"ITEM RECORD"<<endl;
do
{
cout<<"\n1. View food items.\n2. AddItems\n\n[esc] Exit\n";
c=_getwch()-48;
switch(c){
case 1:{
cout<<"1. All\n2. Search by name\n3.In Price range 100 -500\n[esc] Exit\n";
int c2=_getwch()-48;
switch(c2){
case 1:
for(unsigned int
i=0;i<items.size();i++)
items[i].displayDish();
break;
case 2: {

char searchName[30];
cout<<"Enter item name: ";
cin.getline(searchName, 30);

searchItemByName(searchName);
break;
}
case 3: {

displayInRange(100, 500);
break;
}
case -21:break;
default: cout<<"Invalid input!";
}
break;}
case 2: addItems(items);
break;
}
}while(c!=-21);
}
