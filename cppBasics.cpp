#include <iostream>
using namespace std;



// int main(){
//     cout<<5/2<<endl;  //2
//     cout<<5.0/2<<endl;  //2.5
//     cout<<5/2.0<<endl;   //2.5
//     cout<<5.0/2.0<<endl; //2.5

// }



// int main(){
//     int a;
//     cout<< "Enter any number to check whether it is 1 or 2";
//     cin>>a;
//     switch(a){
//         case 1 : cout<<"The number is 1";
//         break;
//         case 2 : cout<<"The number is 2";
//         break;
//         default : cout<<"The number is neither 1 nor 2";
    
//     }
// }


//LOOPS
//Printing A.P
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin >> n ; 
//     for (int i = 1; i <= n; i=i+2){
//         cout<<i<<" ";
//     }
// }
//Printing G.P
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin >> n ; 
//     int r=1;
//     for (int i = 1; i <= n; i++){
//         cout<<r<<" ";
//         r = r*2;
//     }
// }
//printing highest factor of a number 'n' other than n itself
// int main(){
//     int n;
//     cout<<"Enter the value of n : ";
//     cin >> n ; 
//     int highestFactor=1;
//     for (int i = 2; i < n; i++){
//         if (n%i == 0){
//             highestFactor = i ;
//         }
//     }
//     if (highestFactor != 1){
//     cout<<"The highest factor of "<< n <<" is "<< highestFactor;
//     }
//     else {
//         cout<< n << " is a prime number";
//     }
// }
//Checking number is composite or not
// int main(){
//     int num;
//     cout<< "Enter a number : ";
//     cin>> num;
//     bool isComposite= false;
// for (int i = 2 ; i < num ; i++){
//     if (num % i == 0){
//         isComposite = true;
//     }
// }
// if (isComposite){
//     cout<< "Yes the number "<< num << " is a composite number";
// }
// else{
//     cout<< "This is not a composite number";
// }
// }
//count digits in a given number
// int main(){
//     int num;
//     cout<<"Enter the number";
//     cin>>num;
//     int count = 0 ;
//     for (int i = 0 ; i <= 50 ; i++){
//         count++;
//         num = num/10;
//         if (num==0){
//             break;
//         }
//     }
//     cout<<count;
// }
// int main(){
//     int num ;
//     cout<<"Enter a number : ";
//     cin>>num;
//     int newnum=0;
//     while(num != 0){
//         int lastDigit = num%10;
//         newnum = newnum*10;
//         newnum = newnum + lastDigit;
//         num = num/10;
        
//     }
//     cout<<newnum;
// }

//Pattern Printing
// int main(){
//     int row , col ; 
//     cout<< "Enter the value of rows ";
//     cin >> row ;
//     cout<<"Enter the value of columns ";
//     cin >> col;
//     for(int i = 0 ; i < row ; i++){
//         for (int j = 0 ; j < col ; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
//with letters
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout<<char(97+j)<<" ";
        }
        cout<<endl;
    }
}
//other patterns
int main(){
    int n;
    cout<<"Enter the value of n ";
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        for (int j = 0 ; j < n ; j++){
            cout<<char(97+j)<<" ";
        }
        cout<<endl;
    }
}