#include <iostream>
using namespace std;

bool arealleven(int arr[],int n);

int main(){
    int arr[4] = {10, 20 ,30 ,40};
    if(arealleven(arr, 4)){
        cout<<"All integer are even"<<endl;
    }
    else{
        cout<<"Not all integer are even"<<endl;
    }
    return 0;
}
bool arealleven(int arr[],int n){
    if (n == 1){
        return (arr[0] % 2 == 0);
    }
    else{
        bool res;
        res = arealleven(arr, n - 1);
        if(res == true){
            return (arr[n-1] % 2 == 0);
        }
        else{
            return false;
        }
    }
}