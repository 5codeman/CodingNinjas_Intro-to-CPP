#include <iostream>
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
        int value = i+1;
        for(int k=0; k<=i; k++)
        {
            cout << value;
            value++;
        }
        
        // For Right Half
        int value1 = 2*i;
        for(int l=0; l<i; l++)
        {
            cout << value1;
            value1--;
        }
        cout << endl;
    }
}