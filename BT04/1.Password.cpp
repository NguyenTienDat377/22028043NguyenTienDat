#include <bits/stdc++.h>

using namespace std;

string reverseString(string inputString){
    int n = inputString.size();
    for(int i = 0; i < n/2; i++){
        swap(inputString[i], inputString[n - i - 1]);
    }
    return inputString;
}

int main() {
	int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; i++){
        cin >> s[i];
    }
    for(int i = 0; i < n; i++){
        string compareString = reverseString(s[i]);
        for(int j = i; j < n; j++){
            if(s[j] == compareString){
	    int nAns = s[j].size();
                cout << nAns << ' ';
                cout << s[j][nAns/2];
                return 0;
            }
        }
    }
    return 0;
}
