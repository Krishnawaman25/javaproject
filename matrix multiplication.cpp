#include<iostream>
using namespace std;
int main(){
	int A[3][3],B[3][3],c[3][3];
	cout<<"Enter 9 numbers for first matrix:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>A[i][j];
		}
	}
		cout<<"Enter 9 numbers for second matrix:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>B[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=0;
			for(int k=0;k<3;k++){
				c[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
	cout<<"Result matrix:\n";
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<c[i][j]<<" ";
		cout<<"\n";
		}
	}
	
}
