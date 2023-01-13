#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n= digits.size();
        for(int i= n-1;i>=0;i--){
            if(digits[i]<9){
                digits[i]+=1;
                return digits;
            }
            else{
                digits[i]=0;
        }
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};
int main(){
    Solution s;
    
    vector<int>d={9,9,9};
    vector<int> x= s.plusOne(d);
    for(auto x1: x){
        cout<<x1<<",";
    } 
}
        
