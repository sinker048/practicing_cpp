#include <string>
#include <iostream>
using namespace std;

int main(){
    string username;
    int ind;
    cout<<"Please enter your name"<<endl;
    getline(cin, username);
    for( ind = username.length(); ind >= 0; ind--){
        cout<<username[ind];
    }
    cout<<endl;
    return 0;
}