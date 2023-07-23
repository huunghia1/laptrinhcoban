
#include <iostream>
using namespace std;

int main(){
    char chr;//cau nay em tham khao tren mang su dung ham tolower de chuyen chu in HOA thanh chu THUONG va ham toupper chuyen chu THUONG thanh in HOA

    chr = tolower('H');
    cout <<chr; //h

    chr = tolower('A');
    cout << chr; //a

    chr = toupper('h');
    cout <<  chr; //a

    chr = toupper('a');
    cout <<  chr; //8
    
    return 0;
}
