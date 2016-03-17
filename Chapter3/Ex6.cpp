#include "../std_lib_facilities.h"

int main() {
    cout << "Enter three integers: ";
    int v1, v2, v3;
    cin >> v1 >> v2 >> v3;
    int tmp;
    if (v1 > v2) {
        tmp = v1;
        v1 = v2;
        v2 = tmp;
    }
    if (v1 > v3) {
        tmp = v1;
        v1 = v3;
        v3 = tmp;
    }
    if (v2 > v3) {
        tmp = v2;
        v2 = v3;
        v3 = tmp;
    }
    cout << v1 << ", " << v2 << ", " << v3 << '\n';


	return 0;
}
