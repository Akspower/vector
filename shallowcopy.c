//Problem Arises: Only when the structure contains pointers and the pointed-to data is dynamically allocated (e.g., using malloc, strdup).

#include <stdio.h>
typedef struct vehicle {
    int *petrol;
} veh;

int main() {
veh v1;

int p=23;
v1.petrol=&p;

 veh v2=v1;
 *v2.petrol=46;
 
 printf("%u\n",v1.petrol);
 printf("%u\n",v2.petrol);
 
 
 printf("%u\n",*v1.petrol);
 printf("%u\n",*v2.petrol);
}

// #include <stdio.h>

// typedef struct vehicle {
//     char *name;
//     int *petrol;
// } veh;

// int main() {
//     veh v1;
//     char name[] = "Car"; // String for name
//     int p = 23;         // Integer for petrol
//     v1.name = name;     // v1.name points to "Car"
//     v1.petrol = &p;     // v1.petrol points to p

//     veh v2 = v1;        // Shallow copy

//     v2.name[0] = 'T';   // Modify shared string: "Car" becomes "Tar"
//     *v2.petrol = 46;    // Modify shared int: 23 becomes 46

//     printf("v1: %s, %d\n", v1.name, *v1.petrol); // Prints: Tar, 46
//     printf("v2: %s, %d\n", v2.name, *v2.petrol); // Prints: Tar, 46
// }



// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// typedef struct {
//     char *name;
//     int age;
// } Person;

// void shallow_copy_example() {
//     Person original;
//     original.name = malloc(10);
//     strcpy(original.name, "John");
//     original.age = 30;
    
//     // Shallow copy
//     Person copy = original;
    
//     printf("Original: %s, %d\n", original.name, original.age); // John, 30
//     printf("Copy: %s, %d\n", copy.name, copy.age);             // John, 30
    
//     // Modifying the copy affects the original!
//     strcpy(copy.name, "Mike");
//     copy.age = 40;
    
//     printf("After modification:\n");
//     printf("Original: %s, %d\n", original.name, original.age); // Mike, 30
//     printf("Copy: %s, %d\n", copy.name, copy.age);             // Mike, 40
    
//     free(original.name); // Only need to free once since both point to same memory
// }