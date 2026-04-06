#include <iostream>
using namespace std;

int main() {

    cout << "Using break statement:\n";

    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            break;   // loop ko yahin stop kar dega
        }
        cout << i << " ";
    }

    cout << "\n\nUsing continue statement:\n";

    for(int i = 1; i <= 10; i++) {
        if(i == 6) {
            continue;   // 6 ko skip karega
        }
        cout << i << " ";
    }

    return 0;
    }
