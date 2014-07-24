// practise c.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include<iostream>
using namespace std;

class haspmap{
	
	int tempint[256];
	public:
		void hashmap(){
			for(int i=0;i<256;i++)
				tempint[i]=0;
		}
		int domap(char x){
			if(tempint[x]==1)
				return 0;
			return tempint[x]=1;
		}

};
haspmap obj;
string q2(string s);
void q3();
void q4();
void q5(string s);
int _tmain(int argc, _TCHAR* argv[])
{
	int temp;
	q5("hello ramesh");
	
	cin>>temp;
	return 0;

	
 
 
}
//page 48 1.1 find chara in string are unique or not
void q1()
{
	char temp[20];
	cin>>temp;
	
	for(int i=0;temp[i]!=NULL;i++)
	{

		if(!obj.domap(temp[i]))
			printf("Not unique");



		/*for(int j=i+1;temp[j]!=NULL;j++)
			if(temp[i]==temp[j])
				*/
	}
	cout<<"\nunique";

}



//page 48 1.2 reverse a string
string q2(string s)
{
	
	char temp;//printf("%s",s);
	//scanf("%s",s);
	for(int i=0,j=s.length()-1 ;i <s.length()/2 ;i++ ,j--)
	{
		temp = s[i];
		s[i]=s[j];
		s[j]=temp;
	}
	//working but print else
	return s;
}

void  q3()
{
	char temp[20];
	cin>>temp;
	
	for(int i=0;temp[i]!=NULL;i++)
	{

		



	}
	cout<<"\nunique";

}

void q4()
{
	string s = "";
	string x=q2(s);
	int num = s.compare(x);
	if(num==0)
		printf("anagram");
	else
		printf("no anagram");
}
void q5(string s)
{
	for(int i=0;i<s.length();i++)
		if(s[i]==' ')
			s[i]='%20';
	printf("%s",s);
}
void q6(){}


void printmatrix(int x[][10],int m,int n)
{
	for(i=0;im;i++)
		for(j=0;j<n;j++)
			printf("\t")
	
}

void q7()
{}
