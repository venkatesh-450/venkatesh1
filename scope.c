#include <stdio.h>
extern int l=3;

void fun()
{ 
    auto int i=2;
    static int j=3;
    register int k=4;
    i++;
    j++;
    k++;
    l++;
    printf("%d,%d,%d,%d\n",i,j,k,l);
}
void main(){
    fun();
    fun();
    fun();
}
