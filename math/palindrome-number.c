bool isPalindrome(int x) {
    int rem;
    double rev=0;
    int a=x;

    if(x<0)
    {
        return false;
    }
    while(x!=0)
    {
        rem=x%10;
        rev=rev*10+rem;
        x=x/10;
    }
    if(a==rev)
    {
        return true;
    }
    else{
      return false;
    }
}