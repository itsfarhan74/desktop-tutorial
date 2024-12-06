// 
// #include<iostream>
// using namespace std;
// 
// int getLength(char name[]){
// 	int count=0;
// 	for(int i=0;name[i] != '\0'; i++){
// 		count++;
//	 }
//	 return count;
// }
// int main(){
// 	
//  char  name[20];
//  
//  cout<<" Enter your name : "<<endl;
//  
//  cin>>name;
//  
//  cout<<" Your name  is : ";
//  
//  cout<<name<<endl;
//  
//  cout<<" Length of the name is :"<<getLength(name);
// }

//   
// #include<iostream>
// using namespace std;
// void revese(char name[], int n){
// 	int s=0;
// 	int e=n-1;
// while(s<e){
// 		swap(name[s],name[e]);
// 			s++;
// 			e--;
//		 }
//	 }
// 
// int getLength(char name[]){
// 	int count=0;
// 	for(int i=0;name[i] != '\0'; i++){
// 		count++;
//	 }
//	 return count;
// }
// int main(){
// 	
//  char  name[20];
//  
//  cout<<" Enter your name : "<<endl;
//  
//  cin>>name;
//  
//  cout<<" Your name  is : ";
//  
//  cout<<name<<endl;
//  
// // cout<<" Length of the name is :"<<getLength(name);
//  
//  int len=getLength(name);
//  
//  cout<<" length  of name  is : "<<len<<endl;
//  
//  revese(name,len);
//  
//  cout<<" Now name is : ";
//  
//  cout<<name<<endl;
//  
// }


//      
// #include<iostream>
//  #include <iostream>
//#include <vector>
//using namespace std;
//
//void reverseString(vector<char>& s) {
//    int st = 0;
//    int ed = s.size() - 1;
//    while (st < ed) {
//        swap(s[st], s[ed]);
//        st++;
//        ed--;
//    }
//}
//
//int main() {
//    string input;
//    cout << "Enter a string: ";
//    cin >> input; // Read input as a string
//    
//    vector<char> s(input.begin(), input.end()); // Convert string to vector of chars
//    reverseString(s); // Reverse the string
//    
//    cout << "Reversed string is: ";
//    for (char c : s) {
//        cout << c;
//    }
//    cout << endl;
//
//    return 0;
//}

  // palindrome or not
  
  #include <iostream>
#include <cstring>
using namespace std;

bool checkPalindrome(char a[], int n) {
    int s = 0;
    int e = n - 1;
    while (s <= e) {
        if (a[s] != a[e]) {
            return 0;
        }
        e--;
        s++;
    }
    return 1;
}

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin >> str;

    int len = strlen(str);

    if (checkPalindrome(str, len)) {
        cout << str << " is a palindrome." << endl;
    } else {
        cout << str << " is not a palindrome." << endl;
    }

    return 0;
}

  
