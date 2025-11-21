#include <iostream>
using namespace std;

class student {
public:
    string name;
    int rollno;       // Corrected variable name to 'rollno'
    float marks;

    void display() {
        cout << "Name: " << name
             << ", Rollno: " << rollno  // Use 'rollno' here as well
             << ", Marks: " << marks << endl;  // Fixed typo 'end1' to 'endl'
    }
};

int main() {
    student s1, s2, s3;

    s1.name = "Raj";
    s1.rollno = 101;  // Changed to 'rollno'
    s1.marks = 85.5;

    s2.name = "Manel";
    s2.rollno = 102;
    s2.marks = 90.0;

    s3.name = "Kumar";
    s3.rollno = 103;
    s3.marks = 78.8;

    s1.display();
    s2.display();
    s3.display();

    return 0;
}

