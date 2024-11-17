//  #include<iostream>
//  using namespace std;
//  bool search(int arr[], int size, int key){
//  	for (int i=0;i<size;i++){
//  		if(arr[i]==key){
//  			return 1;
//		  }
//	  }
//	  return 0;
//  }
//  
//  int main (){
//  	
//  	int arr[5]={1,3,3,4,5};
//  	int key;
//  	
//  	cout<<" enetr the key which you wana search :"<<endl;
//  	
//  	cin>>key;
//  	
//  	 bool found = search(arr,5,key);
//  	if(found){
//  		
//		  cout<<" key is present : "<<endl;
//	 
//	  }
//	  else {
//  
//  	cout<<" key is not present : "<<endl;
//   
//   }
// }

 // revrsing the array 
  	
// #include<iostream>
// 
// using namespace std;
// void reverse(int arr[],int n){
// 	int start=0;
// 	int end=n-1;
// 	while(start<=end){
// 		swap(arr[start],arr[end]);
// 		start++;
// 		end--;
//	 }
// }
// 
// void printArr(int arr[],int n){
// 	for (int i=0;i<n;i++){
// 		cout<<arr[i]<<" ";
//	 }
//	 cout<<endl;
// }
// 
// int main (){
// 	
// 	int arr[6]={3,4,6,7,8,9};
// 	for (int i=0;i<6;i++){
// 		cout<<arr[i]<<" ";
// 		
//	 }
//	 cout<<endl;
// 	reverse(arr,6);
//   printArr(arr,6);
// }

 #include<iostream>
 using namespace std;
 void reverse(int arr[],int n){
 	int start=0;
 	int end=n-1;
 	while(start<=end){
 		swap(arr[start],arr[end]);
 		start++;
 		end--;
	 }
 }
 void printArr(int arr[],int n){
 	for(int i=0;i<n;i++){
 		cout<<arr[i]<<" ";
	 }
	 cout<<endl;
 }
 int main(){
 	int arr[3]={3,6,7};
 
 	reverse(arr,3);
 	
	 printArr(arr,3);
	 }
 
 
 
 
 
  
