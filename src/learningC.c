#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

#define PI 3.141516;



int sigmaMale(int num, int k, int n)
{
  while(k<n-1)
  {
    printf("%d\n",num);
    num+=num;
    k++;
  }

  return num;
}

void decompose(double x, long *int_part, double *frac_part)
{
  *int_part = (long)x;
  *frac_part = x - *int_part;
}

void max_min(int a[], int n, int *max, int *min)
{
  *max=*min=a[0];

  int i=0;
  for(i=1;i<n;i++)
  {
    if(a[i] > *max)
    {
      *max = a[i];
    }

    else if(a[i] < *min)
    {
      *min = a[i];
    }

  }


}




int main(void)  
{
   
    int numerator_one;
    int denominator_one;
    int numerator_two;
    int denominator_two;
    int ans_num;
    int ans_denom;

    printf("Please enter fraction one \n");
    scanf("%d/%d",&numerator_one,&denominator_one);
    printf("Please enter fraction two \n");
    scanf("%d/%d",&numerator_two,&denominator_two); // can add '/' symbol in between scanning situation

    ans_num = (numerator_one * denominator_two) + (numerator_two * denominator_one);
    ans_denom = denominator_one * denominator_two;


    printf("The sum is %d/%d\n",ans_num,ans_denom);
    printf("%-6.2g",0.0000009979);

    

   int month;
   int day;
   int year;
   printf("Enter a date mm/dd/yyyy\n");
   scanf("%d/%d/%d",&month,&day,&year);
   printf("You entered the date %d%d%d\n",year,month,day);

   


   // Chained assignments!


   int x,y,z;

   x=y=z=3;

   printf("X is %d and Y is %d and Z is %d\n",x,y,z);

   // Undefined behavior





    int orig_num;
    int ans;
    printf("Enter two digit number to be reversed!\n");
    scanf("%d",&orig_num);
    ans = ((orig_num % 10)*10) + orig_num/10;
    printf("%d\n",ans); 

    //n1 ? n2 : n3

   // Reads as If n1, then n2 else then n3

    //e.g if(5> 3 ? i=3 : i =5

    //i would be 3 in this instance

    
   int k =0;
   k = 8>3 ? 5 : 3;
   printf("K is %d\n",&k);

   // BOOLEANS ARE NOT DEFINED IN C, must use zero and one and often programmers do this, 
   #define TRUE = 1
   #define FALSE = 0;  ,  int flag = FALSE; OR int flag = TRUE;

   // _Bool flag exists now

   // NOW IS bool my_statement = false;

   


  bool cheeto = false;
  printf('%d\n', cheeto);

  //WHILE/DO/FOR LOOPS
  //GOTO Statements 

  

 int iter = 1;

 while(iter<100)
 {
   printf("The iter is now %d\n",iter);
  iter*=5;
 }



int next_iter = 1000;

 do
 {
  printf("%d\n",next_iter);
  next_iter-=5;
 }
 while(next_iter >= 0);
 

int my_arr[] = {22,53,14,32,89,12,51};

for(int i = 0; i<sizeof(my_arr) / sizeof(my_arr[0]);i++)
{
  printf("%d\n",my_arr[i]);
}



int iter_one;
int iter_two;
int final_size = 200;
int i=0;

for(iter_one=1;i<final_size;iter_two+=3)
{
  iter_one*=2;
  i+=2;
  printf("First iter is %d\n",iter_one);
  printf("Second iter is %d\n",iter_two);

  if(iter_one == 0)
  {
    break;
  }
}

// GOTO Demonstration



printf("THis is an example of line one!");

smash_the_pumpkin:
  printf("YOU DID IT!");

for(int j =0; j<5;j++)
{
  if(j == 3)
  {
    goto smash_the_pumpkin;
  }

}

  // Null Statemnts, primarily are error-prone but can be used 
  // to simplify controlling loops(incorpotating subsequebt expressions in to 
  // previous ones)

  for(int i=0;i<4;i++);
  {
    printf("This statement will not get executed and null statement will occur instead!");
  }

  

  // Fraction to lowest terms

  int n1;
  int n2;
  int gcf;
  printf("Please enter fraction to be simplifed using format n1 / n2\n");
  scanf("%d/%d",&n1,&n2);

  for(int i=1;i<n2;i++)
  {
      if(n1%i == 0 && n2%i == 0)
      {
        gcf = i;
      }


  }



  n1/=gcf;
  n2/=gcf;

printf("The Reduced fraction is %d/%d\n",n1,n2);


// Euler's Constant Calculator Using Thm 1/n!

float ans = 0;
float tempSum;
int n;
int tempIter;
printf("How many iterations do you wish to compute?\n");
scanf("%d",&n);

for(int i=0;i<n;i++)
{

  tempSum = 0;
  tempIter = i;
  while(tempIter>1)
  {
    tempSum+= tempIter*(tempIter-1);
    tempIter--;
  }
  
  
  if(i!=0 && i!=1)
  {
    ans+= (1 / tempSum);
  }
  else
  {
    ans+=1;
  }
 

}
printf("The approxiamtion of Eueler's Constant is %f\n",ans);

 

// Signed Bit is 011111 where is the first zero(can be one) indicates the sign
// of the binary number. 1 for positive/zero and 0 for negative. C has signed
// integers, but can create unsigned ints for low-level programming OCTALS begin with 
// zero and must be in between 0 and 8, Decimal is between 0 and 89 but cant begin
// zero. SIGNED INTS CAN BE Neg/Post but Unsigned ints are only non-negative ints.

unsigned long int n = 53334;
unsigned short int r = 23;

// Same effect of implementing bools as before but the difference is that C compiler
// now officialy recongized bool as a new 'primitive data type' ALLOWS FOR Greater 
// portability 
// sizeof function determines size of memory located of data type. INT Usually 4
// for arrs it does what you expect
typedef int Bool;
int size = sizeof(Bool);
printf("%lu\n",size);


// ARRAYS

#define n 10

int a[n];
a[0] = 1;
a[1] = 5;
a[9] = 3;

int b[n] = {2,4,1,3,7,8,5};

int c[n] = {8,2,3,4, [6] = 5, [9] = 1, [8] = 1};

int d[] = {2,3,4,5,6,8,8,9,[21] = 12, [18] = 11};

int dLength = sizeof(d) / sizeof(d[0]); 

//Works because sizeof method returns the number of bytes in an array
//mutliplied by the size of one elemnet, THUS logically if one element
//is divided then the size of array is given.

 

// TWO DIMENSIONAL ARRAYS

for(int j=0;j<dLength;j++)
{
  printf("%d\n",d[j]);
}



#define rows 5
#define columns 5
int bigArr[rows][columns] = 
{
  {2,2,5,1,8},{8,5,9,1,7},{3,7,2,1,2},{8,2,3,6,23},{81,62,423,21,11}
  
};

for(int i=0;i<rows;i++)
{
  for(int j=0;j<columns;j++)
  {
    printf("%d\n",bigArr[i][j]);
  }
}

// Array sizes can be of variable length

// FUNCTIONS NEXT exiting MAIN


int myNum = 8;
int myK = 0;
int myN = 2;

printf("%d\n",sigmaMale(myNum,myK,myN));

// Remember variable parameters CAN exist and that array sizeof trick does NOT work
// as expected with array parameters, ideally len is passed in manually otherwise
// too many or too little elements will be passed in



// POINTERS BITCH! GET HYPED!


// Remember that pointers store address or memory address of variables CAN  ALSO POINT TO
// Objects

int *p; // only points to ints
double *pointer;
char *p1;

int i= 4;
int *myp = &i; // & returns the memory address of i



// Expression can be simplified even more

// Pointer symbol * is cumulative so **p returns the object that p is pointing to

int testNum = 5;

int *q = &testNum;
int *z;
z=q;



printf("%d\n",*myp);



printf("The value that pointer q is pointing to is %d\n",*q);

#define N 5

int b[N];
int max,min;
printf("Please enter %d\n numbers!\n",N);

for(int i=0;i<N;i++)
{
scanf("%d",&b[i]);

}

max_min(b,N,&max,&min);

printf("The max is %d\n",max);
printf("The min is %d\n",min);



// Never return memory addresses of local variables, becase they dont exist outside of the function
// body, the pointer also does not exist.


//Pointer arithemtic and Arrays

int a[10], *p;
a[1] = 5;
p = &a[1];

// During integer/pointer addition, where p* = a[n] ==> p+=i => a[n+i]
printf("%d",*p);

int b[20] = {2,31,5,12,643,2143,21,24,6,7,82,4,65,731,6,4,234,4};
int *q = &b[6];


printf("Previous element is %d\n",*q);


q+=3;

printf("New element is %d\n",*q);


// When peforming pointer arithmeitc with another pointer to another pointer, BOTH POINTERS MUST...
// Point to some element in the SAME ARRAY

int my_arr_5[5] = {31,4,1,24,37};

int *p1 = &my_arr_5[3];
int *q1 = &my_arr_5[1];

int z = p1 - q1; // returns i = 3 subtracted from i = 1 ==> i=2
int z = *p1 - *q1; // returns arr[3] - arr[1]

printf("%d\n",z);




//Iterating via traditonal variables is known as subscripting, using pointers usually
// saves some runtime. 

#define len 5

int final_array[len] = {2,3,1,5,9};
int *iter;
int sum= 0;

for(iter=&final_array[0];iter<&final_array[len];iter++)
{
  sum+=iter;
}

//&final_array[len] works because the computer doesnt even try to compute the memory address for
// an element that doesnt exist. Because of this, the loop works as follows
// &final_array[0],&final_array[1],&final_array[2],&final_array[3]...&final_array[4]

printf("The sum is %d\n",sum);


int my_n = 5;
int *p = &my_n;

// p++*; , increments p then that new value points to p
//*p++,  increments p* i.e increments the memory address not value, value remains unchanged.
//++p*; , SAMES AS ONE
//*++p;  SAMES AS TWO

// Using pointer as an array

#define arr_len 8

int hello_arr[] = {24,3,1,56,4345,323,21,3};

int *arr_pointer = hello_arr;

*(arr_pointer + 2) = 2048;

for(int i=0;i<arr_len;i++)
{
  printf("%d\n",hello_arr[i]);
}

//Using array as a pointer

int sum= 0;
int *new_pointer = hello_arr;

for(int j=0;j<arr_len;j++)
{
  sum+= new_pointer[j];
}


printf("The final sum of the array is %d\n",sum );

// Simplifying two dimensional matrix to one dimension with pointers

int *two_pointer;

#define NUM_ROWS 5
#define NUM_COLS 5

int bestie[NUM_ROWS][NUM_COLS];

//for(two_pointer=&bestie[0][0];two_pointer<=&bestie[NUM_ROWS-1][NUM_COLS-1]; two_pointer++)
//{
  //*two_pointer = random(0,10);
//}



for(int i=0;i<NUM_ROWS;i++)
{
  for(int j=0;j<NUM_COLS;j++)
  {
    bestie[i][j] = random();
    two_pointer = &bestie[i][j];
  }
}

int l=0;
while(l<=sizeof(two_pointer))
{
  printf("%d\n",two_pointer[l]);
  l++;
}



// Strings in C

char ch;
char dx;

ch = "abx"[1];
dx = "xbd"[2];

char* p = &ch;

printf("%c\n",ch);
printf("%c\n",dx);
printf("%p\n",p); //Prints memory address that is stored by pointer

char my_new_str[] = "Hello bitch!";

//Difference is that in array characters are viewed as elements that can be manipulated
// in pointer, each element is viewed as a string literal THAT CANT BE MODIFIED 

printf("%s\n",my_new_str);
//scanf("%s\n",string);

//strncat,strnlen,strncomp are C string functions in C99

//PREPROCESSOR!



//Statements such as #include and #define are considered preprocessor instructions
//MACROS(DEFINE) expand content size of program where as #INClUDE tell computer
//to open a file and include its contents
//PREPROCESSOR OCCURS BEFORE COMPILER

// Parameterized Macros

#define MAX(x,y) // Returns the max between x and y, ACTS AS FUNCTION 
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c) -'a'+'A':(c)) // Checks if char is between 'a' and 'z' IF SO RETURNS UPPER c


char temp_char = TOUPPER('b');

printf("The character afte TOUPPER paramMacro is %c\n",temp_char);

// Usually paramMacros are operationally faster than functions

// # is used to convert primitive data type to string literal

#define PRINT_INT(n) printf(#n " = %d\n",n)


PRINT_INT(5);

// __func__ identifier

#define FUNCTION_CALLED() printf("%s called",__func__);
#define FUNCTION_RETURNS() printf("%s returns",__func__);


#define THIS_BOOL 1;

#if THIS_BOOL
#endif


// .h is a header file, aka  <headerfile.h> where as personal files are "file.h"

// for(;;){} is an idiom for while true as well

//gcc -o file.c

// Structures are similar to arrays, however, the data type of elements don't have to be the same.


#define STR_LEN 5


struct
{
  int my_fav_num;
  char my_fav_string[];
} part1, part2;


struct part
{
  int my_fav_num;
  char my_fav_string[STR_LEN];
  float my_fav_float;
}part3 = {3,"he",3.14},part4 = {5,"geek",2.83};

//STRUCTS ARE ONLY DEFINED IN THEIR SCOPE


printf(" The favorite number of part 3 is %d\n",part3.my_fav_num);

struct part my_elements[50]; // Declares a struct of 50 elements

const struct murder_rate
{
  char *countryName;
  float murderRate;

}mR;

//Members of the same union are stored in the same memory address NOT TRUE OF structs
// Unions of same var update value


union
{
  int var_int;
  float var_float;
}u;

u.var_int =5;

printf("%d\n",u.var_int);

u.var_int =8;

printf("%d\n",u.var_int);

#define SUIT int
#define CLUBS 0
#define HEARTS 1

SUIT s;
s = HEARTS;




//Not sure why this code isn't working
// const struct murder_rate murder_rates[] = 
//{
  //{{"United Staes", 0.87},{"Brasil", 0.93},{"China", 0.23},
  //{"Barabados",0.53},{"Luxembourg",0.42}}

//};

//Dynamic Storage Allocation

// malloc: Allocates block of memory but DOES NOT USE it ==> RETURNS void pointer
// because it is unclear to computer what type of primivate datatype pointer it is
// If the request for memory is too large, then a null pointer is returned.
// calloc: Allocates block of memory and CLEARS IT
// realloc: Resizes a previously allocated block of memory


void *p;

p = malloc(1000);

#define FINAL_STR_LEN 8

void *q;
char loveString[FINAL_STR_LEN];
q= malloc(FINAL_STR_LEN+1); // Always allocate size in memory for null pointer as well!

#define ARR_LEN 5

int m_arr_1[ARR_LEN] = {31,53,672,53,12, [0] = 1 , [1] = 23};
int *p2;
// where n represenets elements in the array

p2 = malloc(ARR_LEN*sizeof(int));

for(int z=0;z<ARR_LEN;z++)
{
    printf("%d\n",m_arr_1[z]);
}




// calloc works by setting all memory bits to zero and THEN assinging values USUALLY USED for objects
// returns POINTER


char *p;
char my_char = 'c';
// p = calloc(1,sizeof(my_char));

//realloc ONLY CALL ON PREVIOUS MALLOC OR CALLOC call

int my_inty = 5;
int *z;

//z = malloc(sizeof(my_inty));

free(z); // Is now a dangling pointer


int *new_z;
new_z = &my_inty;
// z = new_z;

// z is re-referenced

// printf("%p",z);


// LinkedLists

struct node
{
  int value;
  struct node *next;
};

struct node *new_node;
// new_node = malloc(sizeof(struct node)); // always use memory size of object NOT its pointer, b/c pointer is smaller
// new_node->value = 10;
char stringZ[] = "hello there";

// use -> to referr to the pointer of the  object i.e obj->value = 10

// Function pointers

void (*pf)(int); // points to any function with int parameter and void return type

// Restricted pointers, goal is to HAVE ONE and ONLY ONE POINTER THAT ONLY POINTS TO DATA
char * restrict p3;
p3 = &stringZ;



// Low Level Programming(Bit Manipulation), should be used sparingly as it makes code less portable
// BECOMES ASSEMBLY SAVE FOR LATER DATE

unsigned int i,j;

i = 13;
j = i<<2; // i is shifted left two(IN TERMS OF BINARY i.e two zeros are added) 00101 --> 0010100
j = i>>2; //                                                                   00101 --> 101

// Learn File Input at a later date 

}