#include <iostream>
using namespace std;

void printasdanddec(int start, int end){
    if (start == end){
        cout<<start<<endl;
    }
    else{
        cout<<start<<endl;
        printasdanddec(start + 1, end);
        cout<<start<<endl;
    }
}
int main(){
    int start,end;
    cout<<"Please enter start value & end value(sperated by a space)"<<endl;
    cin>>start>>end;
    printasdanddec(start, end);
    return 0;
}