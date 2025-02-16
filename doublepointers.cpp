 
// #include<iostream>

// using namespace std;

// int main (){
// 	int n = 10;

// 	cout<<n<<endl;

// 	cout<<&n<<endl;

// 	int *p = &n;

// 	cout<<*p;
// }

// #include<iostream>

// using namespace std;

// int main (){
// 	double n = 10.1;

// 	cout<<n<<endl;

// 	cout<<&n<<endl;

// 	double *p = &n;
// 	cout<<*p<<endl;

// 	cout<<p;

// 	cout<<" size of the n is :"<<sizeof(n)<<endl;
// 	cout<<" size of p is :"<<sizeof(p)<<endl;
// }


// #include<iostream>
// using namespace std;
//
//int main (){
//	int num= 5;
//	int a=num;
//
//	a++;
//
//	int *p = &num;
//    cout<<"value of num before incr :"<<num<<endl;
//	(*p)++;
//
//	cout<<"value of num after incr :"<<num<<endl;
//	
//}

//#include<iostream>
//using namespace std;
//int main(){
//    int arr[10];
//
//    cout<<"address of the first array block is :"<<arr<<endl;
//    cout<<"address of the first array block is :"<<&arr[0]<<endl;
//    cout<<"address of the first array block is :"<<&arr<<endl;
//    cout<<"address of the first array block is :"<<arr[1]<<endl;
//    
//}

// #include<iostream>
//using namespace std;
//int main(){
//    int arr[10]={0,1,2,3,4,5,6,7,8,9};
//    cout<<"Address of the first block "<<&arr<<endl;
//    cout<<"value of the first block "<<*arr<<endl;
//    cout<<"Address of the 4th block "<<&arr[3]<<endl;
//    cout<<"value of the 4th block "<<*arr<<endl;
//}

//  #include<iostream>
//  using namespace std;
//  int main(){
//    int arr[10]={0,1,2,3,4,5,6,7,8,9};
//    cout<<"value is :"<<arr[1]<<endl;
//    cout<<"value is :"<<*(arr+1)<<endl;
//    
//    cout<<"value is :"<<0[arr]<<endl;
//  }


//  #include<iostream>
//  using namespace std;
//  int main(){
//  	int arr[5]={4,5,6,7};
//    cout<<"size of arr is :"<<sizeof(arr)<<endl;
//    int *p = &arr[0];
//    
//    cout<<"size of p is :"<<sizeof(p)<<endl;
//    cout<<"size of p is :"<<sizeof(*p)<<endl;
//    cout<<"size of p is :"<<sizeof(&p)<<endl;
//  }
   
//   #include<iostream>
//   using namespace std;
//   int main () {
//   	int arr[10];
//   	arr= arr + 1;      // will not work in array case 
//   }

//    #include<iostream>
//   using namespace std;
//   int main () {
//   	int arr[10];
//   	int *ptr = &arr[0];
//   	
//   	ptr = ptr + 1;            // code is runable here in pointers case 
    
 // }

//   #include<iostream>
//   using namespace std;
//   int main() {
//   	int arr[4]={4,5,6,7};
//   	char ch[4]="abc"; // we write 4 one byte for null charc
//   	
//   	cout<< arr <<endl;
//   	cout<< ch <<endl;
//   	
//   	int *i = &arr[0];
//   	char *c = &ch[0];
//   	
//   	cout<< c <<endl; // will print entire string 
//   	cout<< i <<endl;
//   	
//   	}

    // functions in pointers
       
// #include<iostream>
//   using namespace std;
//   
//   void print(int *p){
//    cout<< *p <<endl;
//   
//   }
//   
//   int main() {
//    int val = 5;
//    int *p = &val;
//    
//	print(p);
//
//	}
  
#include<iostream>
using namespace std;

void print(int *p){
 cout<< *p <<endl;

}

void update(int *p){
    p = p + 1;
    cout<<"inside the function p is :"<<p<<endl;
}

int main() {
 int val = 5;
 int *p = &val;
 
 //print(p);
 cout<<"before the function p is :"<<p<<endl;
 update(p);
 cout<<"after the function p is :"<<p<<endl;
 

 }
// finish
