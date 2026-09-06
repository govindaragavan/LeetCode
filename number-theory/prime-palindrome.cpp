class Solution {
public:
    int primePalindrome(int n) {
        
        while(1){
            if(isPrime(n) && isPalindrome(n)) return n;
            n++;
        }
        return 1;
    }
    private:
bool isPalindrome(int n) {
    if (n < 0 || (n % 10 == 0 && n != 0))
        return false;

    int rev = 0;

    while (n > rev) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }

    return n == rev || n == rev / 10;
}

   bool isPrime(int n){
    int c=0;
    if(n<2) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i*i<=n;i+=2)
     if(n%i==0) return false;
    
    return true;
   }
};