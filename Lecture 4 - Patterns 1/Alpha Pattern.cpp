#include<iostream>
using namespace std;
int main(){
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        char value = 'A'+i;
        for(int j=0; j<=i; j++)
        {
            cout << value;
        }
        cout << endl;
    }
}

