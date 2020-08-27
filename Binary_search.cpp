#include<iostream>
using namespace std;
int main(){
	// #ifndef ONLINE_JUDGE
	// freopen("start.txt","r",stdin);
	// freopen("start_out.txt","w",stdout);
	// #endif
	 int n,key,arr[1000];
	 cin>>n;
	 for(int j=0;j<n;j++){
	 	cin>>arr[j];
	 }
	 cin>>key;
	 int e=n-1;
	 int s=0;
	 while(s<=e){
	 	int mid=(e+s)/2;
	 	if(arr[mid]==key){
	 		cout<<"key is found at index "<<mid;
	 		break;
	 	}
	 	else if(arr[mid]>key){
	 		e=mid-1;
	 	}
	 	else{
	 		s=mid+1;
	 	}
	 }
	 if(s>e){
	 	cout<<"key not found";
	 }
	return 0;
}