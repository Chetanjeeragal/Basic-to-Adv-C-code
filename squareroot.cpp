#include <iostream>
using namespace std;

long long int squareInt(int n){
    int s = 0, e = n;
    long long int mid = s + (e-s)/2;
    long long int ans = -1;
    while(s <= e){
        long long int square = mid * mid;
        if(square == n){
            ans = mid;
        }
        if(square < n){
            s = mid + 1;
        }
        else {
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
    
}

double precise(int n, int precission, int temp){
    double factorial = 1;
    double ans = temp;
    for(int i = 0; i < precission; i++){
        factorial = factorial/10;
        for(double j = temp; j*j < n; j= j + factorial){
            ans = j;
        }
    }
    return ans;
}

int main() {
	int n;
	cout << "Enter the number: "<< endl;
	cin >> n;
	int p;
	cout << " Enter the precission: "<< endl;
	cin >> p;
	int temp = squareInt(n);
	cout << precise(n,p,temp)<< endl;
}
