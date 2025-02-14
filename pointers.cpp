 
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


 #include<iostream>
 using namespace std;

int main (){
	int num= 5;
	int a=num;

	a++;

	int *p = &num;
    cout<<"value of num before incr :"<<num<<endl;
	(*p)++;

	cout<<"value of num after incr :"<<num<<endl;
	
}
