#include <iostream>
using namespace std;

int main()
{
	string a;
	cout << "Fahsai: Sawadee ka...Can you tell me your name?" << endl;
	cout << "?????: ";
    getline(cin,a);
	cout << "Fahsai: Wow!!! "<< a <<" is a really cool name." << endl;
	cout << "Fahsai: I think you are an Engineering student. What is your student ID?" << endl;
	cout << a << ": " ;
	string b;
	getline(cin,b);
	int x = int(b[0] - 48)*10 + (b[1] - 48) - 12;
	cout << "Fahsai: I think you may be GEAR "<< x <<". I have a free movie ticket for you."<< endl;
	cout << "Fahsai: Let's go to the cinema together!!!" << endl;
	cout << "Fahsai: What movie do you want to watch?" << endl;
	cout << a << ": ";
	string c;
	getline(cin,c);
	cout << "Fahsai: So....which day are you free to go with me?"<< endl;
	cout << a << ": " ;
	string d;
	getline(cin,d);
	cout << "Fahsai: "<< d <<"....that is OK!!! I'm looking forward to watching "<< c <<" with you."<< endl;
    string e;
	cout << a << ": " ;
	getline(cin,e);
	cout << "Fahsai: 555+ see you "<< d <<". Bye Bye \\(^ ^)/";
	
}