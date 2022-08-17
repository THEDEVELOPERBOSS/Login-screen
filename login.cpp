#include<iostream>

int main() {
	// these are the variables
	int user1 = 0; 
	int user2 =  0; 
	int username = 0; 
	int passwd = 0; 
	int passwd1 = 0; 
	int passwd2 = 0; 
	// this will ask the user for their username and password
	
	std::cout << "Enter you username\n";
	std::cin >> username;
	//this will ask for the first users username and password
	
	if (username == user1) {
		
		std::cout << "Now enter your password\n"; 
		std::cin >> passwd;
		
	}
		else if (passwd == passwd1){
			std::cout << "Access Granted\n";
			}
		else {
			std::cout << "Get out you hacker\n";
			}
		


		
}
