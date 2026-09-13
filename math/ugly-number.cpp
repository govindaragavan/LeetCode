class Solution {
public:
    bool isUgly(int n) {
       set<int> ans=solve(n);
       for(int i=0;i<set.size();i++){
        if(set[i]!=2 || set[i]!=3 || set[i]!=5) return false;
       } 
       return true;
    }
   private:
   set<int> solve(int n){
    set<int> set;
    for(int i=2;i<=sqrt(n);i+=2){
        while(n%i==0){
            set.insert(i);
            n/=i;
        }
    }
    if(n>1) set.insert(n);
    return set;
   }
};