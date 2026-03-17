#include<bits/stdc++.h>
using namespace std;

int missingno(vector<int> &arr){
    int n = arr.size();
    for(int i=1;i<=n;i++){
        if(arr[i]!=i) return i;
    }
    //return 0; 
}
int main(){
    vector<int> arr ={1,2,4,5};
    int result = missingno(arr);
    cout<<result;
    return 0;
}