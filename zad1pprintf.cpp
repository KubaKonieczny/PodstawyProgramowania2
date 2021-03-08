#include<iostream>
#include <pprintpp.hpp>

using namespace std;

struct ulamek{

	int a;
	int b;
};

void print(int n){
	pprintf("{}",n);
}

void print(double n){
	pprintf("{}",n);
}


void print(...){
}


void print(string *text){
	pprintf("{s}", text)
}

void print(ulamek &ulamek){
	pprintf("{}\n",ulamek.a);
	pprintf("{}\n",ulamek.b);
}

void print(int arr[], int n){
	for(int i=0; i<n; i++){
		pprintf("{ }",arr[i]);
	}
}

void print(int (&arr)[5]){
	pprintf("{}",arr);
}

int main()
{
        ulamek ul;
        ul.a=5;
        ul.b=6;
       print(ul);




	return 0;
}
