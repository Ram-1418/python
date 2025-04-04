#include <iostream>
using namespace std;

class Mobile {
    int Mobile_Id;
    string Mobile_Name;
    float Mobile_Price;

public:
    // Parameterized Constructor
    Mobile(int id, string name, float price) {
        Mobile_Id = id;
        Mobile_Name = name;
        Mobile_Price = price;
    }

    void display() {
        cout << "Mobile ID: " << Mobile_Id << endl;
        cout << "Mobile Name: " << Mobile_Name << endl;
        cout << "Mobile Price: ₹" << Mobile_Price << endl;
    }
};

int main() {
    // Creating object and initializing using parameterized constructor
    Mobile m1(101, "iPhone 14", 79999);

    // Displaying the values
    m1.display();

    return 0;
}
