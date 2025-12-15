#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 0; i < number;i++){
        for(int j = 0; j<= number; j++){
            cout << " " << "*";

        }
        cout << " ";
    }
}

int main(){
    int number;
    cin >> number;
    Pattern(number);
    return 0;
}