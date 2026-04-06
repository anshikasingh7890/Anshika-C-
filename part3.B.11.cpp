#include <iostream>
using namespace std;

int main() {
    int i, j, sum;

    cout << "Perfect numbers between 1 and 500 are:\n";

    for(i = 1; i <= 500; i++) {
        sum = 0;

        // Find divisors
        for(j = 1; j <= i/2; j++) {
            if(i % j == 0) {
                sum += j;
            }
        }

        // Check perfect number
        if(sum == i && i != 0) {
            cout << i << " ";
        }
    }
 return 0;

}



