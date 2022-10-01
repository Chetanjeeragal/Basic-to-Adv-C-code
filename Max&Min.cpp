#include<bits/stdc++.h>
using namespace std; 

int getMax(int a[], int n){
    
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        maxi = max(maxi,a[i]);
    }
    return maxi;
}

int getMin(int a[],int n){
    
    int mini = INT_MAX;
    for(int i =0; i <n; i++){
        mini = min(mini, a[i]);
    }
    return mini;
}

int main() {
	int n;
	cin >> n;
	
	int a[1000];
	
	for(int i = 0; i <n;i++){
	    cin >> a[i];
	}
	
	cout << getMax(a,n)<< endl;
	cout << getMin(a,n)<< endl;
}
