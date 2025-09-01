#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string (with spaces): ";
    getline(cin, str);  

    cout << "You entered: " << str << endl;

    return 0;
}