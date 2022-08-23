//The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.

// Input Format
// Input will contain two integers,  and , separated by a newline.

// Sample Input
// 4
// 5

// Sample Output
// 9
// 1

#include <stdio.h>
#include <cstdlib>
void update(int *a,int *b) {
    // Complete this function 
    int a1,b1; 
    a1 = *a + *b;
    b1= *a - *b;
    *a=a1;
    *b=b1;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, abs(b));

    return 0;
}