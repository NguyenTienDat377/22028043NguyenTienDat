#include<iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    cout << n << ' ';
    while(n > 0){
        int n0 = n;
        cin >> n;
        if(n0 == n){
            continue;
        }
        else{
            cout << n << ' ';
        }
    }
    return 0;
}
