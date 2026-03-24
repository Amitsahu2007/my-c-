/*#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the numbers:\n";
    cin >> a >> b;
    int sum = a + b;
    cout << sum << endl;

    cout << "Enter the character:" << endl;
    cin.ignore();        // ignore the leftover newline
    int ch = getchar(); // now getchar() will wait for fresh input
    cout << ch;

    return 0;
}*/
//THERE IS NO NEED TO TYPE CAST THE DATATYPE TO STORE A CHARACTER IN A INT DATATYPE BCZ SIZE OF INTEGER IS SMALL SO IMPLICIT CONVERSION IS TAKING PLACE BUT IF WE ARE GOING TO STORE INT IN CHAR THEN WE HAVE TO OTYPE CAST THE DATATYPE */
/*#include<iostream>
using namespace std;
int main(){
    char amit='a';//implicit conversion
    int sahu=amit;
    cout<<sahu;
    return 0;
}
//but we need to type cast when store the double data in int datatype  */
// #include<iostream>
// using namespace std;
// int main(){
//     bool amit=true;// behave true as a number ok true->1 false->0
//     cout <<amit;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     cout<<7*3<<endl;
//     return 0;
// }
//single equal to is used to assign the value to a variable and double equal to is used to check the value 
//any non zero no represent true of statement and 0 for false statement 
//logicall or operator  or double pipe operator ||
//and operator is double amperesand && and not operator is ! unary operaor and binary operator incremrnt and decrement operator
#include<iostream>
using namespace std;
int main(){
    char amit;
    cout<<"enter the character:\n";//implicit conversion
    cin>>amit;
    int x=amit;
    if(amit<97){
        cout<<"upper case letter\n";
    }
    else{
        cout<<"lower case letter";
    }

    return 0;
}
//for loop syntax for(initialisation;condition;updation){
//} we can initialize and declare simulstenously inside the for loop 