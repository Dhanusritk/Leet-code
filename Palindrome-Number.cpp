#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        int temp=x;
        long unsigned int sum=0;
        while(x>0){
            int r= x%10;
            sum=(sum*10)+r;
            x=x/10;
        }
        if(temp==sum){
            return true;
        }
        else{
            return false;
        }
        
        
    }
};
int main(){
  Solution s;
  int x= s.isPalindrome(-121);
  cout<<x<<endl;
  return 0;
}
  
