#include<bits/stdc++.h>
using namespace std;

int countnum(int original_num){
     int count = 0;
     int num = original_num;
     while(num > 0){
        int value = num % 10;
        if (value != 0 && original_num % value == 0){  
            count +=1;
        
        }
        num /= 10;
    
    }
    return count;
}
int main(){
    int original_num;
    cin >> original_num;
    cout << countnum(original_num);
    return 0; 
}