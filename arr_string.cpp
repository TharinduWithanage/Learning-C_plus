#include<iostream>
#include<string>
using namespace std;

int main(){
	string arr[]={"toyota", "BMW","mazda"};
	int i=0;
	while(i<sizeof(arr)/sizeof(arr[0])){
		cout<<arr[i] <<"\n";
		i++;
	}
	

	return 0;
}
