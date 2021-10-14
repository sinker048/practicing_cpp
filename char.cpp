#include <iostream>
using namespace std;

int main(){
    char inputchar;
    int asciivalue;

    cout<<"Please enter a character:"<<endl;
    cin>>inputchar;

    asciivalue = (int)inputchar;
    cout<<"The ASCII value of "<<inputchar<<" is "<<asciivalue<<endl;
    return 0;
}