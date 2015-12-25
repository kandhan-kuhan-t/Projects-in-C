#include<stdio.h>
int main()
{
	printf("test");

	printf("\a");//produces a beep sound
	printf("\r");//returns the cursor to the start of line; previous entries in the line are erased ( test will not be output )
	printf("New content");
return 0;
}
