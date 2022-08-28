#include <iostream>

using namespace std;


void fun(){
    int a;
    if(cin >> a)
        if(a==0)   
            return; 
        else{
            fun();
            cout << a << " ";
        }
}

int main(){
    fun();
	return 0;
}