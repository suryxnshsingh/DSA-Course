#include<iostream>
using namespace std;

void reverse(int arr[], int size ){
    
    int start=arr[0];
    int end = arr[size-1];

    while (start<end){
        swap(start , end);
        start++;
        end--;
    }
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

    reverse(arr,size);

    for (int j ; j<size ; j++){
        cout << arr[j];
    }

}
