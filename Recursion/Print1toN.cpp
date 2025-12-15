#include<iostream>
using namespace std;

int Print1toN(int number){
    if(number == 0){
        return 0;
    }

    Print1toN(number -1);
    cout << number-1 <<" ";
}

int main(){
    int number;
    cin >> number;
    Print1toN(number);
    return 0;
}