#include "../std_lib_facilities.h"

int main() {
    cout << "Enter an operator and two numbers: ";
    char operand;
    int num1, num2;
    cin >> operand >> num1 >> num2;
    switch (operand) {
        case '+':
            cout << num1+num2;
            break;
        case '-':
            cout << num1 - num2;
            break;
        case '*':
            cout << num1 * num2;
            break;
        case '/':
            cout << num1 / num2;
            break;
    }
    cout << '\n';

	return 0;
}
