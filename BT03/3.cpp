#include<iostream>
#include<string>

using namespace std;

int main(){
    string s;
    getline(cin,s);
    long n = s.size();
    long i = 0;
    long j = n - 1;
    if(n % 2 == 0){
        while(i != j - 1){
            if(s[i] != s[j]){
                cout << "Khong doi xung\n";
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
    }
    else{
        while(i != j){
            if(s[i] != s[j]){
                cout << "Khong doi xung\n";
                return 0;
            }
            else{
                i++;
                j--;
            }
        }
    }
    cout << "Doi xung\n";
    return 0;
}
