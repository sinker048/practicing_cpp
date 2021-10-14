#include <iostream>
using namespace std;

int main(){
    int userinput;
    cout<<"Please enter an integer"<<endl;
    cin>>userinput;

    if(userinput < 0){
        userinput *= -1;
    }
    cout<<"The absolute value is "<<userinput<<endl;
    return 0;
}