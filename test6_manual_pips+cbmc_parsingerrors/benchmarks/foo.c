#include <assert.h>
void foo(int flag, float x) { 
	int i,j=1,a=0,b=0;
	if (flag)
		i=0; 
	else 
		i=1;
	while (x>0.) { 
		a++; 
		b += (j-i); 
		i += 2;
		if (i%2==0) 
			j += 2; 
		else 
			j++;
	} 
	if (flag) 
		assert(a==b); 
}