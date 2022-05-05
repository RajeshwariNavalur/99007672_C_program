#include<stdio.h>
#include"stdint.h"

union my_name {
   uint8_t integer[20];
   char ch[20];
   
};
int char_sum(union my_name name)
{
int sum=0;
for(int i=0;name.ch[i]!='\0';i++)
	 {
     sum=sum+name.integer[i];
     }
    return sum;

}
int main()
{ 
	union my_name name;
	int s;
	 scanf("%s",&name.ch);
     s=char_sum(name);
	 printf("sum=%x\n",s);
	 
	return 0;
}