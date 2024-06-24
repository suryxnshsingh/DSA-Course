#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter side length : ";
    cin >> n;
    cout << endl;

    int i=0;
    while(i<n){

        int j=0;
        while(j<n){
            cout << "* ";
            j=j+1;

        }
    cout << endl;
    i=i+1;

    }
}