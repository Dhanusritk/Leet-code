#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int ans=0;
        for(auto x: nums){
            m[x]++;
            
        }
        for(auto x: nums){
            if(m[x]>1){
                return x;
                
            }
        }
        return ans;
        
    }
};
int main(){
    Solution s;
    vector<int>nums={1,3,4,2,2};
    int ans=s.findDuplicate(nums);
    cout<<ans;
}
