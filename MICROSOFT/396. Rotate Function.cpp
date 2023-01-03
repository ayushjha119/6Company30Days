class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        
        long long sum=0,orig = 0;
        
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            orig += i*nums[i];
        }
        
        /*
        originaal array  = {4,3,2,6}
        f_1 = 4*0+3*1+2*2+6*3
        after one rotation
        f_2 = 6*0+ 4*1 + 3*2 +2*3
        
        earliear: 4*0+3*1+2*2+6*3
        Now : 4*1+3*2+2*3+6*0
        
        How we can get now 
        (4*0+3*1+2*2+6*3) +(4+3+2+6) - 4* 6
        (qki ek ek times badh(last wala n time badh gya minus kr denge ))
        now = early +(sum)-(last ele)*n
        */
        
        
        long long maxi = orig;
        
        int n = nums.size();
        
        for(int i=nums.size()-1;i>=0;i--){
            
            orig += (sum - (long long)nums[i]*(n));
            maxi = max(maxi,orig);
        }
        
        return maxi;
    }
};