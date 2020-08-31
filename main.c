/******************************************************************************
Author: A. Saddik
string calculator (addition and substraction)

*******************************************************************************/

#include "calculator.h"

int main()
{
	int ret;
    char ** my_input = (char**)malloc(sizeof(char));
    while(1){
    	/*communicate with the user and read the input from the terminal*/
		print_func(my_input);
		/*check if the input has invalid chars*/
		if(check_str(my_input[0])){
			printf("please check your input, it seems you entered an invalid expression\n");
			break;
		}
		/*if the user inserted 'q', the program should close*/
		if(!strncmp(my_input[0], "q", 1)){
			printf("quit the program\n");
			break;
		}
		/*parse the input and output the result*/
		ret = string_parse(my_input);
		if(ret){
			return ret;
		}
    }
    free(my_input);
    return 0;
}





