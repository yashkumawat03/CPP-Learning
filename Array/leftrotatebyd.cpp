#include<bits/stdc++.h>
using namespace std;

// vector<int> leftrotate(vector<int> &nums,int d){
//     int n = nums.size();
//     d = d%n;
//     int temp[d];
//     for(int i = 0;i<d;i++){
//         temp[i] = nums[i];
//     }
//     for(int i = d; i<n;i++){
//         nums[i-d]=nums[i];
//     }
//     for(int i = n-d;i<n;i++){
//         nums[i]= temp[i-(n-d)];
//     }

//     return nums;
// }
void reverse(vector<int>&nums,int start, int end){
    while(start<=end){
        int temp = nums[start];
        nums[start] = nums[end];
        nums[end]= temp;
        start++;
        end--;
    }
}
vector<int> leftrotate(vector<int> &nums,int d){
    int n = nums.size();
    d = d%n;
    reverse(nums,0,d-1);
    reverse(nums,d,n-1);
    reverse(nums,0,n-1);

    return nums;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    nums = leftrotate(nums,2);
    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}