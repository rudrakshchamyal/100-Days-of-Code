#include<iostream>
using namespace std;

int main(){

    int arr[] = {1, 2, -3, 4, 5};
    int Size = sizeof(arr)/sizeof(int);
    int maxSum = arr[0];

    for( int i = 0 ; i < Size ; i++){
         int currSum = 0;
        for(int j = i ; j < Size ; j++){
            
            currSum += arr[j];
            maxSum = max( currSum, maxSum);    
        }       
    }
    
    cout << maxSum;

    return 0;
}