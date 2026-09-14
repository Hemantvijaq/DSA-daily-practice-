class Solution {
  public:
    int lowerBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int low = 0 ,high = n-1;
        int ans =n;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] >= target){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return ans;
    }
};


//        int lowerBound = lower_bound(arr.begin(),arr.end() , target) - arr.begin();
//this is also a way of using cpp stl 