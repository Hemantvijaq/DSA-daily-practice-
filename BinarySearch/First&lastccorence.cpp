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
        
        
        int upperBound(vector<int>& arr, int target) {
        // code here
        int n = arr.size();
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
         int mid = (low+high)/2;
         if(arr[mid] > target){
             ans = mid;
             high = mid-1;
         }else{
             low = mid+1;
         }
        }
        return ans; 
        }


        
    vector<int> searchRange(vector<int>& arr, int target) {
       int n = arr.size();
       int lb = lowerBound(arr,target);
       if(lb == n || arr[lb] != target ) return {-1 , -1};
       return {lb , upperBound(arr, target) -1};
    }
};

/*// class Solution {
// public:
//     vector<int> searchRange(vector<int>& arr, int target) {
//         int n = arr.size();
//         int low = 0;
//         int high = n-1;
//         int first = -1;
//         while(low <= high){
//             int mid = (low+high)/2;
//             if(arr[mid] == target){
//                 first = mid;
//                 high = mid-1;
//             }else if (arr[mid] < target){
//                 low = mid+1;
//             }else{
//                 high = mid-1;
//             }
//         }

//          low = 0;
//          high = n-1;
//          int last = -1;
//          while(low <= high){
//             int mid = (low+high)/2;
//             if(arr[mid] == target){
//                 last = mid;
//                 low = mid+1;
//             } else if(arr[mid] < target) {
//                 low = mid+1;
//             }else{
//                 high = mid-1;
//             }
//          }
//          return {first , last};
//     }
// };
*/
