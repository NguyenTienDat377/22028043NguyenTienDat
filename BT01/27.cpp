#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main(){
    int count = 0;
    for(int i = 1; i <= 24; i++){
        if(i == 1){
            cout << "12 midnight" << endl;
        }
        if(i > 1 && i < 13){
            cout << i - 1 << "am" << endl;
        }
        if(i == 13){
            cout << "12 noon" << endl;
        }
        if(i > 13){
            cout << i - 13 << "pm" << endl;
        }
    }
    return 0;
}
