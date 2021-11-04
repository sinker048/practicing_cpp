#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
void openInputFile(ifstream& inFile){
    string filename;
    cout << "What filename? ";
    cin>>filename;
    inFile.open(filename);
    while (!inFile){
        cout <<"FILE FAILED TO OPEN!"<<endl;
        cout<<"What filename? ";
        cin>> filename;
        inFile.clear();
        inFile.open(filename);
    }
}
int main(){
    ifstream inFile;
    openInputFile(inFile);
    vector<int> v;
    int temp;
    while(inFile >>temp){
        v.push_back(temp);
    }

    double sum;
    for (int item : v){
        sum += item;
    }
    cout <<"The average of the integers in the file is: "<< sum/ v.size()<<endl;
    return 0;
}