#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int a, b;
	float kq;
	cout << "Nhap a:";cin >> a;
	cout << "Nhap b:";cin >> b;
	if (a == 0&&b == 0) 
	{
		 
			cout << "Phuong trinh co vo so nghiem" << endl;
		}
		
	else if (a == 0&&b != 0){
		
		
			cout << "Phuong trinh vo nghiem" << endl;
			}
	
	else{
	
	kq = -b/a;}
		cout << "Phuong trinh co mot nghiem la x: " << -b / a << endl;
	}0
