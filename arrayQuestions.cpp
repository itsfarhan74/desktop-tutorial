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
 
 
// 
//   #include <iostream> // moving zeroes 
//#include <vector>
//
//using namespace std;
//
//void moveZeroes(vector<int>& nums) {
//    int nonZeroIndex = 0;
//
//    for (int i = 0; i < nums.size(); i++) {
//        if (nums[i] != 0) {
//            swap(nums[i], nums[nonZeroIndex]);
//            nonZeroIndex++;
//        }
//    }
//}
//
//int main() {
//    vector<int> nums = {0, 1, 0, 3, 12};
//
//    cout << "Original array: ";
//    for (int num : nums) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    moveZeroes(nums);
//
//    cout << "Modified array: ";
//    for (int num : nums) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
  
  
//   #include <iostream> // moving zeroes 
//#include <vector>
//
//using namespace std;
//
//void rotate(vector<int>& nums,int k) {
//   vector<int> temp(nums.size());
//   
//   for(int i=0;i<nums.size();i++){
//   	temp[(i+k)%nums.size()]=nums[i];
//   }
//   // copy temp into num vector
//   nums=temp;
//}
//
//int main() {
//    vector<int> nums = {0,1,3,5,7};
//
//    cout << "Original array: ";
//    for (int num : nums) {
//        cout << num << " ";
//    }
//    cout << endl;
//int k=2;
//    rotate(nums,k);
//
//    cout << "rotaed array: ";
//    for (int num : nums) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    return 0;
//}
//
//   #include<iostream> // checking the sorted and rotted array
//   #include<vector>
//   using namespace std;
//   
//   bool check(vector<int>& nums){
//   	int count=0;
//   	int n=nums.size();
//   	for(int i=1;i<n;i++){
//   		if(nums[i-1]>nums[i]){
//   			count++;
//		   }
//	   }
//	   // last wali value ko phli ka hisaab sy check kr kalye
//	if(nums[n-1]>nums[0]){
//		count++;
//		
//	
//	}
//	return count<=1;
//   }
//   int main() {
//    vector<int> nums = {4, 5, 6, 1, 2, 3};
//
//    cout << "Array given:" << endl;
//    for (int num : nums) {
//        cout << num << " ";
//    }
//    cout << endl;
//
//    bool isSortedRotated = check(nums);
//    if (isSortedRotated) {
//        cout << "Array is sorted and rotated." << endl;
//    } else {
//        cout << "Array is not sorted and rotated." << endl;
//    }
//
//    return 0;
//}
#include<iostream>  //adding the array
#include<vector>

using namespace std;

// Your provided functions
vector<int> reverse(vector<int> v) {
    int s = 0;
    int e = v.size() - 1;
    while (s < e) {
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> arraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int carry = 0;
    int i = n - 1;
    int j = m - 1;

    vector<int> ans;

    while (i >= 0 && j >= 0) {
        int val1 = a[i];
        int val2 = b[j];

        int sum = val1 + val2 + carry;

        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
        j--;
    }
    // first step

    while (i >= 0) {
        int sum = a[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        i--;
    }
    // second step

    while (j >= 0) {
        int sum = b[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

        j--;
    }

    // third step
    while (carry != 0) {
        int sum = carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);

    }
    // printing the ans

    return reverse(ans);

}

// Main function to run the provided code
int main() {
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};

    vector<int> result = arraySum(a, a.size(), b, b.size());

    for (int i : result) {
        cout << i;
    }

    return 0;
}

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
    
