#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int N;
    cin >> N;
    int sum_E = 0;
    int sum_O = 0;
    while(N != 0) {
        int last_digit = N%10;
        if(last_digit % 2 == 0)
        {
            sum_E += last_digit;
        }
        else
        {
            sum_O += last_digit;
        }
        N /= 10;
    }
	cout << sum_E << ' ' << sum_O;
}
