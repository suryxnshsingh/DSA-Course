#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter side length : ";
    cin >> n;

    int i=1;
    int num=1;
    while(i<=n){
        
        int j=1;
        while(j<=n-i){
            cout << "  ";
            j++;
        }
        
        int k= 1;
        while(k<=i){
            cout << k << " ";
            k++;
        }

        int l=1;
        while(l<=i-1){
            cout << i-l <<" ";
            l++;
        }
        
        cout << endl;
        i++;
    }
}