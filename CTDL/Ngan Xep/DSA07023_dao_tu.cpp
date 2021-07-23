// using namespace std;
// #include <iostream>
// #include <string>
// #include <vector>
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         char x;
//         cin >> x;
//         string s;
//         getline(cin, s);
//         s = x + s;
//         vector<string> v;
//         int pos = 0;
//         while ((pos = s.find(" ")) != string::npos)
//         {
//             string ch = s.substr(0, pos);
//             v.push_back(ch);
//             s.erase(0, pos + 1);
//         }
//         v.push_back(s);
//         for (int i = v.size() - 1; i >= 0; i--)
//             cout << v[i] << " ";
//         cout << endl;
//     }
// }
string expand(const char *input)
{
    int i = 0;
    stack<char> stack;

    while (input[i] != '\0')
    {
        if (input[i] != ']')
        {
            stack.push(input[i]);
        }
        else
        {
            string temp;
            while (!stack.empty() && (stack.top() != '['))
            {
                temp += stack.top();
                stack.pop();
            }
            stack.pop();
            string repeat;
            while (!stack.empty() && isdigit(stack.top()))
            {
                repeat.insert(repeat.begin(), stack.top());
                stack.pop();
            }

            for (int rep = atoi(repeat.c_str()); rep > 0; rep--)
            {
                for (int j = temp.size() - 1; j >= 0; j--)
                {
                    stack.push(temp[j]);
                }
            }
        }
        i++;
    }

    string output;
    while (!stack.empty())
    {
        output.insert(output.begin(), stack.top());
        stack.pop();
    }
    return output;
}
void main()
{
    const char *input = "2[A3[b2[c1[d]]]e]"; // Abcdcdbcdcdbcdcde
    const char *input2 = "3[b2[ca]]";        // Abcdedef

    cout << "input1 : " << input << endl;
    cout << "output1 : " << expand(input) << endl;
    cout << "input2 : " << input2 << endl;
    cout << "output2 : " << expand(input2) << endl;

    return;
}