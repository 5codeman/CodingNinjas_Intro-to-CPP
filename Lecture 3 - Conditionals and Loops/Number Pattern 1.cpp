#include<iostream>
using namespace std;
int main(){
    int Rows;
    cin >> Rows;
    int i = 0;
    while(i<Rows)
    {
        int print = i+1;
        int k = 0;
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
