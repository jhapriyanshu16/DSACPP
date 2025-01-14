//Pair Sum
//https://leetcode.com/problems/two-sum/description/
//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

//1.Brute Force
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,4,5,6,7,9};
//     int target = 11;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     for (int i = 0 ; i < size ; i++){
//         for (int j = i+1 ; j < size ; j++){
//             if (arr[i]+arr[j]== target){
//             cout<<arr[i]<<" at index "<<i<<" and " <<arr[j]<< " at index "<<j<<endl;
//         }
//         }
//     }
// }

//2.Optimal Solution
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,3,5,6,7,9};
//     int target = 11;
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int start = 0;
//     int end = size-1;
//     int sum = 0;
//     for (int i = 0 ; i < size ; i++){
//         if (arr[start]+arr[end]==target){
//             cout<<arr[start]<<" at index "<<start<<" and " <<arr[end]<< " at index "<<end<<endl;
//             break;
//         }
//         if (arr[start]+arr[end]>target){
//             end--;
//         }
//         if (arr[start]+arr[end]<target){
//             start++;
//         }
        
//     }
// }

//Majority Element
//https://leetcode.com/problems/majority-element/description/
//1.Brute force 
// #include <iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,1,1};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     for (int i = 0 ; i < size ; i++){
//         int count = 0;
//         for (int j = 0 ; j < size ; j++){
//             if (arr[i]==arr[j]){
//                 count++;
//             }
//         }
//         if (count > size/2){
//             cout<< arr[i];
//             break;
//         }

//     }
// }


//2.Optimized Brute Force
// #include <iostream>
// #include <algorithm>  // For sort()
// using namespace std;
// int main(){
//     int arr[] = {1,2,2,1,1};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     sort(arr, arr + size);
//     int count = 1;
//     int ans = arr[0];
//     for (int i = 1 ; i < size ; i++){
//         if (arr[i]==arr[i-1]){
//             count++;
//         }
//         else{
//             count = 1;
//             ans = arr[i];
//         }
//            if (count > size/2){
//             cout<< ans;
            
//         }
//     }
// }

//3.Moore's voting algorithm
#include <iostream>

int main() {
    int arr[] = {3, 3, 4, 2, 4, 4, 2, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);  // Calculate the size of the array

    int candidate = -1;
    int count = 0;

    // Phase 1: Find the candidate
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Phase 2: Optional Verification
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    // Check if the candidate is the majority element
    if (count > n / 2) {
        std::cout << "The majority element is: " << candidate << std::endl;
    } else {
        std::cout << "No majority element found" << std::endl;
    }

    return 0;
}
