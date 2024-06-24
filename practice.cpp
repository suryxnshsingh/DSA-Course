#include<iostream>
using namespace std;

bool found(int arr[] , int size , int key){
    for(int i ; i<size ; i++){
        if (arr[i]==key){
            return 1;
        }
    }
}

int main(){
    cout << "Enter the size of the array ; ";
    int size;
    cin >> size;

    int arr[size];
    cout << "Enter the elements of array separated by spaces : ";
    
    for (int i=0; i<size; i++){
        cin >> arr[i];
    }

    int key; 
    cout << "Enter the key to be found : ";
    cin >> key;
    int check = found(arr , size , key);

    if (check==1){
        cout << "Key FOUND!";
    }

    else{cout << "Key NOT found!";}

    return 0;

}