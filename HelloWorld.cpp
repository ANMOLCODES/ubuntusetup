#include<iostream>
using namespace std;

int main(){
	int n, ans=1;
	cout<<"Enter a number ";
	cin>>n;
	for(int i=1;i<=n;i++){
		ans *= i;
	}
	cout<<"Factorial is: "<<ans<<endl;
	cout<<"Yup, this is the output, all this just for a test"<<endl;
}
