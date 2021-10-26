#include <iostream>
using namespace std;

void printasd(int start, int end){
    if (start == end){
        cout<<start<<endl;
    }
    else{        
        cout<<start<<endl;
        printasd(start +1 , end);
    }
}
int main(){
    int start,end;
    cout<<"Please enter start value & end value(sperated by a space)"<<endl;
    cin>>start>>end;
    printasd(start, end);
    return 0;
}