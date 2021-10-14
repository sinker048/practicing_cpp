#include <iostream>
using namespace std;

int main(){
    int userinput;
    cout<<"Please enter an positive integer"<<endl;
    cin>>userinput;

    if (userinput % 2 == 0){
        cout<<userinput<<" is even."<<endl;
    }
    else{
        cout<<userinput<<" is odd."<<endl;
    }
    return 0;
}