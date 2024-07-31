#include <iostream>  
using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    char coins[n];
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
        if (coins[i] == 'U') {
            count++;
        }
    }

    if (count % 2 == 1) {
        cout << "Alice wins" << endl;
    } else {
        cout << "Bob wins" << endl;
    }

    return 0;
}
