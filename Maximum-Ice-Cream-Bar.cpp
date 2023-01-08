#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n=0;
        sort(costs.begin(),costs.end());
        for(auto c:costs){
            if(coins>=c){
                n++;
                coins-=c;
            }
            else{
                break;
            }
            
        }
        return n;
        
    }
};
int main(){
Solution s;
vector<int>costs={1,3,2,4,1};
int coins=7;
int x= s.maxIceCream(costs,coins);
cout<<x<<endl;
}
