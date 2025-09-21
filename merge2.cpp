#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n1;
	cout<< "Enter size of first array: ";
	cin>>n1;
	vector<int> arr1(n1);
	cout<<"Enter "<<n1<<" sorted elements: ";
	for(int i=0;i<n1;i++){
		cin>>arr1[i];
	}
	int n2;
	cout<<"Enter size of second array: ";
	cin>> n2;
	vector<int> arr2(n2);
	cout<<"Enter "<<n2<<" sorted Elements:";
	for(int i=0;i<n2;i++){
	cin>>arr2[i];
    }
    vector<int>merged_array(n1+n2);
    int i=0;
    int  j=0;
    int k=0;
    while(i<n1 && j<n2){
    	if(arr1[i]<=arr2[j]){
    		merged_array[k++]=arr1[i++];
		}else{
			merged_array[k++]=arr2[j++];
		}
	}
    while(i<n1){
    	merged_array[k++]=arr1[i++];
	}
	while(j<n2){
		merged_array[k++]=arr2[j++];
	}
	cout<<"\nMerged sorted array:";
	for(int i=0;i<merged_array.size();i++){
		cout<<merged_array[i]<<" ";
	}
	cout<<endl;
}

