#include <iostream>
using namespace std;

bool isEven(int n){
    if(n&1){
        return 0;
    }
    return 1;
}

int main() {
	int n;
	cin >> n;
	
	if(isEven(n)){
	    cout << "Number is Even"<< endl;
	}
	else{
	    cout << "Number is Odd" << endl;
	}
}
