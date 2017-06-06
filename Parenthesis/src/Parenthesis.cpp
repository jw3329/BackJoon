#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    int T;
    cin >> T;

    for(int i=0;i<T;i++)
    {
        stack<int> s;

        string str;
        cin >> str;
        int flag = 0;
        for(size_t j=0;j<str.length();j++)
        {
            if(str[j] == '(')
                s.push(1);
            else if(str[j] == ')')
            {
                if(!s.empty())
                    s.pop();
                else
                {
                    cout << "NO" <<endl;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag == 1)
            continue;
        if(s.empty())
            cout << "YES" <<endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
