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
        // Print N
        int k = 0;
        int print = i+1;
        while(k<=i)
        {
            cout << print;
            print++;
            k++;
        }
        cout << endl;
        i++;
    }
}


