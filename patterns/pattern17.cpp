#include<bits/stdc++.h>
using namespace std;

void pattern17(int n){
    for(char ch = 'A'; ch <='A' + n; ch++){
        for(int j = 'A'; j <=ch; j++ ){
            cout << ch;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}