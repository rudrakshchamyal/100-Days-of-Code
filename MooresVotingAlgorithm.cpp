#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,2,2,2,1,1,1};
    int n = arr.size();

    int frequency = 0 , ans = 0;

    for( int i = 0 ; i < n ; i++){

        if(frequency == 0){
            ans = arr[i];
        }

        if(ans == arr[i]){
            frequency++;
        }

        else{
            frequency--;
        }
    }

    int count = 0;
    for( int val : arr){
        if( val == ans){
            count++;
        }
    }

    if( count > n/2){
        cout << ans;
    }

    else{
        cout << -1;
    }
      
    return 0;
}