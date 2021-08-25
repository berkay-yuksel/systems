#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

/*
üniversiteden mezun olmak için son derslerimden biri fakat zor zamanlar geçiriyoruz.
bu yüzden ödevi istediğiniz gibi yapamadım ama elimden gelen şekilde implement etmeye çalıştım.
umarım kabul edersiniz. 
*/

time_t currentTime;	
time(&currentTime);
       int lower = 420, upper= 750;
   int  i, num;
	int marks=1;

srand(time(NULL));   
int r;
 

   FILE *fptr;
   fptr = (fopen("mouse_event_file.txt", "w"));
   if(fptr == NULL)
   {
       printf("Error!");
       exit(1);
   }
	fprintf(fptr,"Time:      X:	Y:	\n", r, marks);
   while(1)
   {
     

  r = (rand() % (upper - lower + 1)) + lower;
 marks=(((r/3)*4)+r)/2;

      fprintf(fptr,"%s  %d  %d  \n", ctime(&currentTime), r, marks);

  printf("Press 1 to add new coordinate 0 to break \n ");
   scanf("%d", &num);
if(num==0){
printf("You can check mouse_event_file.txt now!!");
break;
}
   }





   fclose(fptr);
   return 0;
}