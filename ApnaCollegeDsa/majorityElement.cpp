#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr = {1,1,1,1,1,1,2,2};
    int n = arr.size();
    
    sort(arr.begin(), arr.end());

    int count = 1;
    int majorityElement = arr[0]; // Correctly handles 1-element arrays or if arr[0] is the majority
    
    for(int i = 1 ; i < n ; i++){
        
        if(arr[i] == arr[i - 1]){
            count++;
        }
        else{
            count = 1; // Reset count for the new number
        }

        // If the current element we are counting hits the majority threshold
        if(count > n/2){
            majorityElement = arr[i]; 
        }       
    }

    cout << majorityElement;

    return 0;
}