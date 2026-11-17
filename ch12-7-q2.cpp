/*
What’s wrong with this snippet of code?

int v1{ 45 };
int* ptr{ &v1 }; // initialize ptr with address of v1

int v2 { 78 };
*ptr = &v2;     // assign ptr to address of v2

*/

/*
The statement "*ptr = &v2" is copy assigning a dereferenced pointer value 
to the address of v2 - which does not make sense. 

To assign the value of ptr to v2, the expression should be
ptr = &v2
So that the memory address of ptr is updated to that of v2. 
*/