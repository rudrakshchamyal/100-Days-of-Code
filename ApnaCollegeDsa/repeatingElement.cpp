#include<iostream>
using namespace std;

int main(){
    
    int arr[] = {1, 2, 3, 4, 2, 5, 5};
    int SIZE = sizeof(arr)/sizeof(int);

    bool isFound = false;

    int k = 0;
    for( int i = 0 ; i < SIZE ; i++){
        for( int j = 0 ; j < SIZE ; j++){
            if( i != j && arr[i] == arr[j]){
                isFound = true;
                k = i;
                
            }
        }
    }

    if(isFound){
        cout << "Repeating Number = " << arr[k];
    }

    else{
        cout << "No Repeating Number!";
    }
    

    return 0;
} 