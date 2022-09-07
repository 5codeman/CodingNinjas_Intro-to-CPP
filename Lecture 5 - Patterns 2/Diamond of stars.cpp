#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    //For 1st HALF
    int n = (N+1)/2;
    for(int i=1; i<=n; i++)
    {
        // For Space
        for(int j=0; j<n-i; j++)
        {
            cout << ' ';
        }
        
        // Print Stars
        for(int k=1; k<=(2*i)-1; k++)
        {
            cout << '*';
        }
        cout << endl;
    }
    
    //For 2nd HALF
    int n1 = ((N+1)/2)-1;
    for(int i=1; i<=n1; i++)
    {
        // For Space
        for(int j=0; j<i; j++)
        {
            cout << ' ';
        }
        
        // Print Stars
        for(int k=1; k<=N-(2*i); k++)
        {
            cout << '*';
        }
        cout << endl;
    }
}
