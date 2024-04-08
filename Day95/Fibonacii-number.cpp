#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the term to be find: ";
    cin>>n;
    int a=0;
    int b=1;
    if(n<=1){
        cout<<a;
    }else if(n==2){
        cout<<b;
    }else{
        int c;
        for(int i=3;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
        }
            cout<<c<<" ";
    }
    return 0;
}
