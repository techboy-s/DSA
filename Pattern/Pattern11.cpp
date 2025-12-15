#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 1; i <= number;i++){
        for(int j = i; j < i;j++){
            cout << " " << "*" << endl;
        }
    }
}


int main(){
    int number;
    cin >> number;
    Pattern(number);
    return 0;
}