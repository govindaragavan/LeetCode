class Solution {
public:
    long long sumOfLargestPrimes(string s) {
    unordered_set<int> set;
    int n=s.length();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            string tmp=s.substr(i,j);
            if(tmp!=""){
            int num=stoi(tmp);
            set.insert(num);}
        }
    }
    for(auto it=set.begin();it!=set.end();it++) cout<<*it<<" ";
    return 1;
    }
};