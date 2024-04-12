
#include<iostream>
using namespace std;
int add(int a=5, int b=5){
    int sum=a+b;
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter the numbers: ";
    cin>>a>>b;
    int sum=add(a);
    cout<<"Sum of Numbers :"<<sum;
}
