class Solution {
public:

    int lowerBound(vector<int>&arr, int x){
        int start = 0;
        int end = arr.size()-1;
        int ans = end;
        while(start<=end){
            int mid = (start+end)/2;
            if(arr[mid]>=x){
                ans = mid;
                end = mid-1;
            }
            else if(x>arr[mid]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;
    }

    vector<int> bsSearchMthd(vector<int>&arr,int k, int x){
        //lower bound
        int h = lowerBound(arr,x);
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
            }
            else if(h>= arr.size()){
                l--;
            }
            else if(x-arr[l]>arr[h] - x){
                h++;
            }
            else{
                l--;
            }
        }
        return vector<int>(arr,begin()+l+1,arr.begin()+h);
    }


    // vector<int> twoPointerApp(vector<int>arr,int k, int x){
    //     int l = 0;
    //     int h = arr.size()-1;
    //     while(h-l>=k){
    //         if(x-arr[l] > arr[h] - x){
    //             l++;
    //         }
    //         else{
    //             h--;
    //         }
    //     }
    //     vector<int>ans;
    //     for(int i = l;i<=h;i++){
    //         ans.push_back(arr[i]);
    //     }
    //     return ans;
    // }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // return twoPointerApp(arr,k,x);

        //Method 2 -----------

        return bsSearchMthd(arr,k,x);

    }
};