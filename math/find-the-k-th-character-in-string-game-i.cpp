class Solution {
    char f(string word,int k){
        int n = word.length();
        if(n>k)
        return word[k-1];
        string gen="";
        for(int i=0;i<n;i++)
        gen+=(word[i]+1);
        cout<<word+gen<<endl;
     return   f(word+gen,k);
  
    }
public:
    char kthCharacter(int k) {
char ans = f("a",k);
return ans;
    }
};