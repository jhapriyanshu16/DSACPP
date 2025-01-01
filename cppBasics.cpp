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
// YT: https://youtu.be/clIcH1ALHMw?si=5aMbUPkNpbEHYgDN
// 1)
// * * * * *
// * * * * *
// * * * * *
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

// 2)
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// 3)
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout<<i+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// 4)
// A B C D
// A B C D
// A B C D
// A B C D
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout<<char(65+j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 5)
// A A A A
// B B B B
// C C C C
// D D D D
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout<<char(65+i)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 6)
// a b c d
// a b c d
// a b c d
// a b c d
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n ; j++){
//             cout<<char(97+j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 7)
// *
// * *
// * * *
// * * * *
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// 8)
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// 9)
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
// }

// 10)
// A
// A B
// A B C
// A B C D
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout<<char(64+j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 11)
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1; i <= n ; i++){
//         for (int j = 1; j <= i ; j++){
//             if (i%2!=0){
//             cout<<j<<" ";
//             }
//             else{
//                 cout<<char(j+64)<<" ";
//             }
//         }
//         cout<<endl;
//     }
// }

// 12)
// * * * *
// * * *
// * *
// *
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 0 ; i < n ; i++){
//         for (int j = 0 ; j < n-i ; j++){
//             cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }

// 13)
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i+1 ; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }

// 14)
// A B C D
// A B C
// A B
// A
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i+1 ; j++){
//             cout<<char(64+j)<<" ";
//         }
//         cout<<endl;
//     }
// }

// 15)
// 4
// 4 3
// 4 3 2
// 4 3 2 1
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             cout<<n-j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// 16)
// 1
// 1 3
// 1 3 5
// 1 3 5 7
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 0 ; j < i ; j++){
//             cout<<2*j+1<<" ";
//         }
//         cout<<endl;
//     }
// }

// 17)
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main(){
//     int n ;
//     cout<<"Enter the value: "<<endl;
//     cin>>n;
//     int count = 1;
//     for( int i=0 ; i < n ; i++){
//         for( int j = 0 ; j < i ; j++){
//             cout<<count++<<" ";
//         }
//         cout<<endl;
//     }
// }

// 18)
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// int main(){
//     int n;
//     cout<<"Enter the value of n ";
//     cin >> n;
//     for(int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= i ; j++){
//             if ((i+j)%2==0) cout<<1<<" ";
//             else cout<<0<<" ";
//         }
//         cout<<endl;  
// }
// }

// 19)
//     *
//     *
// * * * * *
//     *
//     *
// int main(){
//     int n ; 
//     cout<< "Enter the value: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n ; j++){
//             int mid = (n/2)+1;
//             if (i==mid || j==mid){
//                 cout<<"*"<<" ";
//             }
//             else{
//                 cout<<" "<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
// }

// 20)
// * * * * * *
// *         *
// *         *
// * * * * * *
// int main(){
//     int m,n ; 
//     cout<< "Enter the value of rows: "<<endl;
//     cin>>m;
//     cout<< "Enter the value of columns: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= m ; i++){
//         for (int j = 1 ; j <= n ; j++){
//             if((i==1|| i == m) || (j==1 || j == n)) cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
// }

// 21)
// *       *
//   *   *
//     *
//   *   *
// *       *
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n ; j++){
//             if(i==j || (i+j)==n+1) cout<<"*"<<" ";
//             else cout<<" "<<" ";
//         }
//         cout<<endl;
//     }
// }

// 22)
//       *
//     * *
//   * * *
// * * * *
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i ; j++){ // for space
//             cout<<" "<<" ";           
//         }
//         for (int j = 1 ; j <= i ; j++){//for star
//             cout<<"*"<<" ";
//         }
     
//         cout<<endl;
//     }
// }

// 23)
//       * * * *
//     * * * *
//   * * * *
// * * * *
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i ; j++){ // for space
//             cout<<" "<<" ";           
//         }
//         for (int j = 1 ; j <= 4 ; j++){//for star
//             cout<<"*"<<" ";
//         }
     
//         cout<<endl;
//     }
// }

// 24)
//       *
//     * * *
//   * * * * *
// * * * * * * *
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i ; j++){ // for space
//             cout<<" "<<" ";           
//         }
//         for (int j = 1 ; j <= 2*i-1 ;j++){//for star
//             cout<<"*"<<" ";
//         }
     
//         cout<<endl;
//     }
// }

// 25)
//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i ; j++){ // for space
//             cout<<" "<<" ";           
//         }
//         for (int j = 1 ; j <= 2*i-1 ;j++){//for star
//             cout<<j<<" ";
//         }
     
//         cout<<endl;
//     }
// }

// 26)
//       A
//     A B
//   A B C
// A B C D
// int main(){
//     int n ; 
//     cout<< "Enter the value of n: "<<endl;
//     cin>>n;
//     for (int i = 1 ; i <= n ; i++){
//         for (int j = 1 ; j <= n-i ; j++){ // for space
//             cout<<" "<<" ";           
//         }
//         for (int j = 1 ; j <= i ; j++){//for star
//             cout<<char(64+j)<<" ";
//         }
     
//         cout<<endl;
//     }
// }

// 27)
//       1
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

//       1
//     1 2    +    1
//   1 2 3         2 1
// 1 2 3 4         3 2 1

// _ _ _           1
// _ _        +    1 2              +      1           =   
// _               1 2 3                   2 1
//                 1 2 3 4                 3 2 1

//       1
//     1 2 *
//   1 2 3 * *
// 1 2 3 4 * * *

// int main(){
//     int n;
//     cout<<"Enter the value of n: ";
//     cin>>n;
//     for(int i = 0 ; i < n ; i++){
//         int var = i;
//         for(int j = 0 ; j < n-i-1; j++){//spaces
//             cout<<"_"<<" ";
//         }
//         for (int j = 0 ; j <= i; j++){//first triangle pattern
//             cout<<j+1<<" ";
//         }
//         for (int j = 0 ; j <= i-1 ; j++){//second triangle pattern
//             cout<<var<<" ";
//             var--;
//         }
//         cout<<endl;
//     }
// }

// 28)
//       *
//     * * *
//   * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *
// int main(){
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n;
//     for(int i = 1 ; i <= n/2+1 ; i++){//First half
//         for (int j = 1 ; j <= (n/2+1)-i ;j++){//spaces
//                 cout<<" "<<" ";
//         }
//         for (int j = 1 ; j <= 2*i-1 ; j++){//star
//                 cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
//     for(int i = 1 ; i <= n-(n/2+1) ; i++){//second half
//         for (int j = 1 ; j <= i ;j++){//spaces
//                 cout<<" "<<" ";
//         }
//         for (int j = 1 ; j <= n-2*i ; j++){//star
//                 cout<<"*"<<" ";
//         }
//         cout<<endl;
//     }
// }
// Alternative solution:
// int main(){
// int n;
// printf("Enter no. of lines: ");
// scanf("%d", &n);
// int nsp = n/2;
// int nst = 1;
// int ml = n/2+1;
// for(int i=1;i<=n;i++) {
//     for(int j=1;j<=nsp;j++){ // spaces
//         printf("  ");
//     }
//     for(int k=1; k<=nst; k++){ // stars
//         printf("* ");
//     }
//     if(i<ml){
//         nsp--;
//         nst+=2;
//     }
//     else{
//         nsp++;
//         nst-=2;
//     }
//     printf("\n");
// }
// }

// 29)
// * * * * * * * * *
// * * * *   * * * *
// * * *       * * *
// * *           * *
// *               * 
// Here first row is not following any pattern so print it seperately
// int main(){
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n;
//     int nsp = 1;
//     for(int i=1 ; i<=2*n-1; i++){//Printing first row
//         cout<<"*"<<" ";
//     }
//     cout<<endl;
//     for(int i = 1 ; i <= n-1 ; i++){
//         for (int j = 1 ; j <= n-i ;j++){//first half
//                 cout<<"*"<<" ";
//         }
//         for (int j = 1 ; j <= nsp ; j++){//spaces
//                 cout<<" "<<" ";   
//         }
//         for (int j = 1 ; j <= n-i ;j++){//second half
//                 cout<<"*"<<" ";
//         }
//         nsp+=2;
//         cout<<endl;
//     }

// }

// 30)
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4   6 7 8 9
// 1 2 3       7 8 9
// 1 2           8 9
// 1               9
// int main(){
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n;
//     int nsp = 1;
//     for(int i=1 ; i<=2*n-1; i++){//Printing first row
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     for(int i = 1 ; i <= n-1 ; i++){
//         int var = 1;
//         for (int j = 1 ; j <= n-i ;j++){//first half
//                 cout<<var<<" ";
//                 var++;
//         }
//         for (int j = 1 ; j <= nsp ; j++){//spaces
//                 cout<<" "<<" ";  
//                 var++; 
//         }
//         for (int j = 1 ; j <= n-i ;j++){//second half
//                 cout<<var<<" ";
//                 var++;
//         }
//         nsp+=2;
//         cout<<endl;
//     }
// }

// 31)
// 1 2 3 4 3 2 1 
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1
// int main(){
//     int n;
//     cout<<"Enter the value: ";
//     cin>>n;
//     for(int i=1 ; i<=n; i++){//Printing first row
//         cout<<i<<" ";
//     }
//     for(int i=n-1 ; i>=1; i--){//Printing first row
//         cout<<i<<" ";
//     }
//     cout<<endl;
//     int nsp = 1;
//     for(int i = 1 ; i <= n-1 ; i++){
//         int var = n;

//         for (int j = 1 ; j <= n-i ;j++){//first half
//                 cout<<j<<" ";
//         }
//         for (int j = 1 ; j <= i-1 ; j++){//spaces for sec half
//                 cout<<" "<<" ";  
//         }
//         for (int j = 1 ; j <= nsp ; j++){//spaces for sec half
//                 cout<<" "<<" ";  
//                 var--; 
//         }
//       for (int j = 1 ; j <= n-i ;j++){//second half
//                 cout<<var<<" ";
//                 var--;
//         }  
//         nsp++;
//         cout<<endl;
//     }
// }