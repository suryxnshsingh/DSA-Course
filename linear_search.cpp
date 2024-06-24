
#include<iostream>
using namespace std;


bool found(int arr[], int size, int key){

    for(int i = 0 ; i<size ;i++ ){
        if(arr[i]==key){
            return 1;
        }
    }
    
    return 0;
}
int main() {

    int size;
    cout << "Enter size of array : ";
    cin >> size;
    cout << endl;

    int arr[size];
    cout << "Enter elements of array separated by spaces : ";
    for (int i=0; i<size ; i++){
        cin >> arr[i];
    }
    cout << endl;

    int key;
    cout << "Enter key to be searched : ";
    cin >> key;
    cout << endl;
    int check = found(arr, size, key);

    if(check==1){
        cout << "Key found in array!";
    }

    else{
        cout << "Key not found"<< endl;
    }
}
