#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int dup = n;
    int sum = 0;
    while(n>0){
        int  ld = n % 10;
        int cube = ld*ld*ld;
        sum = sum + cube;
        n/=10;
    }
    if (sum == dup){
        cout << "It is an armstrong number";
    }
    else{
        cout << "It is not an Armstrong Number";
    }
    return 0;
}