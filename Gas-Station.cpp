#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int total_cost=0;
        for(int i=0;i<n;i++){
            total_cost+=gas[i]-cost[i];
        }
        if(total_cost<0){
            return -1; 
        }
        int rem=0;
        int start=0;
        int current_gas=0;
        int current_cost=0;
        for(int i=0;i<n;i++){
            current_gas=gas[i]+rem;
            current_cost=cost[i];
            rem=current_gas-current_cost;
            if(rem<0){
                rem=0;
                start=i+1;
            }
        }
        return start;
 }
};
int main(){
  Solution s;
  vector<int> gas= {1,2,3,4,5};
  vector<int>cost={3,4,5,1,2};
  int x= s.canCompleteCircuit(gas,cost):
  cout<<x<<endl;
  return 0;
}
