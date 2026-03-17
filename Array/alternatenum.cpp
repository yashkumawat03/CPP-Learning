#include<bits/stdc++.h>
using namespace std;

vector<int> alternatearray(vector<int> &nums){
    int n = nums.size();
    vector<int> pos;
    vector<int> neg;
    for(int i=0;i<n;i++){
        if(nums[i]>0) pos.push_back(nums[i]);
        else neg.push_back(nums[i]);
    }
    int x = pos.size();
    int y = neg.size();
    if(x==y){
        for(int i=0;i<n/2;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
    }
    else if(x>y){
        for(int i=0;i<y;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index = 2*y;
        for(int i=y;i<x;i++){
            nums[index]=pos[i];
            index++;
        }
    }
    else{
        for(int i=0;i<y;i++){
            nums[2*i]=pos[i];
            nums[2*i+1]=neg[i];
        }
        int index = 2*x;
        for(int i=x;i<y;i++){
            nums[index]=pos[i];
            index++;
        }
    }
    return nums;
}

int main(){
    vector<int> nums = {1,2,-3,-4,5,6,7};
    nums = alternatearray(nums);
    for(int x : nums){
        cout << x << " ";
    }
    return 0;
}