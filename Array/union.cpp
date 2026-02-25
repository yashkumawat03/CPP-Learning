#include<bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b){
    int n1=a.size();
    int n2=b.size();
    // set<int> st;
    // for(int i=0;i<n1;i++){
    //     st.insert(a[i]);
    // }
    // for(int i=0;i<n2;i++){
    //     st.insert(b[i]);
    // }
    // vector<int> temp;
    // for(auto it: st){
    //     temp.push_back(it);
    // }
    // return temp;

    //Optimal approach
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
            
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
    }
    return unionArr;
}

int main(){
    vector <int> a= {1,2,3,3,4,5};
    vector<int> b={2,4,4,5,6,7};
    vector<int> unionArr = sortedArray(a,b);
    for(int x:unionArr){
        cout << x<<" ";
    }
    return 0;
}