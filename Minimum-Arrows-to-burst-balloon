#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(vector<int>&a, vector<int>&b){
    return a<b;
}


    int findMinArrowShots(vector<vector<int>>& points) {
        int n=points.size();
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }
        sort(points.begin(),points.end(),compare);
        int arrow=1;
        int end=points[0][1];
        for(int i=1;i<n;i++){
            if(points[i][0]<=end){
                continue;
            }
            else{
                arrow++;
                end=points[i][1];
            }
        }
        return arrow;
        
    }

int main()
{
 
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    int x= findMinArrowShots(points);
    cout<<x;
    return 0;
}
