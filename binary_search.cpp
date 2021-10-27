#include <iostream>
using namespace std;
int binary_search(int arr[],int size, int val);
int main(){
    int arr[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    cout<<binary_search(arr, 10, 19 )<<endl;
    cout<<binary_search(arr, 10, 2)<<endl;
    return 0;
}
int binary_search(int arr[],int size, int val){
    int low, high, mid, ind;
    bool found = false;
    low = 0; 
    high = size - 1;
    while((found == false) && (low <= high)){
        mid = (low + high) / 2;
        if(arr[mid] == val){
            found = true;
            ind = mid;
        }
        else if(arr[mid]< val){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    if(found){
        return ind;
    }
    else{
        return -1;
    }
}