class Solution {
public:
    int value(char r){
    if(r=='I')
    return 1;
    else if(r=='V')
    return 5;
    else if(r=='X')
    return 10;
    else if(r=='L')
    return 50;
    else if(r=='C')
    return 100;
    else if(r=='D')
    return 500;
    else if(r=='M')
    return 1000;
    else
    return -1;
}
int romanToInt(string s) {
    int n,i=0,p=0,ans=0;
    n=s.length();
    for(i=n-1;i>=0;i--){
        if(value(s[i])>=p){
            ans+=value(s[i]);
        }
        else{
            ans-=value(s[i]);
        }
        p=value(s[i]);
    }
    return ans;
        
}
};
