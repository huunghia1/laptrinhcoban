#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c,max;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap b = ";cin>>b;
	cout<<"nhap c = ";cin>>c;
	if(a>=b&&a>=c) max=a;
	if(b>=a&&b>=c) max=b;
	if(c>=a&&c>=a) max=c;
	cout<<" so lon nhat la = "<<max<<endl;
}
	
	
