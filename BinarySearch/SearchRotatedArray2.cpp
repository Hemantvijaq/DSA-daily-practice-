class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n = arr.size();
        int low =0;
        int high = n-1;
        while(low <= high){
            int mid = (low+high)/2;
            if(arr[mid] == target) return true;
            if(arr[low] == arr[mid] && arr[mid] == arr[high]){
                low++,high--;
                continue;
            }
            if(arr[low] <= arr[mid]){
                // checking for the left part that do we have target in this part
                if(arr[low] <= target && target < arr[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }else{
                // in this part we will check do we have the target in the right part
                if(arr[mid] <= target && target <= arr[high]){
                    low = mid+1;
                }else{
                    high = mid -1;
                }
            }
        }
        return false;

    }
};