#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
        
    for(int i=0; i<N; i++)
    {
        // For Space
    	for(int j=0; j<(N-i)-1; j++)
    	{
        	cout << ' ';
    	}
        
        // NOW PRINT VALUE
        int value = 1;
        for(int l=0; l<=i; l++)
        {
            cout<< value;
            value++;
        }
        cout << endl;
    }
}

