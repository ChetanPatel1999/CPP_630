// multiple catch block
#include <iostream>
using namespace std;
int main()
{
    float f = 89.70;
    try
    {
        throw 67;
    }
    catch (const char*)
    {
        cout << "string catch block run" << endl;
    }
    catch (char c)
    {
        cout << "char catch block run" << endl;
    }
    catch (float g)
    {
        cout << "float catch block run" << endl;
    }
    catch (...)
    {
        cout<<"default catch block run"<<endl;
    }
    printf("after catch block st1\n");
    printf("after catch block st2\n");
    printf("after catch block st3\n");
    return 0;
}