class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> a(n);
     if(k==0)
     return a;
     if(k>0){
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i+1;j<k+i+1;j++){
                if(j>n-1)
                sum+=code[j%(n)];
                else
                sum+=code[j];
            }
            a[i]=sum;
        }
     }
             if(k<0){
                for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i-1;j>i+k-1;j--){
                if(j<0)
                sum+=code[n+j];
                else
                sum+=code[j];
            }
            a[i]=sum;
        }    
        }
     return a;
    }
};