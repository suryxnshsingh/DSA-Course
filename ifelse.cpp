#include<iostream>
using namespace std;

int main()
{
     int a;
     cout<< "enter any number : ";
     cin >> a;
    
    if(a>0) {
        cout << "is a positive number \n";
    }
    else if(a<0) {
        cout << "is a negative number \n";
    }
    else{
        cout << "it is 0 \n";
    }
}