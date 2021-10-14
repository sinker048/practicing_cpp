#include <iostream>
using namespace std;
int main(){
    int n;
    int counter;
    int N;
    int ans;
    cout<<"Please enter a positive digit:"<<endl;
    cin>>n;
    counter = 1;
    ans = 0;
    N = n;
    while (n >= 10){
        ans += n % 10;
        counter += 1;
        n = n / 10;
    }
    ans += n;
    cout<<N<<" is "<<counter<<" digits, and sum of digits are "<<ans<<endl;
    return 0;
}