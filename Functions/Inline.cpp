#include <iostream>

using namespace std;
/*
INLINE FUNCTION :
inline keyword is used to suggest to the compiler that
a particular function should be inlined. Inlining a function
means that the function's code is inserted directly into
the calling code, rather than being called through a function call.
*/
inline int product(int, int);

int main()
{
    int a, b;
    cout << "Enter value of a and b : " << endl;
    cin >> a >> b;

    cout << "Product of two numbers is : " << product(a, b);
    return 0;
}

inline int product(int a, int b)
{
    return a * b;
}

/*
NOTE : 
Inline functions are generally recommended for small, 
frequently called functions. However, using them 
excessively or for large functions may lead to code
 bloat, where the size of the compiled code increases,
  potentially impacting performance.
*/