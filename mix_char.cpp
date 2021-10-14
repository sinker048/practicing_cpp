#include <iostream>
using namespace std;
int main(){
    char lowercase, uppercase;
    int offset;
    cout<<"Please enter the lower letter:"<<endl;
    cin>>lowercase;
    offset = (int)(lowercase - 'a');
    uppercase = (char)('A' + offset);
    cout<<"The lower letter "<<lowercase<<" is "<<uppercase<<endl;

    return 0;
}