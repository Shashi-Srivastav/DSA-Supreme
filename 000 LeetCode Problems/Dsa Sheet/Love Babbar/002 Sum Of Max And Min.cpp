#include <bits/stdc++.h> 
int sumOfMaxMin(int arr[], int n){
	int mini = arr[0];
	int maxi = arr[n-1];
	int sum = 0;
	for(int i = 0;i<n;i++){
		if(arr[i] < mini){
			mini = arr[i];
		}
		else if(arr[i] > maxi){
			maxi = arr[i];
		}
	}
	return sum = maxi + mini;
}