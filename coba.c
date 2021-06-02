#include<stdio.h>
#define MAX_RESOURCES 5
int available_resources = MAX_RESOURCES;
    mutex.lock()
    int decrease_count (int count) {
	if (available_resources < count)
	    mutex.unlock()
	    decrease_count(count);
	else{
	    mutex.lock()
	    available_resources -= count;
   	    mutex.unlock()
	    return 0;
	}
}

int increase_count(int count){
    mutex.lock()
    if available_resources + count <= MAX_RESOURCES
	available_resources += count;
    else
	throw an error
    mutex.unlock()
    return 0;
}

int main()
	decrease_count(available_resources);
	if(available_resources == 0){
		increase_count(available_resources);
		printf("available_resources= %d \n", available_resources);
	}
}
