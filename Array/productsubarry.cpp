class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxi = INT_MIN;
        for(int i =0;i<n;i++){
            int product = 1;

            for(int j=i;j<n;j++){
             product = product * nums[j];
             maxi = max(maxi , product);    
            }
        }
        return maxi;
    }
};

/*
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int CntMax = nums[0];
        int CntMin = nums[0];
        int maxi = nums[0];
        for(int i=1;i<n;i++){
            int X = nums[i];
            int OMax = CntMax;
            int OMin = CntMin;
            CntMax = max({X,X*OMax,X*OMin});
            CntMin = min({X,X*OMax,X*OMin}); 
            maxi = max(maxi , CntMax);

        }
        return maxi;
    }
};
*/

// this it the optimal solution that we have added in this int Cntmax = max({x , x*omax, x * omin})