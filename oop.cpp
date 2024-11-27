
// #include<iostream>  // Constructor
// using namespace std;
// class Hero{
// int health;
//  char level;  
//  public:
//  
//  Hero(){
//  	cout<<" Constructor is called : "<<endl;
//  }
// void print(){
// 	cout<<level<<endl;
// }
// 	int gethealth(){
// 		return health;
//	 }
//	char getlevel(){
//		return level;
//	}
//	void sethealth(int h){
//		health = h;
//	}
//	void setlevel(char l){
//		level=l;
//	}
// };
//  int main(){
//  //	creation of the object statically
// cout<<"  hello : "<<endl;
//  Hero h1;
// cout<<" hey : "<<endl;
//   // creation of the object dynamically
//   Hero *h=new Hero;
// cout<<" good : "<<endl; 
//  
//  }
// #include <iostream>// copy constructor
//using namespace std;
//
//class Hero {
//public:
//    int health;
//    char level;
//
//    Hero(int h, char l) : health(h), level(l) {}  // Parameterized Constructor
//};
//
//int main() {
//    Hero h1(100, 'A');  // Object h1
//    Hero h2 = h1;       // Default Copy Constructor (shallow copy)
//
//    cout << "h1: " << h1.health << ", " << h1.level << endl;
//    cout << "h2: " << h2.health << ", " << h2.level << endl;
//
//    h2.health = 200;  // Modifying h2's health
//    cout << "After modifying h2:" << endl;
//    cout << "h1: " << h1.health << endl;  // h1 is unaffected
//    cout << "h2: " << h2.health << endl;
//
//    return 0;
//}
//
//#include <iostream> // this key word use
//using namespace std;
//class Hero {
//private:
//    int health;
//
//public:
//    void setHealth(int health) {
//        // Resolving naming conflict
//        this->health = health;  // "this->health" refers to the member variable
//    }
//
//    void display() {
//        cout << "Health: " << this->health << endl;  // Explicit use of `this`
//    }
//};
//
//int main() {
//    Hero h1;
//    h1.setHealth(100);
//    h1.display();  // Output: Health: 100
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//class Hero {
//private:
//    int *health;
//
//public:
//    Hero(int h) {
//        health = new int(h);  // Dynamic memory allocation
//    }
//
//    ~Hero() {
//        delete health;  // Destructor to free memory
//    }
//
//    void display() {
//        cout << "Health: " << *health << endl;
//    }
//};
//
//int main() {
//    Hero h1(100);
//    h1.display();  // Output: Health: 100
//    return 0;
//}
//
//#include <iostream> //constructor overloading
//using namespace std;
//class Hero {
//private:
//    int health;
//    char level;
//
//public:
//    Hero() { // Default Constructor
//        health = 0;
//        level = 'Z';
//    }
//
//    Hero(int h) { // Parameterized Constructor
//        health = h;
//        level = 'Z';
//    }
//
//    Hero(int h, char l) { // Parameterized Constructor
//        health = h;
//        level = l;
//    }
//
//    void display() {
//        cout << "Health: " << health << ", Level: " << level << endl;
//    }
//};
//
//int main() {
//    Hero h1;          // Default Constructor is called
//    Hero h2(100);     // Constructor with one argument is called
//    Hero h3(200, 'A'); // Constructor with two arguments is called
//
//    h1.display();
//    h2.display();
//    h3.display();
//
//    return 0;
//}
//
// 
// class Hero { // copy constrcutor
//private:
//    int health;
//
//public:
//    Hero(int h) {
//        health = h;
//    }
//
//    Hero(const Hero &obj) { // Copy Constructor
//        health = obj.health;
//    }
//
//    void display() {
//        cout << "Health: " << health << endl;
//    }
//};
//
//int main() {
//    Hero h1(100);   // Parameterized Constructor is called
//    Hero h2 = h1;   // Copy Constructor is called
//    h2.display();
//    return 0;
//}
//
////#include <iostream> // parametrized constructor
////using namespace std;
////class Hero {
////private:
////    int health;
////    char level;
////
////public:
////    Hero(int h, char l) { // Parameterized Constructor
////        health = h;
////        level = l;
////    }
////
////    void display() {
////        cout << "Health: " << health << ", Level: " << level << endl;
////    }
////};
////
////int main() {
////    Hero h1(100, 'A'); // Parameterized Constructor is called
////    h1.display();
////    return 0;
////}


// #include<iostream> getter setter
// using namespace std;
// class Hero{
//  int health;
//  char level;
//  public:
// void print(){
// 	cout<<level<<endl;
// }
// 	int gethealth(){
// 		return health;
//	 }
//	char getlevel(){
//		return level;
//	}
//	void sethealth(int h){
//		health = h;
//	}
//	void setlevel(char l){
//		level=l;
//	}
// };
//  int main(){
//  Hero h1;
//  h1.sethealth(23);
//  h1.setlevel('2');
// cout<<" health is ; "<<h1.gethealth()<<endl;
//  cout<<" level is ; "<<h1.getlevel()<<endl; 
//  }


//#include<iostream>
// using namespace std;
// 
// class Name{
// 	// properties of the class 
// public:
// 	int health;
// 	char level;
// 
// 	
// };
//  int main(){
// // creation f the object 
// Name n1;
// n1.health=20;
// n1.level='3';
// //n1.name=malik;
// cout<<" health of n1 is : "<<n1.health<<endl;
// cout<<" level of n1 is : "<<n1.level<<endl;
//// cout<<" name of n1 is : "<<n1.name<<endl;
//// cout<<" size of the obj : "<<sizeof(n1)<<endl;
//  return 0;
//  
//  }


// #include<iostream>
// using namespace std;
// 
// class Name{
// 	// properties of the class 
// 	
// };
//  int main(){
// // creation f the object 
// Name n1;
// cout<<" size of the obj : "<<sizeof(n1)<<endl;
//  return 0;
//  
//  }
