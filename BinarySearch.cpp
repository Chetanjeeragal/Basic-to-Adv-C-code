#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    
    int mid = low + (high - low)/2;
    
    while(low <= high){
        if(arr[mid] == key){
            return mid;
        }
        if(key > mid){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        
        mid = low + (high - low)/2;
    }
    return -1;
}

int main() {
	int n;
	cin >> n;
	
	int arr[100];
	
	for(int i = 0; i < n; i++){
	    cin >> arr[i];
	}
	int key;
	cin >> key;
	
	int index = binarySearch(arr,n,key);
	cout << index << endl;
}
