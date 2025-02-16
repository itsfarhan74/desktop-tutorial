  
  // STL

  #include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<string> s;

    s.push("ali");
    s.push("ahmad");
    s.push("khan");

    cout << "Initial top element: " << s.top() << endl;

    // Pop an element
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;

    // Size of the stack
    cout << "Stack size: " << s.size() << endl;

  
    return 0;
}
  
  // #include<iostream>
  // #include<array>     // for array
  // using namespace std;
  
  // int main ()
  // {
  // //	int basic[4]={5,7,8,9};
  // 	array<int,4> a={5,7,8,9};
  // 	int size=a.size();
  //   cout<<" Array elements are : ";
  // 	for(int i=0;i<size;i++){
  // 		cout<<a[i]<<" ";
	//   }
  //   cout<<endl;
  //   cout<<" Element at 2 indix is : "<<a.at(2)<<endl;
  //   cout<<" empty array or not : "<<a.empty()<<endl;
  	
  //   cout<<" front elemnt is :"<<a.front()<<endl;
  //   cout<<" back elemnt is :"<<a.back()<<endl;
  // }

//  #include<iostream>
//  #include<vector>     // for vecotr
//  using namespace std;
//  
//  int main ()
//  {
//  	vector<int> v;
//  	cout<<"  capacity is "<<v.capacity()<<endl;
//    v.push_back(1);
//    cout<<"  capacity is "<<v.capacity()<<endl;
//     v.push_back(2);
//    cout<<"  capacity is "<<v.capacity()<<endl;
//     v.push_back(3);
//    cout<<"  capacity is "<<v.capacity()<<endl;
//      cout<<"  size is "<<v.size()<<endl;
//      cout<<"  element  is "<<v.at(2)<<endl;
//       cout<<"  elemnt  is "<<v.at(1)<<endl;
//     cout<<"  emty or not   "<<v.empty()<<endl;
//     cout<<" befor pop elemnts  are "<<endl;
//     for(int i:v){
//      cout<<i<<" ";
//     }
//     cout<<endl;
//     v.pop_back();
//     cout<<" after pop elemnts  are "<<endl;
//     for(int i:v){
//      cout<<i<<" ";
//     }
// cout<<" before clear size is : "<<v.size()<<endl;
//  cout<<" before clear capacity is : "<<v.capacity()<<endl;
// v.clear();
// cout<<" after the clear size is : "<<v.size()<<endl;
// cout<<" aftre clear capacity is : "<<v.capacity()<<endl;
//  }
//  
//  