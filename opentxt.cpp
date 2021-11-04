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

struct Student{
    int id;
    double testScore;
    string name;
};

int main(){
    ifstream inFile;
    openInputFile(inFile);
    vector<Student> vs;
    Student temp;
    while (inFile >> temp.id){
        inFile >> temp.testScore;
        inFile.ignore(9999, '\t');
        getline(inFile, temp.name);
        vs.push_back(temp);
    }
    cout << "Students with test scores over 90: "<<endl;
    for (Student s : vs){
        if(s.testScore > 90){
            cout << s.name <<endl;
        }
    }
}
