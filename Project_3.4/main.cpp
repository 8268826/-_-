#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char c;
    fstream input,output;
    input.open("text.txt",ios::in);
    output.open("textCopy.txt",ios::out);
    while(!input.eof())
    {
        input>>c;
        if(c>=47&&c<=57)
        {
            output<<c;
        }
    }
    input.close();
    output.close();
    return 0;
}
