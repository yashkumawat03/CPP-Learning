#include<bits/stdc++.h>
using namespace std;

vector<int> rightrotate(vector<int> &nums,int k){

    int n = nums.size();
    k=k%n;
    int temp[k];
    //int j = 0;
    for(int i = n-k;i<n;i++){     
        temp[i-(n-k)]=nums[i];
        //j++;
    }
    //shifting
    for(int i = n-1; i>=k;i--){
        nums[i] = nums[i-k];
    }
    for(int i = 0;i<k;i++){
        nums[i]=temp[i];
    }
    return nums;
    
}

int main(){
    vector<int> nums = {1,2,3,4,5,6,7,8};
    nums = rightrotate(nums,3);
    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}