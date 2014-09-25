#include <iostream>
#include <sstream> 

using namespace std; 

int fib(int n){
	if (n == 0){
		return 0;
	}
	else if (n == 1){
		return 1;
	}
	else {
		return fib(n-1) + fib(n-2);
	}
}

const void display_fib(const int n){
	for (int i = 0; i <= n; i++){
		if (i == n){
			cout << fib(i) << "\n"; 
		} else {
			cout << fib(i) << ", "; 
		}
	}
}

int main(int argc, char * const argv[]){
	
	if (argc != 2){
		cerr << "Error. Usage: " << argv[1] << " <number>\n"; 
	}
	
	int num; 
	
	istringstream iss(argv[1]);
	if (!(iss >> num)) {
		cerr << "Error. Input must be a positive integer.\n"; 
		return 1; 
	} 
	if (num <= 0){
		cerr << "Error. Input must be a positive integer.\n";
		return 1; 
	}
	
	cout << "Fibbonacci numbers up to: " << num << endl; 
	display_fib(num);
	
}