#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int yearOfJoining;
    double salary;
    string address;

    void setData(string empName, int empYearOfJoining, double empSalary, string empAddress) {
        name = empName;
        yearOfJoining = empYearOfJoining;
        salary = empSalary;
        address = empAddress;
    }

    void displayInfo() {
        cout << name << " " << yearOfJoining << " " << address << endl;
    }
};

int main() {
    Employee employee1, employee2, employee3;

    // Set data for three employees
    employee1.setData("Rahul", 2010, 64.0, "64C- Walls Street");
    employee2.setData("Samar", 2000, 68.0, "68D- Walls Street");
    employee3.setData("Ishita", 2018, 26.0, "26B- Walls Street");

    // Display information for three employees
    cout << "Name Year of joining Address" << endl;
    employee1.displayInfo();
    employee2.displayInfo();
    employee3.displayInfo();

    return 0;
}
