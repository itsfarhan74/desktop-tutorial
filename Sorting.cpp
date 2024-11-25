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
//
//  #include<iostream>  // BUBBLE SORTED
//  using namespace std;
//  void bubble(int arr[],int n){
//  	for(int i=0;i<n-1;i++){
//  		for(int j=0;j<n-i-1;j++)
//  		if(arr[j]>arr[j+1]){
//  			swap(arr[j],arr[j+1]);
//		  }
//	  }
//  }
//  int main(){
//  	
//  	int arr[6]={7,4,22,55,77,8};
//  	
//  	bubble(arr,6);
//  	
//  	cout<<" sorted array is : ";
//  	
//  	for(int i=0;i<6;i++){
//  		cout<<arr[i]<<" ";
//	  }
//  	cout<<endl;
//  }
  
  #include<iostream> // optimizing bubble sorting
  using namespace std;
  void sorting(int arr[] , int n){
  	for(int i=0;i<n-1;i++){
  		bool swapped=false;
  		for(int j=0;j<n-i-1;j++){
  			if(arr[j]>arr[j+1]){
  				swap(arr[j],arr[j+1]);
  				swapped=true;
			  }
		  
}
   if(swapped==false){
   	break;  // already sorted array hai 
   }
	  }
  }
 	int main(){
	 
	 int arr[7]={0,43,4,22,55,77,8};
  	
  	sorting(arr,7);
  	
  	cout<<" sorted array is : ";
  	
  	for(int i=0;i<7;i++){
  		cout<<arr[i]<<" ";
	  }
  	cout<<endl;
  }




