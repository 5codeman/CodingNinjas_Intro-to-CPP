#include<iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int i = 0;
    int sum = 0;
    while(i<=N)
    {
        sum += i;
        i += 2;
    }
    cout << sum;
}