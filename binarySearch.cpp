//  
//  #include<iostream>
//  using namespace std;
//  
//  int binarySearch(int arr[],int size,int key){
//  	int s = 0;
//  	int e = size-1;
//  	int mid = s + (e-s)/2;
//  	while(s<=e){
//  		if(arr[mid]==key){
//  			return mid;
//		  }
//	if(key>arr[mid]){
//		s=mid+1;
//	}
//	else{
////	(key<arr[mid]){
//		e=mid-1;
//	}
//	int mid = s + (e-s)/2;	
//}
//	  return -1;
//  }
//  
//  int main(){
//  	
//  	int even[4]={0,3,2,7};
//  	
//  	int value = binarySearch(even,4,2);
//  	
//  	cout<<" index is : "<<value<<endl;
//  	
//  	return 0;
//  }

//   #include<iostream>  // first and last occu
//using namespace std;
//
//int firstOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == 0 || arr[mid - 1] != key)
//                break;
//            e = mid - 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int lastOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == n - 1 || arr[mid + 1] != key)
//                break;
//            s = mid + 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int main(){
//    int even[6] = {3, 4, 5, 5, 5, 9};
//    cout << "First Occurrence at index: " << firstOcc(even, 6, 5) << endl;
//    cout << "Last Occurrence at index: " << lastOcc(even, 6, 5) << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int firstOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == 0 || arr[mid - 1] != key)
//                break;
//            e = mid - 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int lastOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == n - 1 || arr[mid + 1] != key)
//                break;
//            s = mid + 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//// void printTotalocc(int arr[],int n,int key){
//// 	
//// }
//
//int main(){
//    int even[6] = {3, 4, 5, 5, 5, 9};
//    int value1= firstOcc(even, 6, 5);
//    int value2=lastOcc(even, 6, 5);
//    cout << "First Occurrence at index: " << value1<< endl;
//    cout << "Last Occurrence at index: " << value2 << endl;
//    int Totalocc= (value2-value1)+1;
//     cout << " Total no of  Occurrence : " << Totalocc<< endl;
//    return 0;
//}

//  #include<iostream>
//  using namespace std;
//  int peackelement(int arr[],int size){
//  	int s=0;
//  	int e=size-1;
//  	int mid = s + (e-s)/2;
//  	while(s<e){
//  		if(arr[mid]<arr[mid+1]){
//  			s=mid+1;
//		  }
//		  else{
//		  	e=mid;
//		  }
//		  mid = s + (e-s)/2;
//	  }
//	  return s;
//  }
//  
//  int main(){
//  	int arr[10]={2,4,5,6,7,8,3,1,0};
//  	cout<<" peak element is : "<<peackelement(arr,10)<<endl;
//  }
  
//  #include<iostream>  // pivot in an array
//  using namespace std;
//  int pivot(int arr[],int n){
//  	int s = 0;
//  	int e = n-1;
//  	int mid = s + (e-s)/2;
//  	while(s<e){
//  		if(arr[mid]>=arr[0]){
//  			s=mid+1;
//		  }
//		  else{
//		  	e=mid-1;
//		  }
//		 mid=s+ (e-s)/2; 
//	  }
//	  return s;
//  	
//  }
//  int main(){
//  	int arr[6]={4,5,6,7,1,2};
//  	
//  	cout<<" pivot in an array at index is : "<<pivot(arr,6);
//  }
//
//  
//#include<iostream>   // search in rotaed sorted array
//#include<vector>
//using namespace std;
//
//// Function to find the pivot index (the smallest element index in the rotated sorted array)
//int getPivot(vector<int>& arr, int n){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    
//    while(s < e){
//        if(arr[mid] >= arr[0]){
//            s = mid + 1; // Pivot must be to the right
//        } else {
//            e = mid; // Pivot must be to the left
//        }
//        mid = s + (e - s) / 2; // Recalculate mid
//    }
//    return s; // Return the pivot index
//}
//
//// Function to find the position of the element k in the rotated sorted array
//int findPosition(vector<int>& arr, int n, int k){
//    int pivot = getPivot(arr, n);
//
//    // If the element is at the pivot
//    if(arr[pivot] == k){
//        return pivot;
//    }
//
//    int s, e;
//    // Split the array based on the pivot
//    if(k >= arr[0]){
//        e = pivot - 1;
//        s = 0;
//    } else {
//        e = n - 1;
//        s = pivot;
//    }
//    
//    int mid = s + (e - s) / 2;
//    
//    while(s <= e){
//        if(arr[mid] == k){
//            return mid; // Element found
//        } else if(arr[mid] > k){
//            e = mid - 1; // Move left
//        } else {
//            s = mid + 1; // Move right
//        }
//        mid = s + (e - s) / 2; // Recalculate mid
//    }
//    return -1; // Element not found
//}
//
//int main() {
//    // Example: rotated sorted array
//    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
//    int n = arr.size();
//    int k = 1; // Element to search for
//
//    // Find the position of k in the rotated sorted array
//    int result = findPosition(arr, n, k);
//
//    if(result != -1) {
//        cout << "Element " << k << " found at index: " << result << endl;
//    } else {
//        cout << "Element " << k << " not found!" << endl;
//    }
//
//    return 0;
//}
#include <iostream>
using namespace std;

// Function to find the integer part of the square root using binary search
long long int findIntegerSquareRoot(long long int n) {
    long long int s = 0;
    long long int e = n;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    
    // Binary search loop to find the integer square root
    while (s <= e) {
        long long int square = mid * mid;
        
        // If mid^2 is equal to n, we've found the square root
        if (square == n) {
            return mid;
        }
        // If mid^2 is less than n, search in the right half
        else if (square < n) {
            s = mid + 1;
            ans = mid;  // Store the potential answer
        }
        // If mid^2 is greater than n, search in the left half
        else {
            e = mid - 1;
        }
        
        // Update mid for the next iteration
        mid = s + (e - s) / 2;
    }
    
    // Return the integer part of the square root
    return ans;
}

// Function to find the square root with the desired precision
double morepre(int n, int pre, int tempSol) {
    double factor = 1;
    double ans = tempSol;

    // Refining the result with precision
    for (int i = 0; i < pre; i++) {
        factor = factor / 10;
        // Increment ans by the factor until ans^2 is close to n
        for (double j = ans; j * j <= n; j += factor) {
            ans = j;
        }
    }

    return ans;
}

int main() {
    long long int n;
    cin >> n;

    // Find the integer part of the square root
    int tempSol = findIntegerSquareRoot(n);

    // Calculate the square root with the desired precision
    cout << "Square root is: " << morepre(n, 3, tempSol) << endl;
    
    return 0;
}






