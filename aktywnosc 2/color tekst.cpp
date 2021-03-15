#include<iostream>
#include<color.hpp>

using namespace std;
int main()
{
    //dye::on_light_aqua ("aa")
    cout <<dye::aqua("\"Talk is cheap. Show me the code.\"")<<endl;
    cout<<dye::yellow("~Linus Torvalds")<<endl<<endl;


     cout <<dye::red("\"Truth can only be found in one place: the code.\"")<<endl;
     cout<<dye::blue_on_yellow("~Robert C. Martin")<<endl<<endl;


     cout <<dye::bright_white("\"It is not enough for code to work.\"")<<endl;
     cout<<dye::light_purple_on_yellow("~Robert C. Martin")<<endl<<endl;

     cout <<dye::light_blue("\"There are only two kinds of languages: the ones people complain about and the ones nobody uses.\"")<<endl;
     cout<<dye::light_yellow("~Bjarne Stroustrup")<<endl<<endl;

     cout <<dye::light_green("\"There are only two things wrong with C++: The initial concept and the implementation.\"")<<endl;
     cout<<dye::vanilla("~Bertrand Meyer")<<endl<<endl;


     cout <<dye::yellow("\"Leave the code cleaner than you found it.\"")<<endl;
     cout<<dye::blue("~Robert C. Martin")<<endl<<endl;


    return 0;
}
