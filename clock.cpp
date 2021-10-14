#include <iostream>
#include <string>
using namespace std;
int main(){
    int hour24, miniute24;
    int hour12, miniute12;
    char temp;
    string period;

    cout<<"Please enter a time in 24 hour format:"<<endl;
    cin>>hour24>>temp>>miniute24;
    miniute12 = miniute24;
    if (hour24>=0 && hour24<=11){
        if(hour24==0){
            hour12 = 12;
        }
        else{
            hour12 = hour24;
        }
        period = "am";
    }
    else{
        if(hour24==12){
            hour12 = hour24;
        }
        else{
            hour12 = hour24 - 12;
        }
        period = "pm";
    }
    cout<<hour24<<":"<<miniute24<<" is "<<hour12<<":"<<miniute12<<endl;
    return 0;
}