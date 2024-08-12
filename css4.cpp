#include <iostream>
#include <string>
using namespace std;
int main() {
    string userInput;

    cout << "Enter a string: ";
    getline(cin, userInput);

    cout << "You entered: " << userInput <<endl;

    return 0;
}

