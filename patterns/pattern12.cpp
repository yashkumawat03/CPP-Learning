#include<bits/stdc++.h>
using namespace std;

void pattern12(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        for(int j = 1; j <= n-i; j++){
            cout << " ";
        }
        for(int j = i; j >=  i; j--){
            cout << j;
        }
        cout << endl;
    }
}

int nain(){
    int n;
    cin >> n;
    pattern12(n);
    return 0;
}