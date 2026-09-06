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
   bool isPalindrome(int n){
    string s=to_string(n);
    int len=s.length();
    int l=0,r=len-1;

    while(l<r){
        if(s[l]!=s[r]) return false;
        
        l++;
        r--;}
    
    return true;
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