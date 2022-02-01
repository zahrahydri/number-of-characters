#include <iostream>
using namespace std;
 class inpstring{
     string input;
       public:
           int validication(){
                cout << "what is the input string? ";
				
        while (true) {
      	    getline(cin, input);
	       
            if (input == ""){
      			cout << "Please enter something valid and try again!" << endl;
	        }     
      
	        else if (input != ""){
	            break;
	        }
	    }
  }

        void output(){
            cout << input << " has " << input.length() << " characters." ;}
 };
int main(){
    inpstring c;
    c.validication();
    c.output();
}