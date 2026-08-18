// Parameters - sum of 2 number

#include<iostream>
using namespace std;
int sum(int a,int b){
    int s= a+b;
    return s;
}
int main(){
    cout<<sum(10,5)<<endl;
    return 0;
}


#include<iostream>
using namespace std;
double sum(double a,double b){
    double s= a+b;
    return s;
}

// min of 2 numbers
int minOfTwo(int a, int b){ //parameters
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<"min="<<minOfTwo(7,8)<<endl; //arguments
    return 0;
}