#include <iostream>
using namespace std;

int main(){
    int n;
    int counter = 1;
    cout<<"Please enter an integer:"<<endl;
    cin>>n;
    while(counter <= n){
        cout<<counter<<endl;
        counter += 1;
    }
    return 0;
}