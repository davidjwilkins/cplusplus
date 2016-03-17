#include "../std_lib_facilities.h"

int main() {
    cout << "Enter the name of the person you want to write to: ";
    string first_name;
    cin >> first_name;
    cout << "\n" << "Enter their age: ";
    int age = 0;
    do {
        cin >> age;
        if (age < 0 || age > 110) {
            simple_error("you're kidding!");
        }
    } while (age < 0 || age > 110);
    cout << '\n' << "Enter a friend's name: ";
    string friend_name;
    cin >> friend_name;
    cout << "\n" << "Enter your friend's gender (m/f): ";
    char gender = 0;
    cin >> gender;

    cout << "Dear " << first_name << ",\n"
         << "How are you?  I am fine.  I miss you.\n"
         << "Have you seen " << friend_name << " lately?\n";
    string him_her = "";
    if (gender == 'm' || gender == 'M') {
        him_her = "him";
    } else if (gender == 'f' || gender == 'F') {
        him_her = "her";
    }
    cout << "If you see " << friend_name << " please ask " << him_her << " to call me.\n"
         << "I hear you just had a birthday and you are " << age << " years old.\n";
    if (age < 12) {
        cout << "Next year you'll be " << age + 1 << ".\n";
    }
    if (age == 17) {
        cout << "Next your you'll be able to vote.\n";
    }
    if (age > 70) {
        cout << "I hope you're enjoying retirement.\n";
    }
    cout << "Yours sincerely,\n\nDavid Wilkins\n";

    return 0;
}
