#include<bits/stdc++.h>
using namespace std;

//pass by value
void doSomething(int num){
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
    cout << num << endl;
    num +=5;
}

int main() {
    int num;
    cin >> num;
    doSomething(num);
    cout << num;
    return 0;
}

