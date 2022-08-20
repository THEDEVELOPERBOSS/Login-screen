#include<iostream>
#include<string> 
using namespace std;

int main() {
	// these are the variables
	string user1 = "Cheese"; 
	string user2 =  "Falcon"; 
	string username = "default"; 
	string passwd = "default"; 
	string passwd1 = "default"; 
	string passwd2 = "default"; 
	// this will ask the user for their username and password
	
	std::cout << "Enter you username.\n";
	std::cin >> username;

	if ((username.compare(user1) == 0) || (username.compare(user2) == 0)) 
	{ 
	
		std::cout << "Now enter your password\n";
		std::cin >> passwd;
	
		if (username.compare(user1) == 0) 
		{
			passwd1 = passwd;
			cout << "user" << user1 << "has a password of" << passwd1 << endl;
		}
		else {
			passwd2 = passwd; 
			cout << "user" << user2 << "has a password of" << passwd2 << endl; 
		}
	}
		


		
}
