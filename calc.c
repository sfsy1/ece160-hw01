nclude <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
		char c = argv[1][0];
		float a = atof(argv[2]);
		float b = atof(argv[3]);
				
		switch(c) {
			case '+':;
				float d = a + b;
				printf("i think its... %g\n",d);
				break;
			case '-':;
				float e = a - b;
				printf("oh that's easy, %g.\n",e);
				break;
			case 'x':;
				float f = a * b;
				printf("this times that... %g!\n",f);
				break;
			case '/':;
				float g = a / b;
				printf("uh... %g?\n",g);
				break;
			default:
				printf("use +, -, x, and / only!!!\n");
		}
}


