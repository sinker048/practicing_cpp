#include <iostream>
using namespace std;
int main(){
    char userinput;
    cout<<"Please enter a character: "<<endl;
    cin>> userinput;

    if (userinput >= 'a' && userinput<= 'z'){
        cout<<userinput<<" is a lower case letter."<<endl;
    }
    else if(userinput >= '0' && userinput <= '9'){
        cout<<userinput<<" is a digit"<<endl;
    }
    else if(userinput>='A' && userinput<='Z'){
        cout<<userinput<<" is a upper case letter"<<endl;
    }
    else{
        cout<<" is not a alpha-numeric character"<<endl;
    }
    return 0;
}
