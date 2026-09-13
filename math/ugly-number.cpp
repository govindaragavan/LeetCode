class Solution {
public:
    bool isUgly(int n) {
       set<int> set=solve(n);
       for(auto it=set.begin();it!=set.end();it++){
        if(*it!=2 && *it!=3 && *it!=5) return false;
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