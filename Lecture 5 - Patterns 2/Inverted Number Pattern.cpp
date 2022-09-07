#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        int value = N-i;
        for(int j=0; j<N-i; j++)
        {
            cout << value;
        }
        cout << endl;
    }

}

