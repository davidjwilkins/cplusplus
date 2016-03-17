#include "../std_lib_facilities.h"

int main() {
    cout << "Enter two integers: ";
    int v1, v2;
    cin >> v1 >> v2;

    if (v1 < v2) {
        cout << "Min: " << v1 << '\n';
        cout << "Max: " << v2 << '\n';
    } else {
        cout << "Min: " << v2 << '\n';
        cout << "Min: " << v1 << '\n';
    }
    cout << "Sum: " << v1 + v2 << '\n';
    cout << "Difference: " << v1 - v2 << '\n';
    cout << "Product: " << v1 * v2 << '\n';
    cout << "Ratio: " << double(v1) / double(v2) << '\n';


	return 0;
}
