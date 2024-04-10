#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int power=1;
    int ans=0;
    while(num){
        int digit=num%2;
        num/=2;
        ans+=digit*power;
        power*=10;
    }
    cout<<"Binary Representation : "<<ans<<endl;
}
