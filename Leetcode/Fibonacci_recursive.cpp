#include<iostream>
using namespace std;
int fibonacci_recursion(int n){
    //base cases
    if(n==2){
             return 1;
             }
   else if(n==1){
             return 0;
             }
    //recursive functions
    else{
         return fibonacci_recursion(n-1) + fibonacci_recursion(n-2);
         }
}

int main(){
    int n;
    cout<<"Enter n:";
    //enter the valus of n
    cin>>n;
    cout<<fibonacci_recursion(n);
    //cout<<k<<endl;
    return 0;
}
