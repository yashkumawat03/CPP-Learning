#include<bits/stdc++.h>
using namespace std;

int linearsearch(vector<int> &arr,int num){
    int n = arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]== num){
            return i;
        }
    }
    return -1;
}
int main(){
 
    vector<int> arr= {1,3,4,2,5};
    int key = linearsearch(arr,4);
    cout<<key;
    return 0;
}