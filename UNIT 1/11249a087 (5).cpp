#include <iostream>
#include <string>  // Corrected from <sting> to <string>
using namespace std;

class laptop {
public:
    string brand;
    string processor;
    int ram;

    void display() {
        cout << "Brand: " << brand << ", Processor: " << processor << ", RAM: " << ram << "GB" << endl;
    }
};

int main() {
    laptop l1, l2;  // Variables are case-sensitive: l1 instead of L1

    l1.brand = "Dell";  // Fixed typo from "Del" to "Dell"
    l1.processor = "Intel i5";
    l1.ram = 8;

    l2.brand = "HP";
    l2.processor = "AMD Ryzen 5";  // Fixed typo from "amdryzeen5"
    l2.ram = 16;

    l1.display();
    l2.display();

    return 0;
}
