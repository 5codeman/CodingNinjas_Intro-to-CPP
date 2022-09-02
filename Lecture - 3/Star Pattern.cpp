#include<iostream>
using namespace std;
int main(){
    int Rows;
    cin >> Rows;
    int i = 0;
    while(i<Rows)
    {
        // Print space
        int j = 0;
        while(j<Rows-i-1)
        {
            cout << " ";
            j++;
        } 
        // Print left side *
        int k = 0;
        while(k<=i)
        {
            cout << '*';
            k++;
        }
        // Print Right side *
        int L = 0;
        while(L<i)
        {
            cout << '*';
            L++;
        }
        cout << endl;
        i++;
    }
}
