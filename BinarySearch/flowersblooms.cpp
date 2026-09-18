class Solution {
public:
    bool ifpossible(vector<int> & arr ,int day , int m , int k){
       int n = arr.size();
       int cnt = 0;
       int banq = 0;
       for(int i=0;i<n;i++ ){
        if(arr[i] <= day){
            cnt++;
        }else{
            banq += (cnt/k);
            cnt =0;
        }

       } 
       banq  += (cnt/k);
       return banq >= m;
    }
    int minDays(vector<int>& arr, int m, int k) {
       int n = arr.size();
       long long total = 1LL * m*k;
       if(total > n) return -1;
       int mini = INT_MAX;
       int maxi =INT_MIN;
       for(int i=0;i<n;i++){
        mini = min(mini ,arr[i]);
        maxi = max(maxi , arr[i]);
       }
       int low = mini ;
       int high = maxi;
       while(low <= high){
        long long  mid = (low+high)/2;
        if(ifpossible(arr ,mid,m ,k)){
            
            high = mid-1;
        }else{
            low = mid+1;
        }
       }
         return low;

    }
};