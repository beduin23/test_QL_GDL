#include<stdlib.h>
#include<stdio.h>
#include<string.h>

#define MAX 10000
int global1, global2;

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
		int local1, local2, result;
    scanf("%d",&global1);
    scanf("%d",&global2);
    
    local1 = times(global1);
    local2 = times(global2);
    
    result = add(local1, local2);
    
    return 0;
}
