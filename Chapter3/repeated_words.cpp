#include "../std_lib_facilities.h";

int main() {
    string previous = "";
    string current;
    int num_words = 0;
    while (cin >> current) {
        num_words++;
        if (previous == current) {
            cout << "Word #" << num_words << " repeated: " << current << '\n';
        }
        previous = current;
    }
}
