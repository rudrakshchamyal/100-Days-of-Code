#include<iostream>
#include<cmath>
using namespace std;

int binToDec( int num){
    
    int temp = num;
    int i = 0;
    int decNum = 0;

    while(temp != 0){

        int n = temp % 10;
        temp /= 10;
        decNum += n * pow(2, i);
        i++;

    }

    return decNum;
}

int main(){

    int binaryNumber;
    cout << "Enter a Binary Number = ";
    cin >> binaryNumber;
    cout << "Your Decimal Number = " << binToDec(binaryNumber);

return 0;
}