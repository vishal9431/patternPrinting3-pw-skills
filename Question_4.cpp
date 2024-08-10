#include <iostream> // Include the iostream library for cin and cout
using namespace std;

int main() {
    int n;
    cin >> n; // Read the integer input n

    // Print the first line
    for(int i = 0; i < 2 * n - 1; ++i) {
        cout << (char)('A' + i) << " ";
    }
    cout << endl;

    // Print the remaining lines
    for(int i = 1; i < n; ++i) {
        // Print leading characters
        for(int j = 0; j < n - i; ++j) {
            cout << (char)('A' + j) << " ";
        }

        // Print spaces in the middle
        for(int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }

        // Print trailing characters
        for(int j = 0; j < n - i; ++j) {
            cout << (char)('A' + (n - i) + j) << " ";
        }
        
        cout << endl;
    }

    return 0;
}
