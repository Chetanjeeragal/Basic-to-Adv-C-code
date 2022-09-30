#include <iostream>
using namespace std;

void CountingNumber(int n){
    
    for(int i = 1; i <= n; i++){
        cout<< i << " ";
    }
}

int main() {
	int n;
	cin >> n;
	
	CountingNumber(n);
}
