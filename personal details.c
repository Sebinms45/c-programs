#include <stdio.h>
#include <string.h>
#define C_SIZE 50
union Address
{
    char name[C_SIZE];
    char hname[C_SIZE];
    char cityname[C_SIZE];
    char state[C_SIZE];
    char pin[C_SIZE];
};

int main()
{
    union Address record1;

    printf("Enter name:");
    scanf("%s",record1.name);
    getchar();
    printf(" Name          : %s \n", record1.name);

    printf("Enter house name:");
    scanf("%s",record1.hname);
    getchar();
    printf(" House Name    : %s \n", record1.hname);

    printf("Enter city name:");
    scanf("%s",record1.cityname);
    getchar();
    printf(" City Name       : %s \n", record1.cityname);

    printf("Enter state name:");
    scanf("%s",record1.state);
    getchar();
      printf(" State name    : %s \n", record1.state);

    printf("Enter pin:");
    scanf("%s",record1.pin);
    printf(" Pin       : %s \n\n", record1.pin);
}
