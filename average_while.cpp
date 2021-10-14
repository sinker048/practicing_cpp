#include <iostream>
using namespace std;

int main(){
    int sum_grade;
    int grade;
    int counter;
    double average;
    cout<<"Please enter grades stopped by (-1)"<<endl;
    while(true){
        cin>>grade;
        if (grade!=-1){
            counter ++;
            sum_grade += grade;
        }
        else{
            break;
        }
    }
    average = (double)sum_grade / (double)counter;
    cout<<"The average of grades are "<<average<<endl;
    return 0;
}