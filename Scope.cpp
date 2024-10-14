

  // about operator procedure
   
   
  #include <iostream> 
  using namespace std;
  int main (){
   
   int n;
   
   cin>>n;
   int count = 0;
   
   while(n!=0){
   	// checking for last bit 
   	if(n&1){
   		count++;
	   }
   	n=n>>1;
   }
   
   cout<<count<<endl;
   return 0;
   
}
//   int n;
//   cin>>n;
//   int product	= 1;     // product - sum
//   int sum = 0;
//   while( n!=0){
//   	int digit=n%10;
//   	product=product*digit;
//   	sum=sum+digit;
//   	n=n/10;
//   }
//   
//    int ans = product-sum;
//   cout<<ans<<" "<<endl;
//   return 0;
//    	
//  }


    //  about scope

//  #include <iostream> 
//  using namespace std;
//  int main (){
//  	
//   int a=4;
//  
//	cout<<a<<endl;
// if (true){
// 	int b=1;
// 	cout<<b<<endl;
// 	
// }
// int b=2;
// cout<<b<<endl;
// 
// for (int i=0;i<=4;i++)	
// {
// 	cout<<" Farhan " <<endl;
// 	
// }
// cout<<a<<endl;
//	
//  }
