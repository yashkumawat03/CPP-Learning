#include<bits/stdc++.h>
using namespace std;
 
int secondsmallestnumber(vector<int> &arr){
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i =1;i<arr.size();i++){
        if(arr[i] < smallest){
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] != smallest && arr[i] < second_smallest){
                    second_smallest=arr[i];
        
        }
    }
    return second_smallest;
}

int main() {
   int n;
   cin >> n;
   vector<int> arr(n);

   for(int i = 0; i<n; i++){
    cin >> arr[i];
   }

    int result = secondsmallestnumber(arr);

    cout << "second smallestt No. is : "<< result;
   

    return 0;
}