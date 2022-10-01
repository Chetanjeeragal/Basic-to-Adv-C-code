#include <iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i = 0; i <n; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    int arr[100];
    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to search:";
    int key;
    cin >> key;
    
    bool found = search(arr, n, key);
    
    if(found){
        cout << "Key is found"<< endl;
    }
    else{
        cout << "Key is not found" << endl;
    }
}
