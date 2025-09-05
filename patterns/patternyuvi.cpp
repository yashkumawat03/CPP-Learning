#include<iostream>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i%2==0){
                if(j%2==0){
                cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }
            else{
                for(j = 0; j <=i; j++){
                if(j%2==0){
                cout<<"1";
                }
                else{
                    cout<<"0";
                }
            }   
        }
        }
        cout << endl;
        
        }
        
        
    }

int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;
}