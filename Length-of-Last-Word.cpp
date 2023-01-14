#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n= s.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
                count++;
            }
            if(s[i]==' '){
                if(count>0){
                    break;
                }
                else{
                    continue;
                }
            }
        }
        return count;
    }
};
int main(){
    Solution ss;
    
    string s="   fly me   to   the moon  ";
    int x =ss.lengthOfLastWord(s);
    cout<<x<<endl;
}
