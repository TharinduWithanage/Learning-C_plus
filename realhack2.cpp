#include<iostream>
#include<string>
using namespace std;

int main()
{
	int num,left=0,right=0;
	cin>> num;
	int h[num], p[num];
	for(int i=0; i<num; i++)
	{
		cin>> p[i];
	}
	
	for(int i=0; i<num; i++)
	{
		cin>> h[i];
	}
	
	for(int i=0; i<num; i++)
	{
		if(h[i]>=p[i+1]-p[i])
		{
			left++;
		}
	}
	
	for(int i=num-1; i>=0; i--)
	{
		if(h[i]>=p[i]-p[i-1])
		{
			right++;
		}
	}
	
	if(right==num && left==num)
	{
		cout<<"BOTH";
	}
	else if(right==num){
		cout<<"RIGHT";
	}
	else if(left==num){
		cout<<"LEFT";
	}
	else{
		cout<<"NONE";
	}
	
	return 0;
	
}
