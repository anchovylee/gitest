#include <iostream>
using namespace std;

int main()
{
    char	str[14] = "Hello, world!";
    char*	pt;
    
    cout << str << endl;
    pt = str;			// pt¿ ¿¿ str¿ ¿¿¿
    while (*pt) {		// ¹¿¿¿¿ ¿¿ ¿¿¿ ¿¿
        if (*pt >= 'a' && *pt <= 'z')	// ¿¿¿¿ ¿¿
            *pt = *pt - 'a' + 'A';		// ¿¿¿¿ ¿¿
        pt++;			// ¿¿ ¿¿¿ ¿¿¿ ¿¿
    }
    cout << str << endl;
    return 0;
}
