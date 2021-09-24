#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char c;
    fstream input,output;
    input.open("text.txt",ios::in);
    if(!input)
    {
        cout<<"Can not open this file!"<<endl;
    }
    output.open("textCopy.txt",ios::out);
    while(!input.eof())
    {
        input>>c;
        output<<c;
    }
    cout<<"File is copy"<<endl;
    input.close();
    output.close();
    return 0;
}
