#include<iostream>
using namespace std;
int main(){
	int i,num;
	int digit=0;
	bool flag;
	
	for(int i=100;i<=400;i++){
		if(i%2==0){
			num=i;
			flag=true;
			while(num!=0){
				digit=num%10;
				num=num/10;
			if(digit%2!=0){
				flag=false;
				break;
			}
			
		}
		if(flag){
			cout<<i<<" , ";
		}
	}
}
}
