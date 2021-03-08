#define FMT_HEADER_ONLY
#include<fmt/format.h>
#include<fmt/ranges.h>
#include<pprintpp.hpp>
using namespace std;

struct ulamek{

	int a;
	int b;
};

void print(int n){
	fmt::print("{}",n);
}

void print(double n){
	fmt::print("{}",n);
}


void print(...){
}




int main()
{
        ulamek ul;
        ul.a=5;
        ul.b=6;
        int x[5]={8,7,5,4,8};
        //fmt::print("{}",x);
        //print(ul);
        std::array<int, 3> arr = {1,2,3};
        fmt::print("{}",arr);


	return 0;
}
