#include <bits/stdc++.h> 
pair < int , int > findSimilarity(vector < int > arr1, vector < int > arr2, int n, int m) 
{
	int counter = 0;
	for(int i = 0;i<n;i++){
		for(int j = 0;j<m;j++){
			if(arr1[i] == arr2[j]){
				counter++;
			}
		}
	}
	pair<int,int>p(counter,m+n-counter); 
	return p;
}