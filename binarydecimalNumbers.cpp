// b -> d
   #include <iostream>
    #include <math.h>
   using namespace std;
   int main(){
   	int n;
   	cin>>n;
   	int i=0,ans=0;
   	while(n!=0){
   		int digit=n%10;//b -> d
   	if(digit==1){
   		ans=ans+pow(2,i);
	   }
	   n=n/10;
	   i++;
	   }
   	cout<<ans<<endl;
   }
   

// #include <iostream>
// 
// #include <cmath>
// 
// using namespace std;
// 
// int main(){
//    int n;
//    cout << "Enter the value of n"<<endl;
//    cin >> n;
//    int i=0 , ans = 0;
//     
//    while (n!=0){
//        int digit = n%10;
//       
//	    if(digit==1){
//		
//        ans = ans + pow(2,i)  ;
//   }
//	   
//        n = n/10;
//       i++;
//    }
//    cout << ans << endl;
//}
//
//
//



//#include <iostream>
//#include <math.h>
//using namespace std;
//int main(){
//    int n;
//    cout << "Enter the value of n ";
//    cin >> n;
//    int ans = 0;
//    int i=0, m=1;
//    while(n!=0){
//        int bit = n%2;
//        ans = (bit * m ) + ans;
//        i++;
//        n = n/2;
//        m = m * 10;
//    }
//    cout << ans << endl;
//
//}
//

//
//  #include<iostream>
//  #include<math.h>
//  using namespace std;
//  int main(){
//  	int n;
//  	cout<<" Please enter the number : "<<endl;
//  	cin>>n;
//  int ans =0;
//  int i = 0;
//  while(n != 0){
//  	int bit = n&1;
//    ans = (bit * pow(10 , i) ) + ans;
//  	n=n>>1;
//  	i++;
//  
//  } 
//   cout<<" answer is the  : "<< ans <<endl;
//  }
//
//  #include<iostream>
//  #include<math.h>
//  using namespace std;
//  int main(){
//  	int n;
//  	cout<<" Please enter the number : "<<endl;
//  	cin>>n;
//  int ans =0;
//  int i = 0;
//  while(n != 0){
//  	int digit = n%10;
//    ans = (digit * pow(10 , i) ) + ans;
//  	n=n>>1;
//  	i++;
//  
//  } 
//   cout<<" answer is the  : "<< ans <<endl;
//  }
//  #include<iostream>
//  #include<math.h>
//  using namespace std;
//  int main(){
//  	int n;
//  	cout<<" Please enter the number : "<<endl;
//  	cin>>n;
//  int ans =0;
//  int i = 0;
//  while(n != 0){
//  	int bit = n&1;
//    ans = (bit * pow(10 , i) ) + ans;
//  	n=n>>1;
//  	i++;
//  
//  } 
//   cout<<" answer is the  : "<< ans <<endl;
//  }


//   #include <iostream> 
//   
//   #include<math.h>
//   
//  using namespace std;
//  
//  int main (){
//   
//   int n;
//   
//   cin>>n;
//   
// int ans = 0;
// 
// int i = 0;
// 
// while(n!=0) {
// 	
// 	int bit= n&1;
// 	
// 	ans  = ( bit * pow( 10 ,i ) ) + ans;
// 	n=n>>1;
// 	i++;
// }
// cout<<" Answer is :  "<<ans<<endl;
// 
//   
//}

  // about operator procedure
   
   
//  #include <iostream> 
//  using namespace std;
//  int main (){
//   
//   int n;
//   
//   cin>>n;
//   int count = 0;
//   
//   while(n!=0){
//   	// checking for last bit 
//   	if(n&1){
//   		count++;
//	   }
//   	n=n>>1;
//   }
//   
//   cout<<count<<endl;
//   return 0;
//   
//}
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
