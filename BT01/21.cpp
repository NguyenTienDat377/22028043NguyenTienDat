#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    double s = (a + b + c)/2.0;
    double area = 1.0 * sqrt(s * (s - a) * (s - b) * (s - c));
    cout << area << endl;
    return 0;
}


