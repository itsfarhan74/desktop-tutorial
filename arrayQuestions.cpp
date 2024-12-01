// #include<iostream>
// #include<vector>
// using namespace std;
// 
// vector<int> reverse(vector<int> v){
// 	int s=0;
// 		int e=v.size()-1;
// 	while(s<=e){
// 		swap(v[s],v[e]);
// 		s++;
// 		e--;
//	 }
// return v;
// }
// void print(vector<int> v){
// 	for(int i=0;i<v.size();i++){
// 		cout<<v[i]<<" ";
//	 }
//	 cout<<endl;
// }
// 
// int main(){
// 	vector<int> v;
// 	v.push_back(7);
// 	v.push_back(6);
// 	v.push_back(5);
// 	v.push_back(4);
//    v.push_back(3);
//    vector<int> ans=reverse(v);
//    
//    print(ans);
//    
// }
//  #include<iostream>
// #include<vector>
// using namespace std;
// 
// vector<int> reverse(vector<int> v, int m){
// 	
//	 int s=m+1;
// 		int e=v.size()-1;
// 	while(s<=e){
// 		swap(v[s],v[e]);
// 		s++;
// 		e--;
//	 }
// return v;
// }
// void print(vector<int> v){
// 	for(int i=0;i<v.size();i++){
// 		cout<<v[i]<<" ";
//	 }
//	 cout<<endl;
// }
// 
// int main(){
// 	vector<int> v;
// 	v.push_back(1);
// 	v.push_back(2);
// 	v.push_back(3);
// 	v.push_back(4);
//    v.push_back(5);
//    v.push_back(6);
//    
//    int m;
//    cin>>m;
//    vector<int> ans=reverse(v,m);
//    
//    print(ans);
//    
// }

// #include<iostream> merging the array
// using namespace std;
// int mergArray(int arr1[],int n, int arr2[], int m,int arr3[] ){
// 	
// int i=0;
//   int j=0;	
// 	int k=0;
// 	
// 	while(i<n&&i<m){
// 		if(arr1[i]<arr2[j]){
// 			arr3[k]=arr1[i];
// 			i++;
// 			k++;
//		 }
//		 else{
//		 	arr3[k]=arr2[j];
//		 	j++;
//		 	k++;
//		 }
//	 }
//	 // for enetring the remainng elements
//	 
//	while(i<n){
//			arr3[k]=arr1[i];
//			i++;
//			k++;
//	}
//	while(j<m){
//			arr3[k]=arr2[j];
//			k++;
//			j++;
//	}
//	
// }
// 
// void print(int ans[],int n){
// 	for(int i=0;i<n;i++){
// 		cout<<ans[i]<<" ";
//	 }
//	 cout<<endl;
// }
// 
// int main (){
// 
//  int arr1[5]={1,3,5,7,9};
//  int arr2[4]={2,4,6,8}; 
//  int arr3[9]={0};
//  
//  mergArray(arr1,5,arr2,4,arr3);
//  
//  print(arr3,9);
//  
//  return 0;
//
// 	
// }
 
 
 
   #include <iostream> // moving zeroes 
#include <vector>

using namespace std;

void moveZeroes(vector<int>& nums) {
    int nonZeroIndex = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            swap(nums[i], nums[nonZeroIndex]);
            nonZeroIndex++;
        }
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};

    cout << "Original array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    moveZeroes(nums);

    cout << "Modified array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

 
 
    
