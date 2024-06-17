#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string password = "";
    for (int i = 0; i < n; i++) {
        password += 'a' + i % k;
    }

    cout << password << endl;

    return 0;
}