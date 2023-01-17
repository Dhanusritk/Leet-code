#include<iostream>
#include<string>
using namespace std;
class Solution{
public:
int  minFlipsMonoIncr(string s) {
    int n= s.length();
    int count=0;
    int count_1=0;
    for(auto i: s){
        if(i=='1'){
            count_1++;
        }
        else{
            count++;
            count=min(count,count_1);
        }
      
    }
    return count;
    
}
};
int main(){
    Solution s;
    string s1="00110";
    int x=s.minFlipsMonoIncr(s1);
    cout<<x<<endl;
    return 0;
    
}
