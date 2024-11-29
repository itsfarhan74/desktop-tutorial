 
 #include <iostream> // Abstraction
using namespace std;

class Animal {
public:
    virtual void sound() = 0; 
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "Dog barks" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() override {
        cout << "Cat meows" << endl;
    }
};

int main() {
    Dog dog;  
    Cat cat;  

    dog.sound();  // Output: Dog barks
    cat.sound();  // Output: Cat meows

    return 0;
}

 
// #include <iostream>  //function overloading
//using namespace std;
//
//class Calculator {
//public:
//    int add(int a, int b) {
//        return a + b;
//    }
//
//    double add(double a, double b) {
//        return a + b;
//    }
//};
//
//int main() {
//    Calculator calc;
//    cout << "Integer Addition: " << calc.add(2, 3) << endl;        // Output: 5
//    cout << "Double Addition: " << calc.add(2.5, 3.5) << endl;    // Output: 6.0
//    return 0;
//}
  
  // operator overloading 
  
//  #include<iostream>
//  using namespace std;
//  class B{
//  	public:
//  		int a;
//  		int b;
// 	public:
//   int add(){
//   	return a+b;
//   }
//   void operator+ (B &obj){
////   	int value1=this->a;
////   	int value2=obj.a;
////   	cout<<"output : "<<value2-value1<<endl;
//  cout<<" hello : "<<endl;
//   }
//  };
// int main(){
// 	B obj1,obj2;
// 	obj1.a=4;
// 	obj2.a=7;
// 	obj1 + obj2;
// }
//#include<iostream>
//  using namespace std;
//  class B{
//  	public:
//  		int a;
//  		int b;
// 	public:
//   int add(){
//   	return a+b;
//   }
//   void operator+ (B &obj){
////   	int value1=this->a;
////   	int value2=obj.a;
////   	cout<<"output : "<<value2-value1<<endl;
//  cout<<" hello : "<<endl;
//   }
//   void operator() (){
//   cout<<" bracket : "<<this->a<<endl;
//   }
//  };
// int main(){
// 	B obj1,obj2;
// 	obj1.a=4;
// 	obj2.a=7;
// 	obj1 + obj2;
// 	obj1();
// }

//   #include<iostream>//inhertance
//  using namespace std;
//
//  class Human{
//    public:
//     int age;
//     int weight;
//     int height;
// public:
//  int getAge(){
//
//    return this->age;
//  }
//   void sewtWeight(int w ){
//    this->weight= w;
//   }
//
//  };
//
//  class Male: public Human{
//
//    public:
//    string color;
//  void sleep(){
//    cout<<" man is sleeping : "<<endl;
//  }
//  };
//  int main(){
// 
//  Male obj1;
//  cout<<obj1.age<<endl;
//  cout<<obj1.weight<<endl;
//  cout<<obj1.height<<endl;
//  cout<<obj1.color<<endl;
//  
//  obj1.sleep();
//  
//  }
//  #include<iostream> // encapsulation
//  using namespace std;
//  
//  class Student{
//  	private:
//  	string name;
//  	int age;
//  	int height;
//  	
//  public:
//  	int getAge(){
//	  return this->age;
//	  }
//  };
//  
//   int main(){
//  Student first;
//  
//  cout<<" everything is fine : " <<endl;	
//   	
//   }
// #include<iostream>  // ambiguity
// using namespace std;
// 
// class A{
// 	public:
//	 void func(){
//	 cout<<" i am 1 :"<<endl;
//	 }
// }; 
// class B{
// 	public:
// 	void func(){
//	 cout<<" i am 2 :"<<endl;
//	 }
// }; 
// class C: public A,public B {
// 	
// 
//	 
// }; 
// 
// int main (){
// 	C obj;
// 	obj.A::func();
// 	obj.B::func();
// }
// 
// #include<iostream> // multiple inheritance
// using namespace std;
// 
// class Animal{
// 	public:
// 		int age;
// 		int weight;
// 	public:
//	 void bark(){
// 		cout<<" animal is barking :"<<endl;
//	 }
// };
// class Human{
// 	public:
// 		int height;
// 	void speak(){
// 		cout<<" human is speaking :"<<endl;
//	 }
// };
// 
// class Mulitiple: public Human, public Animal{
// 	
// };
//  int main(){
//  Mulitiple	 g;
//  	g.speak();
//    g.bark();
//  	
//  }


//#include<iostream> // multilevel inheritance
// using namespace std;
// 
// class Animal{
// 	public:
// 		int age;
// 		int weight;
// 	public:
//	 void speak(){
// 		cout<<" animal is speaking :"<<endl;
//	 }
// };
// class Dog: public Animal{
//	
// }; 
// class School: public Dog{
// 	
// };
//  int main(){
//  	School g;
//  	g.speak();
//  	cout<<g.age<<endl;
//  	
//  }
// #include<iostream> // single inheritance
// using namespace std;
// 
// class Animal{
// 	public:
// 		int age;
// 		int weight;
// 	public:
//	 void speak(){
// 		cout<<" animal is speaking :"<<endl;
//	 }
// };
// class Dog: public Animal{
//	
// }; 
//  int main(){
//  	Dog g;
//  	g.speak();
//  	cout<<g.age<<endl;
//  	
//  }

//#include <iostream>
//using namespace std;
//
//class Employee {
//private:
//    int salary;  // private variable
//
//public:
//    // Setter method
//    void setSalary(int s) {
//        if (s > 0) {
//            salary = s;
//        } else {
//            cout << "Invalid salary!" << endl;
//        }
//    }
//
//    // Getter method
//    int getSalary() {
//        return salary;
//    }
//};
//
//int main() {
//    Employee emp;
//    emp.setSalary(0);  // Set salary through public method
//    cout << "Salary: " << emp.getSalary() << endl;  // Access salary through public method
//    return 0;
//}

