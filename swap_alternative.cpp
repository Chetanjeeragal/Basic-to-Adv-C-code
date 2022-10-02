#include <iostream>
using namespace std;

void swapAlternate(int a[],int n){
    
    int start = 0;
    
    while(start < n){
        // int end = start + 1;
        swap(a[start], a[start+1]);
        start+=2;
    }
}

void printarray(int a[], int n){
    for(int i= 0; i<n; i++){
        cout << a[i]<< " ";
    }cout << endl;
}

int main() {
	
	int n;
	cin >> n;
	
	int a[100];
	for(int i = 0; i < n; i++){
	    cin >> a[i];
	}
	swapAlternate(a,n);
	printarray(a,n);
	
}
