 #include <iostream>
using namespace std;

int main() {
    int n;

    // Input from user
    cout << "Enter the value of n: ";
    cin >> n;

    // Print first n natural numbers
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
    }

    return 0;
}
