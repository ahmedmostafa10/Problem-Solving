#include <iostream>
#include <string>
using namespace std;
int main() {
    string number;
    cin >> number;
    int spellCount = 0;
    while (number.length() > 1) {
        int sum = 0;
        for (char digit : number) {
            sum += digit - '0';
        }
        number = to_string(sum);
        spellCount++;
    }
    cout << spellCount << endl;
    return 0;
}