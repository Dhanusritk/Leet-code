include<iostream>
#include<vector>
using namespace std;
class Solution{
public:

double findMedianSortedArrays(vector<int> &nums1, vector<int>&nums2){
    vector<int>v;
    for(auto n1: nums1){
        v.push_back(n1);
    }
    for(auto n2: nums2){
        v.push_back(n2);
    }
    int n=v.size();
    float ans;
    if(n%2==0){
        ans= (float)(v[n/2]+v[(n/2)-1])/2;
    }
    else{
        ans= (float) v[n/2];
    }
    return ans;
}
};
int main(){
    Solution s;
    vector<int>nums1={1,2};
    vector<int>nums2={3};
    float x= s.findMedianSortedArrays(nums1,nums2);
    cout<<x<<endl;
}
