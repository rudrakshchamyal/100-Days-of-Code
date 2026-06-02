#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> vec = {2, 8, 11, 15};
    int target = 10;
    vector<int> p;
    bool found = false;


    for( int i = 0 ; i < vec.size() ; i++){
        for( int j = 0 ; j < vec.size() ; j++){
            if( target == vec[i] + vec[j] ){
                p.push_back(vec[i]);
                p.push_back(vec[j]);
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }

    cout << "(" << p[0] << ", " << p[1] << ")" << endl;


    return 0;
}