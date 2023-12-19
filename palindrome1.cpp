
class Solution {
public:
    int isPalindrome(int x) {
        int number=x;
        int temp=0;
        long long sum=0;
        
        
        while(x!=0)
        {
            temp=x%10;
            sum=(sum*10)+temp;
            x/=10;

        }
        if( sum<0) {
            sum*=-1;
        } 
        cout<<sum;
        if(number==sum)
        return true;
        else 
        return false;
    }
};
