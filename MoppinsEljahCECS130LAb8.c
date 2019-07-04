#include <stdio.h>
#include <stdlib.h>
/* 
Elijah Moppins
CECS 130
This phone book has the functionality to add and remove contacts and view all the contacts in the list.Added more functionality
Now can store data in a txt file
Date: 3/21/19
LAb 8



*/
void addc();
void remc();
void disp();
void find();
void all();
void rcall();
void read();
struct phoneE{
char fName[20];
char lName[20];
char num[20];
}work;

int main(int argc, char *argv[])
{
 char temp[40] ;
  char loc[40]="test.txt";
 
 printf("\nPhonebook Program");
 printf("\nEnter a file location to access phonebook");
 printf("\nEnter yes if you want to create a new phonebook\n");
// scanf("\n%s",&temp[40]);



/*if(strcmp(temp[40],"yes")==0){
 	
 	  loc[40]="test1.txt";
 	}
else
{
	 loc[40]=temp[40];
}*/

FILE *pB;
 	
int h=0;
int f=0;


char fname[20];
char lname[20];
char num[20];
struct phoneE person[1];

 void addc(){
 		printf("\nFirst Name: ");
 		scanf("\n%s",&person[h].fName);
 		printf("\nLast Name: ");
 		scanf("\n%s",&person[h].lName);
 		printf("\nPhone Number: ");
 		scanf("\n%s",&person[h].num);
 		pB=fopen("test.txt","a");
 		if(pB==NULL){
 			printf("\nFile cant be opened");
 			exit(EXIT_SUCCESS);
 		}
 		fprintf(pB,"%s\t%s\t%s\n",person[h].fName,person[h].lName,person[h].num);
 		fclose(pB);
 	h++;
 	printf("\nContact Added");
 }
 void remc(){
 		printf("\nFirst Name:");
 		scanf("\n%s",&fname[20]);
 		printf("\nLast Name:");
 		scanf("\n%s",&lname[20]);
 		int i;
 		
 		for(i=0;i<h;i++){
 			
 			if(strcmp(person[i].fName,fname)==0&&strcmp(person[i].lName,lname)==0){
 				int zo=h-1;
 				int zi;
 					for(zi=i;zi<zo;zi++){
 						person[zi]=person[zi+1];
 						person[zi]=person[zi+1];
 						person[zi]=person[zi+1];
 						
			 }
 			
		 }
	 }
	 h--;
 }
 void disp(){
 	int i;
 	for(i=0;i<h;i++){
 		printf("\n%s\t%s\t%s\n",person[i].fName,person[i].lName,person[i].num);
 			
		 }
	 }
void find(){
	char tempf[20];
	char templ[20];
	char* f =&tempf[20];
	char* l =&templ[20];
	
	printf("\nFirst Name:");
 	scanf("\n%s",&tempf[20]);
 	printf("\nLast Name:");
 	scanf("\n%s",&templ[20]);
 	int i;
 		
 		for(i=0;i<h;i++){
 			printf("\ntest");
 			if(strcmp(person[i].fName,*f)==0&&strcmp(person[i].lName,*l)==0){
 				printf("\n%s",person[i].num);
 						
			 }
 			
		 }
	 }
void all(){
	h=0;
	
}
void rcall(){
	int i, n;
   time_t t;
   
   int z=rand()% h;
   
   /* Intializes random number generator */
   srand((unsigned) time(&t));

 
   
      printf("\n%s\t%s\t%s\n",person[z].fName,person[z].lName,person[z].num);
   }
 
void alapha(){
	//:(
}
 
void read
(){
char fName[20]="";
char lName[20]="";
char num[20]="";
	pB=fopen("test.txt","r");
 		if(pB==NULL){
 			printf("\nFile cant be opened");
 			exit(EXIT_SUCCESS);
 		}
 		fscanf(pB,"%s%s%s\n",fName,lName,num);
 		while(!feof(pB)){
 			printf("%s\t%s\t%s\n",fName,lName,num);
 			fscanf(pB,"%s%s%s\n",fName,lName,num);
		 }
		 printf("%s\t%s\t%s\n",fName,lName,num);
 		fclose(pB);
}
 
 
 
 while(f!=9){
 	printf("\n1\tAdd a contact");
 	printf("\n2\tDelete a contact");
 	printf("\n3\tDisplay Phonebook");
 	printf("\n4\tFind a Number");
 	printf("\n5\tDelete All Contacts");
 	printf("\n6\tRandom Number");
 	printf("\n7\tAlaphabetical Order");
 	printf("\n8\tRead from file");
 	printf("\n9\tEnd");
 	printf("\nEnter an operation\n");
 	scanf("\n%d",&f);
 	if(f==1){
 		
 		addc();
	 }
	 if(f==2){
	 	
 		remc();
	 }
	 if(f==3){
	 	disp();
	 }
	 if(f==4){
	 	find();
	 }
	 if(f==5){
	 	all();
	 }
	 if(f==6){
	 	rcall();
	 }
 	if(f==7){
 		alapha();
	 }
	if(f==8){
		read();
	}
 }
  
}
