#include<iostream>
#include<string>
using namespace std;
void removeChar(string &s,char c){
	string temp="";
	for(int i=0;i<s.length();i++){
		if(s[i]!=c)  //keep all characters except c
		temp=temp+s[i];
	}
	s=temp;     //update original string
}
int main(){
	string str;
	char ch;
	
	cout<<"Enter a String :";
	getline(cin,str);
	
	cout<<"Enter characters to remove:";
	cin>>ch;
	
	removeChar(str,ch);
	
	cout<<"String after removal:"<<str<<endl;
	return 0;
	
}
