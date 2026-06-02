#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {1 ,2 ,3,-5 ,4 ,5 ,-12};
    int n = vec.size();

    int maxSum = vec[0];
    int currSum = 0;

    for( int i = 0 ; i < n ; i++){
        currSum +=vec[i];
        maxSum = max( maxSum, currSum);
    }

    if(currSum < 0){
        currSum = 0;
    }

    cout << maxSum;

    return 0;
}