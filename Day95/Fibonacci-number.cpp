
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term to be find: ";
    cin>>n;
    int last=0;
    int previous=1;
    if(n<=1){
        cout<<last;
    }else if(n==2){
        cout<<previous;
    }else{
        int current=0;
        for(int i=3;i<=n;i++){
            current=previous+last;
            last=previous;
            previous=current;
        }
            cout<<n <<"-th "<<"Fibonacci number is:"<<current<<" ";
    }
    return 0;
}
