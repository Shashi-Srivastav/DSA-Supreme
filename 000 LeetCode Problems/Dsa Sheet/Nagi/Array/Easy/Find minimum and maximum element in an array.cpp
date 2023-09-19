
pair<long long, long long> getMinMax(long long a[], int n) {
    long long mini = INT_MAX;
    long long maxi = INT_MIN;
    for(int i = 0;i<n;i++){
        if(a[i] > maxi){
            maxi = a[i];
        }
        if(a[i]<mini){
            mini = a[i];
        }
    }
return std::make_pair(mini, maxi);
}