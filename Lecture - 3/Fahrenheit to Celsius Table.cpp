#include<iostream>
using namespace std;
int main(){
    
    int SF,EF,W;
    cin >> SF >> EF >>W;
    int cel = 0;
    while(SF<=EF)
    {
        cel = (5 * SF - 160)/9;
        cout <<SF << " " << cel << endl;
        SF += W;
    }
}

