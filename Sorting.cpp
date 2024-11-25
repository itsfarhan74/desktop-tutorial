//
//   #include <iostream> // selection sorting
//using namespace std;
//
//void selectSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        int minIndex = i;
//        for (int j = i + 1; j < n; j++) { 
//            if (arr[j] < arr[minIndex]) {
//                minIndex = j;
//            }
//        }
//        swap(arr[minIndex], arr[i]); 
//    }
//}
//
//int main() {
//    int arr[5] = {6, 5, 2, 3, 4};
//    selectSort(arr, 5);
//
//    cout << "Sorted array is: ";
//    for (int i = 0; i < 5; i++) { 
//        cout << arr[i] << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//  #include<iostream>
//  using namespace std;
//  
//  void selSorting(int arr[],int n){
//  	for(int i=0;i<n-1;i++){
//  		int minIndix=i;
//  		for(int j=i+1;j<n;j++)
//  		 if(arr[minIndix]>arr[j]){
//  		 	minIndix=j;
//		   }
//		   swap(arr[minIndix],arr[i]);
//	  }
//  }
//  
//   int main (){
//   	int arr[10]={7,7,8,3,0,1,6,9,4,5};
//   	
//   	selSorting(arr,10);
//   	
//   	cout<<" sorted array is :";
//   	
//   	for(int i=0;i<10;i++){
//   		cout<<arr[i]<<" ";
//	   }
//	   cout<<endl;
//   }










