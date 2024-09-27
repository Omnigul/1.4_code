// Write a program that mimics a calculator. The program should take as input two
//integers and the operation to be performed.It should then output the numbers, the
//operator, and the result.For division, if the denominator is zero, output an
//appropriate message.Limit the supported operations to + -/ *and write an error
//message if the operator is not one of the supported operations.
//do this but use a nested if loop

#include <iostream>
using namespace std;

int main()
{
    char repeat;
    repeat = 'y';
    double num1;
    double num2;
    char operand;


    while (repeat == 'y' || repeat == 'Y')
    {


        cout << "please enter the first number:" << endl;
        cin >> num1;
        cout << "choose a operand: + - / *" << endl;
        cin >> operand;
        cout << "please enter the second number." << endl;
        cin >> num2;

        if (operand == '+')
        
            cout << "the result of adding " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
        
        else if (operand == '-')
        
            cout << "the result of subtracting " << num2 << " from " << num1 << " is " << num1 - num2 << endl;
        
        else if (operand == '/')
        
            if (num2 == 0)
            
                cout << "i'm sorry dave, I can't do that.";
            
            else
            
                cout << "the result of dividing " << num1 << " by " << num2 << " is " << num1 / num2 << endl;
            
        
        else if (operand == '*')
        
            cout << " the result of multiplying " << num1 << " by " << num2 << " is " << num1 * num2 << endl;
        
        else
        
            cout << "please enter a valid operand.";
        
        cout << "do you want to continue? y/n" << endl;
        cin >> repeat;
    }
}
