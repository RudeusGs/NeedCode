class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool check = true;
        int n = arr.size();
        if(n < 3) return false;
        int top = -1;
        int i = 0;
        while(i + 1 < n){
            if(arr[i] == arr[i+1]){
                check = false;
                break;
            }
            else if(arr[i] < arr[i+1]){
                top = i + 1;
            }
            else{
                if(top == -1){
                    check = false;
                    break;
                }
                for(int j = top; j + 1 < n; j++){
                    if(arr[j] <= arr[j+1]){
                        check = false;
                        break;
                    }
                }
                break;
            }
            i++;
        }
         if(top <= 0 || top >= n - 1) check = false;
     return check;
    }
};
