#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Passenger
{
private:
  string name;
  int age;
  string startPlace;
  string endDest;
  string regId;
  string coachType;

public:
  void setDetails(const string& passengerName, int passengerAge,
    const string& start, const string& dest,
    const string& reg, const string& coach) {
  name = passengerName;
  age = passengerAge;
  startPlace = start;
  endDest = dest;
  regId = reg;
  coachType = coach;
}
void display() const
 {
    cout << "Name: " << name << "\n";
    cout << "Age: " << age << "\n";
    cout << "Start Place: " << startPlace << "\n";
    cout << "End Destination: " << endDest << "\n";
    cout << "Registration ID: " << regId << "\n";
    cout << "Coach Type: " << coachType << "\n\n";
 }
void saveToFile(const string& fileName) const
 {
    ofstream file(fileName, ios::app);
    if (file.is_open())
    {
    file << name << "," << age << "," << startPlace << ","
    << endDest << "," << regId << "," << coachType << "\n";
    file.close();
    } else
    {
    cerr << "Error opening file: " << fileName << endl;
    }
}
string getRegId() const
{
return regId;
}
friend istream& operator>>( istream& is, Passenger& passenger);
friend ifstream& operator>>( ifstream& is, Passenger& passenger);
};
istream& operator>>( istream& is, Passenger& passenger) {
cout << "Name: ";
is.ignore(); // Clear the newline character from the input buffer
getline(is, passenger.name);
cout << "Age: ";
is >> passenger.age;
cout << "Start Place: ";
is.ignore();
getline(is, passenger.startPlace);
cout << "End Destination: ";
getline(is, passenger.endDest);
cout << "Registration ID: ";
getline(is, passenger.regId);
cout << "Coach Type (2A, 3A, SL): ";
getline(is, passenger.coachType);

return is;
}
ifstream& operator>>( ifstream& is, Passenger& passenger) {
char comma;
is >> ws;
getline(is, passenger.name, ',');
is >> passenger.age >> comma >> ws;
getline(is, passenger.startPlace, ',');
getline(is, passenger.endDest, ',');
getline(is, passenger.regId, ',');
getline(is, passenger.coachType);
return is;
}
void displayPassengerList(const string& coachType) {
ifstream file(coachType + ".txt");
if (file.is_open()) {
Passenger passenger;
while (file >> passenger) {
passenger.display();
}
file.close();
} else {
cerr << "Error opening file: " << coachType << ".txt" << endl;
}
}
void displayPassengerById(const string& regId) {
ifstream file("PassengerRecords.txt");
if (file.is_open()) {
Passenger passenger;
bool found = false;
while (file >> passenger) {
if (passenger.getRegId() == regId) {
passenger.display();
found = true;
break;
}
}
if (!found) {
cout << "Passenger with Registration ID " << regId << " not found.\n";
}
file.close();
} else {
cerr << "Error opening file: PassengerRecords.txt" << endl;
}
}

int main() {
int n;
cout << "Enter the number of passengers: ";
cin >> n;
ofstream recordFile("PassengerRecords.txt", ios::app);
for (int i = 0; i < n; ++i) {
Passenger passenger;
cout << "\nEnter details for Passenger " << i + 1 << ":\n";
cin >> passenger;
passenger.saveToFile("PassengerRecords.txt");
passenger.saveToFile(passenger.getRegId() + ".txt");
}
recordFile.close();
cout << "\nPassenger List for 2A Coach:\n";
displayPassengerList("2A");
cout << "\nPassenger List for 3A Coach:\n";
displayPassengerList("3A");
cout << "\nPassenger List for SL Coach:\n";
displayPassengerList("SL");
string regIdToSearch;
cout << "\nEnter Registration ID to search: ";
cin >> regIdToSearch;
cout << "\nPassenger Details for Registration ID " << regIdToSearch << ":\n";
displayPassengerById(regIdToSearch);
return 0;
}
