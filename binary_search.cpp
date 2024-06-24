#include <iostream>
using namespace std;
 
int binary(int arr[], int size, int key){

    int start = 0;
    int end = size -1 ;
    int mid = start + (end - start)/2;

    while(start <= end){

        if (arr[mid] == key){
            return mid;
        }

        if (arr[mid] < key){
            start = mid + 1;
        }

        else {end = mid - 1;}

        mid = start + (end - start)/2;
    }
    return -1;
}

 int main(){
    
    int even[6] = {2,3,4,7,6,7};
    int odd[5] = {4,9,5,6,7};

    int EvenIndex = binary(even , 6, 2 ) ; 
    int OddIndex = binary(odd , 5, 5) ; 

    cout << "The index is " << EvenIndex << endl;
    cout << "The index is " << OddIndex <<  endl;
 }
