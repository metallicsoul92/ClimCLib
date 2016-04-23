#include "utility/general.h"
#include <time.h>

void swapPointers(void *a,void *b){
	void *temp;
	temp = a;
	a = b;
	b = temp;
	}
