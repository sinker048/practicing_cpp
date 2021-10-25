#include <iostream>
using namespace std;


void resizearray(int *& arr, int currentsize, int newsize){
    int *temp = new int[newsize];
    for(int i = 0; i < currentsize; i++){
        temp[i] = arr[i];
    }
    delete[] arr;
    arr = temp;
}
int main(){
    int size = 10;
    int * arr = new int[size];
    for(int i = 0; i < size; i++){
        arr[i] = i * 10;
    }
    int onemore = 110;
    int newsize = size * 2;
    resizearray(arr, size, newsize);
    size = newsize;
    arr[size++] = onemore;
}