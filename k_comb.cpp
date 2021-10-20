#include <iostream>
using namespace std;
int factorial(int num);
int kcombinationsn(int n, int k);
int main(){
    int n , k , n_k, nfact, kfact, n_kfact, k_comb;
    cout<<"Please enter  integers n and k"<<endl;
    cin>>n>>k;
    k_comb = kcombinationsn(n, k);
    cout<<n<<" combination "<<k<<" is "<<k_comb<<endl;
    return 0;
}

int factorial(int num){
    int factres, i ;
    factres = 1;
    for(i = 1;i<= num; i++){
        factres *= i;
    }
    return factres;
}

int kcombinationsn(int n, int k){
    int kfact, nfact, n_kfact,k_comb;
    kfact = factorial(k);
    nfact = factorial(n);
    n_kfact = factorial(n-k);
    k_comb = nfact/(n_kfact * kfact);
    return k_comb;
}