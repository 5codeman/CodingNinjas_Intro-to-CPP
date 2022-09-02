#include<iostream>
using namespace std;

int main() {
	// Write your code here
    int X, N;
    cin >> X >> N;
    if(N == 0)
    {
        cout << '1';
        return 0;
    }
    int power = 1;
    for(int i=0; i<N; i++)
    {
        power *= X;
    }
	cout << power;
}
