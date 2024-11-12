// #include<iostream>
//  
// using namespace std;
// int main (){
// 	int a,b;
// 	cout<<" enter the first number :"<<endl;
// 	cin>>a;
// 	cout<<"enter the second number : "<<endl;
// 	cin>>b;
// 	char op;
// 	cout<<" enter the opration you want to perform : "<<endl;
// 	cin>>op;
// 	switch(op){
// 		
//		 case '+' : cout<<(a+b)<<endl;
// 	              break;
// 	          
// 	    case '-' :  cout<<(a-b)<<endl;
// 	             break;
// 	    
//		 case  '*' : cout<<(a*b)<<endl;
// 	              break;
// 	    
//		 case  '/' : cout<<(a/b)<<endl;
//		       break;
//		
//		 case  '%' : cout<<(a%b)<<endl;
//		       break;
//		
//		 case  '^' : cout<<(a^b)<<endl;
//		       break;
//		
//		 case  '&' : cout<<(a&b)<<endl;
//		       break;
//		default :  cout<<" please enter the correct op :"<<endl;
//	 }
// }

 #include <iostream>

using namespace std;

int main() {
    int amount = 1330;
    int count_100 = 0, count_50 = 0, count_20 = 0, count_1 = 0;

    // Calculate the number of 100 notes
    count_100 = amount / 100;
    amount = amount % 100;  // Update remaining amount

    // Calculate the number of 50 notes
    count_50 = amount / 50;
    amount = amount % 50;

    // Calculate the number of 20 notes
    count_20 = amount / 20;
    amount = amount % 20;

    // Calculate the number of 1 notes
    count_1 = amount / 1;
    amount = amount % 1;

    // Output the result
    cout << "For 1330, you will need: " << endl;
    cout << "100: " << count_100 << " notes" << endl;
    cout << "50: " << count_50 << " notes" << endl;
    cout << "20: " << count_20 << " notes" << endl;
    cout << "1: " << count_1 << " notes" << endl;

    return 0;
}

 // #include<iostream>
//  using namespace std;
//  int main (){
//  	char ch= '1';
//  	
//  switch(ch){
//  	
//  	case 1 : cout<<" number is first :"<<endl;
//  	    break;
//  	case 2 : cout<< " number is second : "<<endl;
//  	    break;
//  	default : cout<< " it is default case : "<<endl;
//  }
//  
//  }
 
//  #include<iostream>
//  using namespace std;
//  int main (){
//  	char ch = '2';
//  	
//  switch(ch){
//  	
//  	case 1 : cout<<" number is first :"<<endl;
//  	    break;
//  	case 2 : cout<< " number is second : "<<endl;
//  	    break;
//  	default : cout<< " it is default case : "<<endl;
//  }
//  
//  }
//  #include<iostream>
//  using namespace std;
//  int main (){
//  	int num=2;
//  	
//  switch(num){
//  	
//  	case 1 : cout<<" number is first :"<<endl;
//  	    break;
//  	case 2 : cout<< " number is second : "<<endl;
//  	    break;
//  	default : cout<< " it is default case : "<<endl;
//  }
//  
//  }
//  
//  #include<iostream>
//  using namespace std;
//  int main (){
//  	int n;
//  	cin>>n;
//  	int ans=0;
//  	while(n !=0){
//  		int digit=n%10;
//  	if( (ans > INT_MAX/10 )  || (ans < INT_MIN/10) ){
//  		return 0;
//    }
//   ans = (ans * 10) + digit;
//   n=n/10;
//   
// }
// cout<<" ans is : "<<ans;
// 
//  }
