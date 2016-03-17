#include "../std_lib_facilities.h"

int main() {
    cout << "Please enter your first name and last name: ";
    string first_name = "???";
    string last_name = "???";
    cin >> first_name >> last_name;
    cout << "Please enter your age: ";
    double age = -1.0;
    cin >> age;
    cout << "Hello, " << first_name << " " << last_name << " (age " << age*12 << " months)!\n";
    return 0;
}
