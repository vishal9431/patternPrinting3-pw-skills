#include <iostream> // Include the iostream library for cin and cout
using namespace std;

int main() {
    int n;
    cin >> n; // Read the integer input n

    // Print the first line
    for(int i = 1; i < 2 * n - 1; ++i) {
        cout << i;
    }
    cout << endl;

    // Print the remaining lines
    for(int i = 1; i < n; ++i) {
        // Print leading characters
        for(int j = 1; j <= n - i; ++j) {
            cout << j<<" ";
        }

        // Print spaces in the middle
        for(int j = 0; j < 2 * i - 1; ++j) {
            cout << " ";
        }

        // Print trailing characters
        for(int j = n-i; j >=1; j--) {
            cout << j << " ";
        }
        
        cout << endl;
    }

    return 0;
}
