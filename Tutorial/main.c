// array as a pointer

#include <stdio.h>

int main(int argc, const char * argv[]){
    
// int a = 13, b = 5, c = 4;
 int array[5] = {1, 2, 3, 4, 5};
 char *str = "Arrays are Pointers!";
    
    puts("Array:");
    printf("%p\n", array);
    int *ptr = array;
        for(int i = 0; i < 5; i++){
            printf("%p: %d\n", ptr, *ptr);
        ptr++;
    }
    
    puts("String:");
    printf("%p\n", str);
    char *c_ptr = str;
        for(int i = 0; i < 21; i++){
            printf("%p: %c\n", c_ptr, *c_ptr);
            c_ptr++;
    }
	
	printf("Hello World\n");
	
    return 0;
}



//#include <stdio.h>
//
//int main(int argc, const char * argv[]){
//    
//    if(argc < 3){
//    printf("You need 2 arguments!\n");
//    return -1;
//    }
//    
//    printf("%s\n", argv[0]);
//    printf("%s is the %s Jedi ever!\n", argv[1], argv[2]);
//    
//    return 0;
//}


////
////  main.c
////  Tutorial
////
////  Created by Paul Yurchuk on 26.10.16.
////  Copyright © 2016 Paul Yurchuk. All rights reserved.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include "Header.h"
//
//#define kFileLocation "Data"
//
//int main(int argc, const char * argv[]) {
//    FILE *dataFile;
//    char c;
//    
//    if ((dataFile = fopen(kFileLocation, "r")) == NULL){
//        printf("FAIL");
//        exit(1);
//    }
//    
//    while ((c = fgetc(dataFile)) != EOF) {
//        printf("%c", c);
//    }
//    
//    
//    fclose(dataFile);
//    
//    return 0;
//}
