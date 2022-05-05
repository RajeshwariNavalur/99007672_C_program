/**
 * @file name.h
 * @author Rajeshwari Navalur (rajeshwarinavalur31.com)
 * @brief : Sum of Characters in a given name
 * @version 0.1
 * @date 2022-05-05
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include "name.h"

int char_sum(union my_name name)
{
int sum=0;
for(int i=0;name.ch[i]!='\0';i++)
	 {
     sum=sum+name.integer[i];
     }
    return sum;

}
