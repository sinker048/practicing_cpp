#include <iostream>
using namespace std;
int main(){
    int numberofstudent;
    const int Max_student = 60;
    int array[Max_student];
    int sum = 0;
    int i;
    double average;
    int current_grade;
    cout<<"Please enter number of students in the class:(not more than"<<Max_student<<")"<<endl;
    cin>>numberofstudent;
    cout<<"Please enter their grades"<<endl;
    // read the grade
    for(i = 0; i<numberofstudent; i++){
        cin>>current_grade;
        array[i] = current_grade;
    }
    // calculate the average
    for(i = 0; i < numberofstudent;i++){
        sum += array[i];
    } 
    average = (double)sum / (double)numberofstudent;
    cout<<"The average grade is "<<average<<endl;
    // show the grade above the average
    for(i =0 ; i<numberofstudent;i++){
        if(array[i] > average){
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}