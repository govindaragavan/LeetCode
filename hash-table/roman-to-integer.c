#define MAX 15
int value(char c){
switch(c){
    case 'I': return 1;
    case 'V' :return 5;
    case 'X' : return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default : return 0;
}
}
int romanToInt(char* s) {
    int i=0,sum=0;
    for(i=0;i<strlen(s);i++){
       int a=value(s[i]);
        int b=value(s[i+1]);
    
        if(a<b)
        sum-=a;
        else
        sum+=a;
      
    }
    return sum;
}
