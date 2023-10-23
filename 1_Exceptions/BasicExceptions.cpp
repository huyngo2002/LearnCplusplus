#include <iostream>
void mightGoWrong() {
	bool error = true;
	bool error1 = true;
	bool error2 = true;
	error = false;
	if (error) {
		throw "Something went wrong.";
	}
	if (error1) {
		throw std::string("Something else went wrong.");
	}
	if (error2) {
		throw 8;
	}
}
void useMightGoWrong() {
	mightGoWrong();
}
int main() {
	try {
		//mightGoWrong();
		useMightGoWrong();		
	}
	catch(int e) {
		std::cout << "Error code: " << e << std::endl;
	}
	catch(char const* e) {
		std::cout << "Error message: " << e << std::endl;
	}
	catch(std::string& e) {
		std::cout << "String error message: " << e << std::endl;
	}
	std::cout << "Still running" << std::endl;
	return 0;
}
