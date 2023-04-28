#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    int arrTrue[n];
    int arrFalse[n + 1];
    for(int i = 0; i < n; i++){
        cin >> arrTrue[i];
    }
    for(int i = 0; i < n + 1; i++){
        cin >> arrFalse[i];
    }
    sort(arrTrue, arrTrue + n);
    sort(arrFalse, arrFalse + n + 1);
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arrTrue[i] != arrFalse[i]){
            cout << arrFalse[i];
            break;
        }
        else{
            count++;
        }
    }
    if(count == n){
        cout << arrFalse[n];
    }
    return 0;
}
