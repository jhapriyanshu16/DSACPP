//Program to find the sum of digits of a number
// #include <iostream>
// using namespace std;

// int sum_of_digits(int num){
//     int sum = 0 ; 
//     for(int i = 0 ; num > 0 ; i++){
//         int lastDigit = num%10;
//         sum += lastDigit;
//         num = num/10;
//     }
//     return sum;
// }

// int main(){
//     int num;
//     cout<<"Enter the number: "<<endl;
//     cin>>num;
//     cout<<"Sum of digits of "<<num<<" is "<<sum_of_digits(num);
//     return 0;
// }


//Printing nth term of fibonacci series
//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, ..........

#include <iostream>
using namespace std;

int fib(int n){
    if (n==1){
        return 0;
    }
    if (n==2){
        return 1;
    }
    else{
    int firstTerm = 0; //1  //1    //5th - 3baar
    int secTerm = 1;  //1   //2
    int nextTerm = 0;
    for (int i = 0 ; i < n-2 ; i++){
        nextTerm = firstTerm + secTerm;
        firstTerm = secTerm;
        secTerm = nextTerm;
    }
    return nextTerm;
    }
}

int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    cout<<"The number at position "<<n<<" of the fibonacci series is "<<fib(n);
    return 0;
}
