class Solution {
    public int maximumWealth(int[][] accounts) {
        int Maxi= 0;
        for(int customer []: accounts){
            int sum=0;
            for(int bank : customer){
                sum+=bank;
                
            }
            Maxi= Math.max(Maxi,sum);
        }
        return Maxi;
        
    }
}
