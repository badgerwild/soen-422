#include <stdio.h>
#include <stdint.h>
#include "bsl_MM.h"
#include "hal_MM.h"

//Test file for what I have of my implementation, missingthe get address function so it is commented out here.
//I didn't get to this in the lab, and unfortunatly we only had one lab for this assignment
void hal_MM_PrintByteMap(void) {
    uint16_t n;

    printf("byteMap:");
    for ( n = 0; n < ByteMapSize; n++)
        printf("%d ", byteMap[n]);
    printf("\n");
}

uint8_t* mp[10];

void main(int argc, char* argv[]) {
    hal_MM_Init();
    hal_MM_PrintByteMap();

    mp[0] = hal_MM_GetSegment(106);
    hal_MM_PrintByteMap();
 //   printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[1] = hal_MM_GetSegment(143);
    hal_MM_PrintByteMap();
    //   printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[2] = hal_MM_GetSegment( 34);
    hal_MM_PrintByteMap();
    // printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[3] = hal_MM_GetSegment(213);
    hal_MM_PrintByteMap();
    // printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[4] = hal_MM_GetSegment( 42);
    hal_MM_PrintByteMap();
    // printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[5] = hal_MM_GetSegment(215);
    hal_MM_PrintByteMap();
    // printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());
    mp[6] = hal_MM_GetSegment(15);
    hal_MM_PrintByteMap();
    // printf("main:FreeBlocks[%u]\n---\n", bsl_MM_GetNumberOfFreeBlocks());

    printf("main:** Start freeing segments and defragmentation\n");
    for (int n = 0; n < 7; n++) {
        printf("\nmain:** Free segment #%d\n", n);
        hal_MM_FreeSegment(mp[n]);
        hal_MM_PrintByteMap();
        //  printf("main: Before defrag - FreeBlocks[%u]\n", bsl_MM_GetNumberOfFreeBlocks());
       // hal_MM_Defrag();
        hal_MM_PrintByteMap();
        // printf("main: After  defrag - FreeBlocks[%u]\n", bsl_MM_GetNumberOfFreeBlocks());
    }
    // printf("\nmain: Exit - FreeBlocks[%u]\n", bsl_MM_GetNumberOfFreeBlocks());
    return 0;
}
