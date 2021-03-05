#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define MAX 10000
int global;

int getInput() {
	scanf("%d",&global);
	return global;
}
int add(int param1, int param2){
	return param1+param2;
}

int checkfunc( int param3) {
	if(param3 < MAX) return param3;
	else return MAX;
}

int times(int param4){ 
	int temp = checkfunc(param4);
	return 10*temp;
}

int main() {
		int input1, input2, local1, local2, result;
    input1 = getInput();
    input2 = getInput();    
    
    local1 = times(input1);
    local2 = times(input2);
    
    result = add(local1, local2);
    printf("Result is %d\n", result);
    
    return 0;
}
