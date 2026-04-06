#include <iostream>
using namespace std;

int main() {
    int i, j;

    for(i = 1; i <= 3; i++) {        // rows
        for(j = 1; j <= i; j++) {    // numbers in each row
            cout << j;
        }
        cout << endl; // next line
    }

    return 0;
}
