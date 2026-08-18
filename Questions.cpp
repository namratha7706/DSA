// Calculate sum of numbers from 1 to N

#include<iostream>
using namespace std;
int sumN(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
    return sum;
}
int main(){
    cout << sumN(7)<<endl;
    return 0;
}

// Calculate N factorial

#include<iostream>
using namespace std;
int factorialN(int n){
    int fact = 1;         //initialion
    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;

}
int main(){
    cout<<factorialN(7)<<endl;
    cout<<factorialN(10)<<endl;
    return 0;
}

// Calculate sum of digits of a number

#include<iostream>
using namespace  std;

int sumOfDigits(int num){
    int digSum = 0;
    while(num>0){
        int lastDig=num % 10;   // % means remainder to remove the last digit
        num/= 10;
        digSum += lastDig;
    }
    return digSum;
}
int main(){
    cout<<"sum = "<<sumOfDigits(4567)<<endl;
    return 0;
}

// Calculate nCr binomial coefficient for n & r

#include<iostream>
using namespace std;
int factorial(int n){
    int fact = 1;

    for(int i=1; i<=n; i++){
        fact *= i;
    }
    return fact;
}

int nCr (int n, int r){
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nminusr=factorial(n-r);
    
    return fact_n/(fact_r*fact_nminusr);
}

int main (){
    int n=8,r=2;
    cout<<nCr(n,r)<<endl;
    return 0;
}
