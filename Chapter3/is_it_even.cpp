#include "../std_lib_facilities.h"

int main() {
    int i = 0;
    cout << "Enter an integer: ";
    cin >> i;
    if (i % 2 == 0) {
        cout << i << " is an even number.\n";
    } else {
        cout << i << " is an odd number.\n";
    }

	return 0;
}
