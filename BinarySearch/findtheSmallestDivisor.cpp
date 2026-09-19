class Solution {
public:
     int findme(vector<int>& v , int big){
        int n = v.size();
        int sum = 0;
        for(int i=0;i<n;i++){
             sum = sum + ceil((double)(v[i]) / (double)(big));

        }
        return sum;
     }
    int smallestDivisor(vector<int>& nums, int limit) {
        int n = nums.size();
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while(low <= high){
          int mid = (low+high)/2;
          if(findme(nums, mid) <= limit){
            high = mid-1;
          }else{
            low = mid+1;
          }
        }
        return low;
    }
};