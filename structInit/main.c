


#include<stdint.h>
#include<stdio.h>

struct carModel
{
	uint8_t carSpeed;
	uint32_t carPrice;
};

int main(void)
{
	struct carModel  carBMW = {0};
	carBMW.carPrice = 1000;
	printf("Sizeof of struct carModel is %I64u\n",sizeof(struct carModel));
	printf("Car Price = %u\n", carBMW.carPrice);

    getchar();

	return 0;
}









