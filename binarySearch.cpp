//  
//  #include<iostream>
//  using namespace std;
//  
//  int binarySearch(int arr[],int size,int key){
//  	int s = 0;
//  	int e = size-1;
//  	int mid = s + (e-s)/2;
//  	while(s<=e){
//  		if(arr[mid]==key){
//  			return mid;
//		  }
//	if(key>arr[mid]){
//		s=mid+1;
//	}
//	else{
////	(key<arr[mid]){
//		e=mid-1;
//	}
//	int mid = s + (e-s)/2;	
//}
//	  return -1;
//  }
//  
//  int main(){
//  	
//  	int even[4]={0,3,2,7};
//  	
//  	int value = binarySearch(even,4,2);
//  	
//  	cout<<" index is : "<<value<<endl;
//  	
//  	return 0;
//  }

//   #include<iostream>  // first and last occu
//using namespace std;
//
//int firstOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == 0 || arr[mid - 1] != key)
//                break;
//            e = mid - 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int lastOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == n - 1 || arr[mid + 1] != key)
//                break;
//            s = mid + 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int main(){
//    int even[6] = {3, 4, 5, 5, 5, 9};
//    cout << "First Occurrence at index: " << firstOcc(even, 6, 5) << endl;
//    cout << "Last Occurrence at index: " << lastOcc(even, 6, 5) << endl;
//    return 0;
//}

//#include<iostream>
//using namespace std;
//
//int firstOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == 0 || arr[mid - 1] != key)
//                break;
//            e = mid - 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//
//int lastOcc(int arr[], int n, int key){
//    int s = 0;
//    int e = n - 1;
//    int mid = s + (e - s) / 2;
//    int ans = -1;
//    while(s <= e){
//        if(key == arr[mid]){
//            ans = mid;
//            if(mid == n - 1 || arr[mid + 1] != key)
//                break;
//            s = mid + 1;
//        }
//        else if(key > arr[mid])
//            s = mid + 1;
//        else
//            e = mid - 1;
//        mid = s + (e - s) / 2;
//    }
//    return ans;
//}
//// void printTotalocc(int arr[],int n,int key){
//// 	
//// }
//
//int main(){
//    int even[6] = {3, 4, 5, 5, 5, 9};
//    int value1= firstOcc(even, 6, 5);
//    int value2=lastOcc(even, 6, 5);
//    cout << "First Occurrence at index: " << value1<< endl;
//    cout << "Last Occurrence at index: " << value2 << endl;
//    int Totalocc= (value2-value1)+1;
//     cout << " Total no of  Occurrence : " << Totalocc<< endl;
//    return 0;
//}

  #include<iostream>
  using namespace std;
  int peackelement(int arr[],int size){
  	int s=0;
  	int e=size-1;
  	int mid = s + (e-s)/2;
  	while(s<e){
  		if(arr[mid]<arr[mid+1]){
  			s=mid+1;
		  }
		  else{
		  	e=mid;
		  }
		  mid = s + (e-s)/2;
	  }
	  return s;
  }
  
  int main(){
  	int arr[10]={2,4,5,6,7,8,3,1,0};
  	cout<<" peak element is : "<<peackelement(arr,10)<<endl;
  }


















