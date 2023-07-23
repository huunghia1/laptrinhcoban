#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a,b,c,max,min;
	cout<<"nhap a = ";cin>>a;
	cout<<"nhap b = ";cin>>b;
	cout<<"nhap c = ";cin>>c;
	if(a>=b&&a>=c) max=a;
	if(b>=a&&b>=c) max=b;
	if(c>=a&&c>=a) max=c;
	if(a<=b&&a<=c) min=a;
	if(b<=a&&b<=c) min=b;
	if(c<=a&&c<=a) min=c;
	cout<<" so lon nhat la = "<<max<<endl;
	cout<<" so nho nhat la = "<<min<<endl;
}
	
	
