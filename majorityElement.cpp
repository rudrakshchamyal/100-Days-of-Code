#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    vector<int> arr = {1};
    int n = arr.size();
    
    sort(arr.begin(), arr.end() );

    int count = 1, majorityElement = arr[0], temp = 0; 
    for( int i = 1 ; i < n ; i++){
        
        if( arr[i] == arr[i - 1] ){
            count++;
        }

        else{
            temp = arr[i];
            count = 1;
        }

        if(count > n/2){
            majorityElement = temp;
        }
                
    }

    cout << majorityElement;

    return 0;
}