#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main(){
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++)
		prisoners[i] = i + 1;

	int *killerPtr = &prisoners[0];

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
        int live = numPrisoners-i;
        
        for(int j = 0; j < m-1; j++){
            if (*killerPtr == 0) {
                killerPtr = &prisoners[0];
                j--;
            }else{
                killerPtr++;
            }
            
            if (killerPtr > &prisoners[live] || *killerPtr == 0){
                killerPtr = &prisoners[0];
            }
        }

		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners, *killerPtr);
	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
}

void removeKilled(int *array, int size, int killedPrisoner){
    for(int i = 0; i < size-1; i++,array++){
        if (*array == killedPrisoner){
            int tmp = *array;
            *array = *(array+1);
            *(array+1) = tmp;
        }
    }
    *array = 0;
}