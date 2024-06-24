#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    int i=1;
    while(i<=n){

        int j=1;

        while(j<=n-i+1){

            cout << j<< " ";
            j++;
        }

        int k=1;
        while(k<=i-1){

            cout << "    ";
            k++;
        }

        int l=1;
        while(l<=n-i+1){

            cout << n-l+1 <<" ";
            l++;
        }

    cout << endl;
    i++;


    }
}