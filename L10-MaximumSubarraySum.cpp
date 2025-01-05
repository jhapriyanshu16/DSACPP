//Maximum Subarray Sum

//Brute force
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,-1,2,3};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int maxSum = INT_MIN;
//     for (int i = 0 ; i < size ; i++){
//         for (int j = i ; j < size ; j++){
//             int sum = 0;
//             for(int k = i ; k <= j ; k++){
//                 sum += arr[k];
//             }
//             maxSum= max(sum,maxSum);
//         }
        
//     }
//     cout<<maxSum;
// }


//Optimized Brute Force
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,-5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int maxSum = INT_MIN;
//     for (int i = 0 ; i < size ; i++){
//         int currsum = 0;
//         for (int j = i ; j < size ; j++){
//             currsum += arr[j];
//             maxSum = max(currsum,maxSum);
//         }
//     }
//     cout<<maxSum;
// }

//https://leetcode.com/problems/maximum-subarray/description/
//Kadane's Algorithm
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,3,4,-5};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int maxSum=INT_MIN;
//     int currSum=0;
//     for (int i =0 ; i < size ; i++){
//         currSum += arr[i];
//         maxSum = max(currSum,maxSum);
//         if (currSum < 0){
//             currSum = 0;
//         }
//     }
//      cout<<maxSum;
// }
