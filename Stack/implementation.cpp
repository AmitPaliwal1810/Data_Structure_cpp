#include <iostream>
using namespace std;

#define n 10

class stack
{

    int *arr;
    int top;

public:
    // constructor
    stack()
    {
        arr = new int[n];
        top = -1;
    }

    // push operation
    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Your stack is overflow" << endl;
            return;
        }

        top++;
        arr[top] = x;
    }

    // pop operation
    void pop()
    {
        if (top == -1)
        {
            cout << "Your stack is empty" << endl;
            return;
        }

        cout << "poped element is " << arr[top] << endl;
        top--;
    }

    // top / peek element
    int topElement()
    {
        if (top == -1)
        {
            cout << "No element on top, stack is empty" << endl;
            return -1;
        }

        return arr[top];
    }

    bool emptyStack()
    {
        if (top == -1)
        {
            return true;
        }
        return false;
    }
};

int main()
{

    stack st;

    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    st.pop();
    cout << st.topElement() << endl;
}