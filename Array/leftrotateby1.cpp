#include<bits/stdc++.h>
using namespace std;

vector<int> leftrotate(vector<int> &nums){
    int n = nums.size();
    int temp = nums[0];
    for(int i = 1;i<n;i++){
        nums[i-1] = nums[i];
    }
    nums[n-1]= temp;
    return nums;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    nums = leftrotate(nums);
    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}