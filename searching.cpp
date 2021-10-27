#include <iostream>
using namespace std;
int searching(int arr[],int len, int number);
int main(){
    int arr[4] = {12,131,14,15};
    int ind;
    int value;
    value = 14;
    ind = searching(arr, 4 , value);
    if(ind != -1){
        cout<<"The value of "<<value<<" are in the index "<<ind<<" of the array"<<endl;
    }
    else{
        cout<<"The value of "<<value<<" does not excite in the array"<<endl;
    }
    return 0;
}
int searching(int arr[], int len, int number){
    int i = 0;
    while(i<len){
        if(arr[i] == number){
            return i;
        }
        i++;
    }
    return -1;
}