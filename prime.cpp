#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the number : ";
    cin >> n ;

    int Prime=1;

    for (int i=2 ; i<n ; i++){
        if(n%i==0){ 
            Prime =0;
            break;
            
        }
    }

    if(Prime==1){
        cout << n << " is Prime" << endl;
    }

    else{
        cout << "Not Prime" << endl;
    }
}