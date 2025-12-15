// 1 2 3 4 5 
// 2 3 4 5
// 3 4 5
// 4 5
// 5

#include<iostream>
using namespace std;

void Pattern(int number){
    for(int i = 1; i <= number; i++){
        for(int j = i; j<= number; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

int main(){
    int number;
    cin >> number;
    Pattern(number);
    return 0;
}