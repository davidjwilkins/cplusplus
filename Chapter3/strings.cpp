#include "../std_lib_facilities.h"

int main() {
    cout << "Please enter two names\n";
    string first;
    string second;
    cin >> first >> second;
    if (first == second) cout << "That's the same name twice!\n";
    else if (first < second) cout << first << " is alphabetically before " << second << '\n';
    else cout << first << " is alphabetically after " << second << '\n';
    return 0;
}

