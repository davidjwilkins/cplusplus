#include "../std_lib_facilities.h"

int main() {
    const float KM_IN_A_MILE = 1.609;
    cout << "Enter miles: ";
    float miles;
    cin >> miles;
    cout << "That is " << (miles * KM_IN_A_MILE) << " km\n";

	return 0;
}
