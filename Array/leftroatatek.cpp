#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
        k = k % nums.size();
        vector<int> temp;
        for(int i =0; i<k;i++){
            temp.push_back(nums[i]);
        }

        for(int i = k; i<nums.size(); i++){
            nums[i-k]=nums[i];
        }

        for(int i=nums.size()-k; i<nums.size(); i++){
            nums[i]=temp[i-(nums.size()-k)];
        }
    }

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    rotate(nums, k);

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}