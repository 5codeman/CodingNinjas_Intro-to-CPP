#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i=0; i<N; i++)
    {
        // For SPACE
        for(int j=0; j<N-i-1; j++)
        {
            cout << ' ';
        }
        
        // For Left Half
        for(int k=0; k<=i; k++)
        {
            cout << '*';
        }
        
        // For Right Half
        for(int l=0; l<i; l++)
        {
            cout << '*';
        }
        cout << endl;
    }

}
