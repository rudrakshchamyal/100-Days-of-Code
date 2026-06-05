#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> arr = {1,1,1,1,1,2,2,3,1};
    int n = arr.size();

    int frequency = 0, ans = 0;
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

    cout << ans;

    return 0;
}