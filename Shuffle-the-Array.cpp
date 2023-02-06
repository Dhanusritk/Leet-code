#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
            temp.push_back(nums[i+n]);
        }
        return temp;
        
    }
};
int main(){
    Solution s;
    int n=3;
    vector<int>nums={2,5,1,3,4,7};
    vector<int>ans=s.shuffle(nums,n);
    for(auto x: ans){
        cout<<x<<" ";
    }
    
}
