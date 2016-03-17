#include "../std_lib_facilities.h"

int main() {
	int a = 20000;
	char c = a;
	int b = c;
	if (a != b) cout << "oops!: " << a << " != " << b << '\n';
	else cout << "Wow! We have large characters\n";

    double d = 0;
    while (cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        cout << "d==" << d
             << "\ni==" << i
             << "\ni2==" << i2
             << "\nchar(" << c << ")\n";
    }
	return 0;
}
