// User function Template for C++
class Solution {
  public:
    bool armstrongNumber(int n) {
        // code here
        int a=n;
        int sum=0;
        while(a>0){
            int lastDigit = a%10;
            sum=sum+pow(lastDigit,3);
            a=a/10;
        }
        if(n==sum) return true;
        else
        return false;
    }
};
