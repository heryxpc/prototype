#include "pagai_assert.h"
int main() {
	int x = 0;
	int y = 0;
	/* reachable */
	while (1) {
		if (/* invariant:
		    102-x-y >= 0
		    y >= 0
		    x-y >= 0
		    */
		    x <= 50)  {
			y++;
		} else y--;
		if (y < 0) break;
		x++;
	}
	/* assert OK */
	assert(x+y<=101);
	/* assert OK */
	assert(x <= 102);
/* reachable */
}
