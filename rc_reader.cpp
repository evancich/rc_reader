#include <stdio.h>

#include "regsgpt.h"

int main(void)
{
	int count = 0;
	while(1)
	{
		printf("%d", count);
		HW_GPT_OCR1_WR(HW_GPT_OCR1_RD());
		printf("%d", count++);
	}
	return 0;
}

