#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        int value = i;
        for(int j=1; j<=i; j++)
        {
            cout << value;
            value --;
        }
        cout << endl;
    }
}

