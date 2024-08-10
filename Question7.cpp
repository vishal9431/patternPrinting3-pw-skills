// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
// *
// * *
// * *
// * *
// * *

// * *
// *
#include <iostream>
using namespace std;

int main() {
    int rows = 5;  // Number of rows in the pattern
    int cols = 9;  // Number of columns based on the widest part of the pattern

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Define the positions for stars
            if ((i == 0 && j == 4) ||
                (i == 1 && (j == 2 || j == 6)) ||
                (i == 2 && (j == 0 || j == 8)) ||
                (i == 3 && (j == 2 || j == 6)) ||
                (i == 4 && j == 4)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;  // Move to the next line after each row
    }

    return 0;
}
