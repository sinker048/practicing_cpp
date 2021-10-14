#include <iostream>
using namespace std;
int main(){
    int students;
    int counter;
    int grade;
    int sum_grade;
    double average;
    cout<<"Please enter how many students in class"<<endl;
    cin>>students;
    cout<<"Please enter their grade(sperated by space)"<<endl;
    for(counter = 0; counter<students;counter ++){
        cin>>grade;
        sum_grade += grade;
    }
    average = (double)sum_grade / (double)students;
    cout<<"The average grade is "<<average<<endl;
    return 0;
}