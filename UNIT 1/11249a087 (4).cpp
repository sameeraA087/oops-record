#include <iostream>
#include <string>
using namespace std;

class Patient {
private:
    int id;
    string name;
    int age;
    string disease;

public:
    // Function to assign values to patient details
    void setPatient(int pid, string pname, int page, string pdisease) {
        id = pid;
        name = pname;
        age = page;
        disease = pdisease;
    }

    // Function to display patient details
    void showPatient() {
        cout << "Patient ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Disease: " << disease << endl;
    }
};

int main() {
    Patient patient1;

    // Assign values to patient1
    patient1.setPatient(123, "Alice Smith", 30, "Pneumonia");

    // Display patient1 details
    patient1.showPatient();

    return 0;
}



