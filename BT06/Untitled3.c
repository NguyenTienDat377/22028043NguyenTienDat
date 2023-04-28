#include<bits/stdc++.h>

using namespace std;

void f(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << &arr[i] << ' ';
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        cout << &arr[i] << ' ';
    }
    cout << endl;
    f(arr, n);
    //dia chi in ra o 2 cach nhu nhau
    // suy ra deu truy cap tu 1 vi tri
    return 0;
}
