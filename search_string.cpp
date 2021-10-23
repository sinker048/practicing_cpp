#include <iostream>
#include <string>
using namespace std;

int main(){
    string str ="abcdedcdaiek";
    cout<<str.find("de")<<endl;
    if(str.find("xyz") == string::npos){
        cout<<"Not Found"<<endl;
    }else{
        cout<<"Found"<<endl;
    }
    cout<<str.find("cd")<<endl;
    cout<<str.find("cd",4)<<endl;
    return 0;
}
