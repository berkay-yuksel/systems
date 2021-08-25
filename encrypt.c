#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{

/*
üniversiteden mezun olmak için son derslerimden biri fakat zor zamanlar geçiriyoruz.
bu yüzden ödevi istediğiniz gibi yapamadım ama elimden gelen şekilde implement etmeye çalıştım.
umarım kabul edersiniz. 
*/
srand(time(NULL));  
int r = rand()%10;   

int i=0;
 FILE *fp;

   fp = fopen("reverse_encrtpted_file.txt", "w+");






FILE * the_file =fopen("list.txt","r");
if(the_file==NULL)
{
printf("not found /n");
exit(1);
}
char line[100];


while(fgets(line,sizeof(line),the_file)){

for(i;i<6;i++){
line[i]=line[i]^r;}
i=0;
  fputs(line, fp);

}
	
   fclose(fp);
}