
#include <iostream>

using namespace std;

int main()
{
    
string name;
getline(cin,name);



cout<<"Fahsai: Sawadee ka...Can you tell me your name?\n";
cout<<"?????: Fahsai: Wow!!! "<<name<< " is a really cool name.\n";

cout<<"Fahsai: I think you are an Engineering student. What is your student ID?\n";
int ID;
cin >> ID;
cin.ignore();
int id=(ID/10000000)-12;
cout<<name<<": Fahsai: I think you may be GEAR "<< id <<". I have a free movie ticket for you.\n";
cout<<"Fahsai: Let's go to the cinema together!!!\n";
cout<<"Fahsai: What movie do you want to watch?\n";
string movie;
getline(cin,movie);
cout<<name<<": Fahsai: So....which day are you free to go with me?\n";
string day;
getline(cin,day);
cout<<name<<": Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watching "<<movie<<" with you.\n";

cout<<name<<": Fahsai: 555+ see you "<<day<<". Bye Bye "<< '\\'<<"(^ ^)/\n";


    return 0;
}
