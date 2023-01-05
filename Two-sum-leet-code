#include <iostream>
#include<vector>
using namespace std;
vector<int>twosum(vector<int>&a,int target){
    int n= a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                return {i,j};
            }
        }
    }
    return {};
}
int main(){
    vector<int>a={1 , 4 , 5 , 11 , 12};
    int target=9;
    for(int x : twosum(a , target))
        cout << x << " ";

    
}
