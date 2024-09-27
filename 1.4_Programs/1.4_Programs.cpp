// Write a program that mimics a calculator. The program should take as input two
//integers and the operation to be performed.It should then output the numbers, the
//operator, and the result.For division, if the denominator is zero, output an
//appropriate message.Limit the supported operations to + -/ *and write an error
//message if the operator is not one of the supported operations.


using namespace std;
#include <iostream>


int main()
{
    double num1;
    double num2;
    char operand;
    char repeat;
    repeat = 'y';

    

    while (repeat == 'y' || repeat == 'Y')
    {
       cout << "Please enter the first number:" << endl;
    cin >> num1;
    cout << "Please choose a operand: + - / * " << endl;  
    cin >> operand;
    cout << "Please enter the second number:" << endl;
    cin >> num2;
        
        switch (operand)
        {
        case '+':
            cout << "the result of adding " << num1 << " and " << num2 << " is " << num1 + num2 << endl;
            break;
        case '-':
            cout << "the result of subtracting " << num2 << " from " << num1 << " is " << num1 - num2 << endl;
            break;
        case '/':
            if (num2 == 0)
            {
                cout << "you will have to try harder than that dave, I am not going to explode just because you ask me to divide by zero." << endl;
                break;
            }
            else
            {
                cout << "the result of dividing " << num1 << " by " << num2 << " is " << num1 / num2 << endl;
                break;
            }
        case '*':
            cout << "the result of multiplying " << num1 << " by " << num2 << " is " << num1 * num2 << endl;
            break;
        default:
                cout << "please enter a valid operand." << endl;
        }
        cout << "do you want to continue? y/n" << endl;
        cin >> repeat;
    }
}