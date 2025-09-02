#include<bits/stdc++.h>
using namespace std;

// pass by reference

void doSomething(string &s){
    s[0] = 'k';
    cout << s << endl;
}

int main() {
    string s = "Yash";
    doSomething(s);
    cout<<s;
    return 0;
}