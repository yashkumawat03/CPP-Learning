#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple times 

//4 types of functions 
// void -> which does not returns anything
// return
// parameterized
// non parameterized

void printName(string name) {
    cout << "hey " << name << endl;
}
int main() {
    string name1;
    cin >> name1;
    printName(name1);

    string name2;
    cin>>name2;
    printName(name2);

    return 0;
}