#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream outfile;
    outfile.open("outfile.txt");
    outfile << "Hello world."<<endl;
    return 0;
}