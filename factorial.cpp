#include <iostream>
using namespace std;

double eApprox (int n){
      double sum = 1.0;  
      double factorial = 1;
    for (int i=1; i<=n;i++ ){
        factorial = factorial * i;
        sum = sum + 1/factorial;
    }
    return sum;
}
int main(){
    cout.precision(30);

    for(int i=1; i<=25; i++){
        cout<<"i= "<<i<<"\t"<<eApprox(i)<<endl;
    }
    return 0;
}
