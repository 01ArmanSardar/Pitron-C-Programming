#include <stdio.h>
void fun (int x)
{
    x=90;
    printf("fun x er address %p\n",&x);
}
int main() // Main function ar x  abong fun function er x kintu alada 2 ta variable
{
    int x=10 ;//main er x er vlaue tah fun er x a pass hoice bah copy hoiche ar tai  a k bolah hoi call by value
    printf("main er x er address %p\n",&x);
    fun (x);
    printf("main er x er value %d",x);
}
