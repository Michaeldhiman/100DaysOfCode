class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return 0;
        else{
        int original_num=x;
        int ans=0;
        while(x){
            int digit=x%10;
            x/=10;
            if(ans>INT_MAX/10 || ans<INT_MIN/10) return 0;
            ans=ans*10+digit;
        }
        if(original_num==ans) return 1;
        else return 0;
        }
       
    }
};
