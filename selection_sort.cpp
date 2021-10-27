#include <iostream>
using namespace std;
int findminimumindex(int arr[], int low, int high);
void selection_sort(int arr[], int size);

int main(){
    int i;
    int arr[10] = {20, 30 ,18, 93, 290, 38 , 49 , 2, 29, 33};
    selection_sort(arr, 10);
    for(i = 0; i<=9; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int findminimumindex(int arr[], int low, int high){
    int min, minind;
    int i;

    min = arr[low];
    minind = low;
    for(i = low +1;i <= high; i++){
        if(arr[i]< min){
            min = arr[i];
            minind = i;
        }
    }
    return minind;
}
void selection_sort(int arr[], int size){
    int i, minind;
    for(i = 0; i < size; i ++){
        minind = findminimumindex(arr, i, size - 1);
        swap(arr[i], arr[minind]);
    }
}