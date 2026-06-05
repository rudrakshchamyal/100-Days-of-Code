#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arr={1,1,2,2,1};
    int n = arr.size();

    int vote = 1;
    int majorityElement = arr[0];

    for(int i = 1 ; i < n ; i++){

        if(arr[i-1] == arr[i]){
            vote++;
        }

        else{
            vote--;
        }

        if(vote > 0){
            majorityElement = arr[i];
        }

    }

    cout << majorityElement;
    return 0;
}
