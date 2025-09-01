#include<bits/stdc++.h>
using namespace std;

int main(){
    string s="Yash";
    int len=s.size();
    s[len-2]='s';
    cout << s[0] << " " << s[3]<< endl;; 
    cout << s[len-1] << endl;
    cout << len << endl;
    cout << s[len-2];

    return 0;
}