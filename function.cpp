 // FUNCTION
  
//  #include<iostream>
//  using namespace std;
//  // function signature
//  void printcounting(int n){
//  	for(int i= 1;i<=n;i++){ // function body
//  		cout<<i<<" ";
//	  }
//	  cout<<endl;
//  }
//  int main (){ // function call
//  	int n;
//  	cin>>n;
//  	printcounting(n);
//  }

// #include<iostream>
// using namespace std;
// int pow(int a, int b){
// 	int ans = 1;
//  for (int i=1;i<=b;i++){
//  	ans=ans*a;
//  }
//  return ans;
// }
// int main(){
//  int a,b;
//  cin>>a>>b;
//   int answer=pow(a,b);
//   cout<<" power will be  : "<<answer<<endl;
// }

// #include<iostream>
// using namespace std;
// int pow(){
// 	int a,b;
// 	cin>>a>>b;
// 	int ans = 1;
//  for (int i=1;i<=b;i++){
//  	ans=ans*a;
//  }
//  return ans;
// }
// int main(){
//    int ans=pow();
//    cout<<" power will be  : "<<ans<<endl;
//    
//   
// }
// 
 
// #include<iostream>
// using namespace std;
// 
// bool isEven(int a){
// 	if(a&1){
// 		return 0;
//	 }
//	 else{
//	 	return 1;
//	 }
// }
// int main (){
// 	int num;
// 	cin>>num;
// 	if(isEven(num)){
// 		cout<<"  number is even  :"<<endl;
// 		
//	 }
//	 else{
//	 	cout<<" number is odd : "<<endl;
//	 }
// }
//   
//   #include<iostream>
//   
//   using namespace std;
//   
//   int factorial(int n){
//   	int fact=1;
//   	for(int i=1;i<=n;i++){
//   		fact=fact*i;
//	   }
//	   return fact;
//   }
//   
//   int nCr(int n , int r){
//   	
//   	int num = factorial(n);
//   	int denom = factorial(r)*factorial(n-r);
//   	return num/denom;
//   }
//   int main (){
//   	int n,r;
//   	cin>>n>>r;
//   	cout<<" factorial is : "<<nCr(n,r)<<endl;
//   	
//   }
// 
// 
 
// 
// #include<iostream>
// using namespace std;
// 
// bool isprime(int n){
// 	for (int i= 2;i<n;i++){
// 		if(n%i==0){
// 			return 0;  // not a prime number
//		 }
//		
//	 }
// return 1;
//}
//  int main (){
//  	int n;
//  	cin>>n;
//  	if(isprime(n)){
//  		cout<<"number is prime : "<<endl;
//  		
//	  }
//	  else{
//	  	cout<<"number is not a prime number :"<<endl;
//	  }
//  }
// 
   
//   #include<iostream>
//   using namespace std;
//   void printCounting(int n){
//   	for(int i=1;i<=n;i++){
//   		cout<<i<<" ";
//	   }
//	   cout<<endl;
//   }
//   int main (){
//   	int n;
//   	cin>>n;
//   	printCounting(n);
//   }
// 
  
  // pass by value 
  
  //When you pass an argument by value, a copy
   //of the original argument is created and passed to the function. The function works with
   // this copy, and any modifications made to the parameter 
  //inside the function only affect the copy, not the original variable in the calling code.
// 
// #include <iostream>
//using namespace std;
//
//void modifyValue(int x) {
//    x = 10; // Modify the copy of the argument
//    cout << "Inside function, x = " << x << endl;
//}
//
//int main() {
//    int num = 5;
//    cout << "Before function call, num = " << num << endl;
//    
//    modifyValue(num); // Pass by value
//    
//    cout << "After function call, num = " << num << endl;
//    return 0;
//}
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
