 #include<iostream>
    //  typecasting is the method which converts datatype(ascaii)to the another binary value and the nymbers like a,A etc

 using namespace std; // commit
 
 int main(){
 	
  int a = 'a';// new comments
  
  
  cout<<" a is : " << a <<endl;
  
   char ch = 86;
  
  cout<<" ch is: " << ch <<endl;
  
  int a1 = 'ab';
  
  cout<<" a1 is : " << a1 <<endl;
  
   char mh = 99 ;
  
  cout<<" ch is: "<< mh << endl;
  
   char ch2 = 48786;
  
  cout<<" ch2 is: "<< ch2 <<endl;
  
  // how to  store negative numbers ??

  // answer is 
  
  // to store firts ignore negative sign then take 2's complement 
  
  // unsigned represents that positive numbers will store always
  
  unsigned int s= 222; // for + numbers ;
  
  cout<<" s is : "<< s <<endl;
  
  // but for -ve numbers 
  // this is because of just most significant bit which is 1 in start in case of -ve number
  
   unsigned int s2 = -222;
  
  cout<<" s2 is : "<< s2 <<endl;
  
  // operators
  
  int as = 2;
  
  int bs = 3;
  
  bool m1(as==bs); 
  
  cout<<m1<<endl;
	
 }
 
 
 
 
 
