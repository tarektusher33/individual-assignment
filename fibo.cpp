#include<bits/stdc++.h>
using namespace std;

int main(){
    int a = 1 , b = 1;
    for(int i=2;i<=5;i++){
        int temp = a+b;
        a = b;
        b = temp;
    }
    cout<<"5th fibonacci number is " << b<<endl;
return 0;
}