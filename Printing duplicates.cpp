#include<iostream>
using namespace std;
void printduplicates(int arr[],int size){
	cout<<"Duplicate elements:";
	bool found=false;
	for(int i=0;i<size;i++){
		for(int j=j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				cout<<arr[i]<<" ";
				found=true;
				break;
			}
		}
	}
	if(!found){
		cout<<"None";
	}
	cout<<endl;
}
int main(){
	int n;
	cout<<"Enter size of the array:";
	cin>>n;
	int arr[n];
	cout<<"Enter "<<n<<" elements:";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		//call function
		
	}
	printduplicates(arr,n);
}
