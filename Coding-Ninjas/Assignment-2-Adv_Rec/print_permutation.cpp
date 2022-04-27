#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void printPermutations1(string input,string output){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    if(input=="")
    {
        cout<<output<<endl;
        return;
    }
    for(int i=0;i<input.size();i++)
    {
        printPermutations1(input.substr(1),output+input[0]);
        rotate(input.begin(),input.begin()+1,input.end());
    }
}
void printPermutations(string input){

    	/* Don't write main() function.
	 * Don't read input, it is passed as function argument.
	 * Print output as specified in the question
	*/
    string output="";
    printPermutations1(input,output);
}

int main()
{
    string input;
    cin>>input;
    printPermutations(input);
}
