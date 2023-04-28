#include<bits/stdc++.h>

using namespace std;

string balancedSums(vector<int> arr) {
    long n = arr.size();
    for(int i = 0; i < n; i++){
        long arrLeft = 0, arrRight = 0;
        for(long j = 0; j < i; j++){
            arrLeft += arr[j];
        }
        for(long j = i + 1; j < n; j++){
            arrRight += arr[j];
        }
        if(arrLeft == arrRight){
            return "YES";
        }
    }
    return "NO";
}

int main(){
    //De chuong trinh daydu thi em viet them main
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    cout << balancedSums(arr);
    return 0;
}
