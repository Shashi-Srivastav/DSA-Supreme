vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int> ans;
    for(int i=0;i<arr.size();i++)
    {
       if(i+k>=arr.size()){
           ans.push_back(arr[i+k-arr.size()]);
       } 
       else {

           ans.push_back(arr[i + k]);
       }
    }
    return ans;
}