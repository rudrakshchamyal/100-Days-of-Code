#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a number (1-7): ";
    cin >> n;

    switch(n) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl; // Fixed your "Mo" shortcut just to keep it clean!
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        // Adding a default case handles wrong inputs (like typing 9) smoothly
        default:
            cout << "Invalid input! Please enter 1-7." << endl;
            break;
    }

    return 0;
}