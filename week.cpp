#include  <iostream>
using namespace std;
const int week_day = 7;
int main(){
    int days;
    int week;
    int day;
    cout<<"Please enter the days: "<< endl;
    cin>>days;
    week = days / week_day;
    day = days % week_day;
    cout<<days<<" days are equal to "<<week<<" weeks and "<<day<<" days."<<endl;

    return 0;
}