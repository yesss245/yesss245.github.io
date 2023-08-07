// Q_5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stdlib.h>
#include <stack>
using namespace std;

class TwoStack {
    int* arr;
    int size;
    int top1, top2;

    public:
        TwoStack(int n) // constructor
        {
            size = n;
            arr = new int[n];
            top1 = -1;
            top2 = size;
        }

        // Method to push an element a to stack1
        void push1(int a)
        {
            // There is at least one empty space for new element
            if (top1 < top2 - 1) {
                top1++;
                arr[top1] = a;
            }
            else {
                cout << "Stack Overflow";
                exit(1);
            }
        }

        // Method to push an element a to stack2
        void push2(int a)
        {
            // There is at least one empty
            // space for new element
            if (top1 < top2 - 1) {
                top2--;
                arr[top2] = a;
            }
            else {
                cout << "Stack Overflow";
                exit(1);
            }
        }

        // Method to pop an element from first stack
        int pop1()
        {
            if (top1 >= 0) {
                int a = arr[top1];
                top1--;
                return a;
            }
            else {
                cout << "Stack UnderFlow";
                exit(1);
            }
        }

        // Method to pop an element from second stack
        int pop2()
        {
            if (top2 < size) {
                int a = arr[top2];
                top2++;
                return a;
            }
            else {
                cout << "Stack UnderFlow";
                exit(1);
            }
        }
};
int main()
{
    TwoStack twostack(5);
    twostack.push1(5);
    twostack.push2(10);
    twostack.push2(15);
    twostack.push1(11);
    twostack.push2(7);
    twostack.push2(40);
    cout << "Pop in stack1 is = "
        << ts.pop1() <<endl;
    
    cout << "Pop in stack2 is = "
        << ts.pop2();
    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
