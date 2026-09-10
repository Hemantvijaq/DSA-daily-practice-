class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {
      int n =arr.size();
      int repeated = -1;
      int missing = -1;
      for(int i =1;i<=n*n;i++){
        int cnt = 0;
        for(int j=0;j<n*n;j++){
            
            int row = j / n;
            int col = j % n;
            if(arr[row][col] == i){
                cnt++;
            }
        }
        if(cnt == 2) repeated = i;
            else if(cnt == 0 ) missing = i;
            if(repeated != -1 && missing != -1){
                break;
            }

      }  
      return {repeated,missing};
    }
};