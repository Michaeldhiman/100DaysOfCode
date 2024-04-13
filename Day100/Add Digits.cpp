class Solution {
public:
    int addDigits(int num) {
        while(num>9){

            int ans=0;
            while(num){
                int digit=num%10;
                num/=10;
                ans+=digit;
            }
            num=ans;
        }
        return num;
    }
};
