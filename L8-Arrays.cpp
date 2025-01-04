// Finding smallest and largest in Array
// #include <iostream>
// using namespace std;
// int main(){
// int arr[]= {5,15,22,1,-15,24};
// int size = sizeof(arr)/sizeof(arr[0]);
// int max = arr[0];
// int min = arr[0];
// for(int i = 0 ; i < size ; i++){
//     if(arr[i]>max){
//         max = arr[i];
//     }
//     if (arr[i]<min){
//         min = arr[i];
//     }
// }
// cout<<"Minimum: "<<min<<endl;
// cout<<"Maximum: "<<max;
// }

// Linear search
// #include <iostream>
// using namespace std;
// int main(){
// int arr[]= {5,15,22,1,15,24};
// int size = sizeof(arr)/sizeof(arr[0]);
// int target = 1;
// int position;
// for(int i = 0 ; i < size ; i++){
//     if(arr[i]== target){
//         position = i;
//     }
// }
// cout<<target<<" is at "<<position <<" index in the array"<<endl;
// }

//Reversing array two pointer approach
// #include <iostream>
// using namespace std;
// int main(){
// int arr[]= {5,15,22,1,15,24};
// int size = sizeof(arr)/sizeof(arr[0]);
// int start = 0;
// int end = size-1;
// for(int i = 0 ; i < size/2 ; i++){
//     swap(arr[start],arr[end]);
//     start++;
//     end--;
// }
// cout<<"Reversed Array";
// for(int i = 0 ; i < size ; i++){
//     cout<<arr[i]<<" ";
// }
// }

//Program to print all the unique values in an array
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[]= {1,2,3,3,4,5,1,5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     cout<<"List of unique elements"<<endl;
//     for (int i = 0 ; i < size ; i++){
//         int count = 0;
//         for (int j = 0 ; j < size ; j++){
//             if (arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if (count == 1){
//             cout<<"* "<< arr[i] << endl;
//         }
//     }
// }

//print intersection of 2 arrays
// #include <iostream>
// using namespace std;
// int main(){
//     int arr1[]= {1,2,3,4,5};
//     int arr2[]= {4,5,6,7,8};
//     int size1 = sizeof(arr1)/sizeof(arr1[0]);
//     int size2 = sizeof(arr2)/sizeof(arr2[0]);
//     cout<<"List of Common elements in both arrays: "<<endl;
//     for (int i = 0 ; i < size1 ; i++){
//         for (int j = 0 ; j < size2 ; j++){
//             if (arr1[i]==arr2[j]){
//                 cout<<"* " <<arr1[i]<<endl;
//             }
//         }
//     }
// }
