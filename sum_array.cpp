
#include<iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of the array : ";
    cin>> size;
    cout << endl;

    int arr[size];
    cout << "Enter the elements of the array, separated by space : ";
    
    for (int i=0; i<size;i++){

        cin >> arr[i];
        
    }
    cout << endl;

    int sum = 0;

    for (int i=0; i<size;i++){

        sum = sum + arr[i];

        
    }

    cout << "The sum is : " << sum << endl;

    cout << endl;
 }
