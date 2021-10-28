#include <iostream>
using namespace std;
void printarray(int arr[], int size);
void mergesort(int arr[], int low, int high);
void merge(int arr[], int lowleft, int highleft, int highright);
int main(){
    int arr[8] = {1, 49, 9, 88, 37, 28, 80, 93};
    int arrsize = 8;
    cout<<"Original array is"<<endl;
    printarray(arr, arrsize);
    mergesort(arr, 0, arrsize -1);
    cout<<"After merge sorting, sorted array is"<<endl;
    printarray(arr, arrsize);
    return 0;
}
void printarray(int arr[], int size){
    int i;
    for(i = 0; i < size; i ++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void mergesort(int arr[], int low, int high){
    int midind;

    if (low == high){
        return;
    }
    else{
        midind = (low + high) / 2;
        mergesort(arr, low, midind);
        mergesort(arr, midind + 1, high);
        merge(arr, low, midind, high);
    }
}

void merge(int arr[], int lowleft, int highleft, int highright){
    int lowright, size;
    int *mergedarr;
    int iright, ileft, ires;
    int i, iarr;

    lowright = highleft + 1;
    size = highright - lowleft + 1;
    mergedarr = new int[size];

    ileft = lowleft;
    iright = lowright;
    ires = 0;
    
    while(ileft <= highleft && iright <= highright){
        if(arr[ileft] < arr[iright]){
            mergedarr[ires] = arr[ileft];
            ileft++;
            ires++;
        }
        else{
            mergedarr[ires] = arr[iright];
            iright++;
            ires++;
        }
    }

    while(ileft <= highleft){
        mergedarr[ires] = arr[ileft];
        ileft++;
        ires++;
    }
    while(iright <= highright){
        mergedarr[ires] = arr[iright];
        iright++;
        ires++;
    }

    for(i = 0, iarr =lowleft;i < size; i++, iarr++){
        arr[iarr] = mergedarr[i]; 
    }
    delete []mergedarr;
}