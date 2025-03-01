
// #include<iostream>
// using namespace std;
// int rev(int n){
// 	int ans=0;
// 	while(n != 0){
// 		int digit = n % 10;
// 		if((ans > INT_MAX/10) || (ans <  INT_MIN/10)){
// 			return 0;
//	}
// 		ans = (ans*10)+digit;
// 		
// 		n = n/10;
// 		
//	 }
//	 return ans;
//}
// 
// int main(){
// 	int n = 12345678902962587454352435;
// 	
// 	int sol = rev(n);
// 	
// 	cout<<sol<<" ";
// }
//
//  #include<iostream>
// using namespace std;
// int bit(int n){
// int m = n;
// int mask = 0;
// if( n  == 0){
// 	return 1;
// 	
// }
// while(m != 0){
// 	 mask = (mask << 1) | 1;
// 	m = m >> 1;
// }
// int ans = (~n) & mask;
//  return ans;
//}
// int main(){
// 	int n = 5;
// 	
// 	int sol = bit(n);
// 	
// 	cout<<sol<<" ";
// }
// #include<iostream>
// using namespace std;
// int bitwise(int n){
// 	int m = n;
// 	
// 	int mask = 0;
// 	if(n == 0){
// 		return 1;
//	 }
// 	while(m != 0){
// 		mask = (mask << 1) | 1;
// 		
// 		m = m >> 1;
//	 }
//	 int ans = (~n) & mask;
//	 
//	 return ans;
// }
//int main(){
//	int n;
//	cin>>n;
//	
//	int sol = bitwise(n);
//	
//	cout<<sol<<endl;
//}

 #include<iostream>
#include<climits> // For INT_MAX
using namespace std;

bool isPower(int n){
    if (n <= 0) 
	return false; 
    int ans = 1;
    for(int i = 0; i <= 30; i++){
        if(ans == n){
            return true;
        }
        if(ans > INT_MAX / 2) 
		break; 
        ans = ans * 2;
    }
    return false;
}

int main(){
    int n = 10;    
    bool sol = isPower(n);
    cout << boolalpha << sol << " "; 
    return 0;
}
