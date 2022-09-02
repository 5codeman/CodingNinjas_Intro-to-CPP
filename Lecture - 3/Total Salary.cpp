#include<iostream>
#include<cmath>
using namespace std;

int main() {
	// Write your code here
    int Total_sal;
    int BP;
    char grade;
    cin >> BP;
    cin >> grade;
    
    float hra = BP * 0.2;
    float da = BP * 0.5;
    int allow;
    if(grade == 'A')
    {
        allow = 1700;
    }
    else if(grade == 'B')
    {
        allow = 1500;
    }
    else
    {
        allow = 1300;
    }
    float pf = BP * 0.11;
    
	Total_sal = round(BP + hra + da + allow - pf);
    cout << Total_sal;
}
