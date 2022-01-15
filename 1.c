#include <windows.h>
#include <stdio.h>
int main(void)
{
  for(;;)
  {
    int a;
    scanf_s("%d",&a);
    printf("enter a to quit");
    if(GetAsyncKeyboard(a))
    {
      break;
    }
  }
  printf("%d\n",a);
  printf("hello");
  return 0;
}

