#include <iostream>
#include <stack>

using namespace std;

bool cekKesamaanStack(stack<int> stackKesatu, stack<int> stackKedua)
{
    if (stackKesatu.size() != stackKedua.size())
    {
        return false;
    }
    // cout << "stackKesatu.top() = " << stackKesatu.top() << endl;
    // cout << "stackKedua.top() = " << stackKedua.top() << endl;
    cout << endl;

    while (!stackKesatu.empty())
    {
        if (stackKesatu.top() != stackKedua.top())
        {
            return false;
        }
        stackKesatu.pop();
        stackKedua.pop();
    }
    return true;
}

int main()
{
    stack<int> stackKesatu;
    stack<int> stackKedua;

    stackKesatu.push(1);
    stackKesatu.push(2);
    stackKesatu.push(3);

    stackKedua.push(1);
    stackKedua.push(2);
    stackKedua.push(4);

    string outputBenar = "stack kesatu & stack kedua nilainya sama";
    string outputSalah = "stack kesatu & stack kedua nilainya tidak sama/berbeda";

    if (cekKesamaanStack(stackKesatu, stackKedua))
    {
        cout << outputBenar << endl;
    }
    else
    {
        cout << outputSalah << endl;
    }

    cekKesamaanStack(stackKesatu, stackKedua);
    return 0;
}
