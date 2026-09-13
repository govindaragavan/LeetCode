class Solution {
public:
    bool isUgly(int n) {
        if(n<1) return false;
       unoreded_ set<int> set=solve(n);
       if(set.size()>3) return false;

       for(auto it=set.begin();it!=set.end();it++){
        cout<<*it<<" ";
        if(*it!=2 && *it!=3 && *it!=5) return false;
       } 
       return true;
    }
   private:
   unoreded_set<int> solve(int n){
   unoreded_set<int> set;
    for(int i=2;i<=sqrt(n);i++){
        while(n%i==0){
            set.insert(i);
            n/=i;
        }
    }
    if(n>1) set.insert(n);
    return set;
   }
};