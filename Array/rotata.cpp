// #include<bits/stdc++.h>
// using namespace std;

// void rotateleft(vector<int>& arr){
//     int temp = arr[0];
//     for(int i = 1; i < arr.size();i++){
//         arr[i-1]=arr[i];
//     }
//     arr[arr.size()-1]= temp;
    
// }

// int main(){
//     int n;
//     cin >>n;
//     vector <int> arr(n);
//     for(int i =0; i<n;i++){
//         cin >> arr[i];
//     }

//     rotateleft(arr);
//     for(int i =0; i<n;i++){
//         cout << arr[i]<< " ";
//     }
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

// vector<int> rotateArray(vector<int> &arr, int n) {
//     int temp = arr[0];
//     for (int i = 1; i < n; i++) {
//         arr[i - 1] = arr[i];
//     }
//     arr[n - 1] = temp;
//     return arr;
// }

vector<int> rotateRight(vector<int> &arr,int n,int k){
   int count = 1;
   while(count<=k){
      int temp = arr[n-1];
      for(int i = n-1; i>0; i--){
       arr[i]=arr[i-1];
       }
       arr[0]=temp;
       count++;
   }
   return arr;
}

int main() {
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    arr = rotateRight(arr, n,k);

    for (int x : arr) cout << x << " ";
    return 0;
 }



