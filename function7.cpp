#include<bits/stdc++.h>
using namespace std;

void doSomething(int arr[],int n){
    arr[0]+=100;
    cout<<arr[0] << endl;
}

int main() {
    int n = 10;
    int arr[n];
    for(int i = 0; i <=n; i +=1){
        cin >> arr[i];
    }

    doSomething(arr,n);
    cout << arr[0];
    return 0;
}