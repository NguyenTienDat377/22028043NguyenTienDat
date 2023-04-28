#include<iostream>

using namespace std;

bool mirrorInt(int n){
    int n0 = n;
    int n1 = 0;
    while(n0){
        int k = n0 % 10;
        n1 = n1 * 10 + k;
        n0 /= 10;
    }
    if(n1 == n){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int numOfTest;
    cin >> numOfTest;
    for(int i = 1; i <= numOfTest; i++){
        int a,b;
        int count = 0;
        cin >> a >> b;
        for(int j = a; j <= b; j++){
            if(mirrorInt(j) == true){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
