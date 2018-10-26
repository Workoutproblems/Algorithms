#include <iostream>
#include <vector>
using namespace std;
void insertionSort(int array[], int length){

    for (int i = 1; i < length; i++) {
        
        int j = i;
        while(j > 0 && array[j - 1] > array[j]){
            swap(array[j-1], array[j]);
            j--;
        }
    }
}

int main() {
    
    int arr[] = {4,3,7,1,9};
    
    insertionSort(arr, 5);
    
    for(auto i: arr)
        cout << i;
    cout << endl;
    
    return 0;
}
