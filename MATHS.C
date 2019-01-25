// MENU DRIVEN PROGRAM ON MATRIX.
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>

void DOUBLE_MATRIX(int);
void SINGLE_MATRIX(int);
void game();

void main()
{
int choice;
clrscr();
printf("\n\n\n\t\t\t_______________________________");
printf("\n\n\t\t\t MENU DRIVEN PROGRAM ON MATRIX ");
printf("\n\t\t\t_______________________________");
printf("\n\n\n\n\n\n\n\t\t\t    - BY  * APARAJITA HALDER ");
printf("\n\t\t\t          * MAHIMA FULWARIA ");
printf("\n\t\t\t          * NAVYA KAPOOR ");
delay(1500) ;
clrscr();
printf("\n\n\n\t\t*** PROJECT MENTOR ***");
printf("\n\t\t    Dr. Arvind Mahrishi");
printf("\n\n\n\t\t*** FACULTY IN PANEL ***");
printf("\n\t\t    Dr. Garima Sharma");
printf("\n\n\n\n\n\t\t PRESS ANY KEY TO CONTINUE.....");
getch();
do
  {

  clrscr();
  printf("\n\n\t\t\t ^^^^^^^^^^^^^^^^^^^^^^ ");
  printf("\n\t\t ***** MENU FOR MATRIX OPERATIONS ***** ");
  printf("\n\n\n\n\t\t 1 . ADDITION oftwo matrices ");
  printf("\n\t\t 2 . SUBTRACTION of two matrices ");
  printf("\n\t\t 3 . MULTIPLICATION of two matrices ");
  printf("\n\t\t 4 . TRANSPOSE of a matrix");
  printf("\n\t\t 5 . display of => LOWER TRIANGULAR MATRIX ");
  printf("\n\t\t                => UPPER TRIANGULAR MATRIX ");
  printf("\n\t\t                => DIAGONAL ELEMENTS OF MATRIX ");
  printf("\n\t\t 6 . MINI GAME USING MATRIX APPLICATION ");
  printf("\n\t\t 7 . EXIT ");
  printf("\n\n\n\n\n\t ### ENTER YOUR OPTION");
  printf(" (as per the menu given above) : ");
  scanf("%d",&choice);

  switch(choice)
  {
  case 1:DOUBLE_MATRIX(choice);
			break;

  case 2:DOUBLE_MATRIX(choice);
			break;

  case 3:DOUBLE_MATRIX(choice);
			break;

  case 4:SINGLE_MATRIX(choice);
			break;

  case 5:SINGLE_MATRIX(choice);
			break;

  case 6:clrscr();
			game();
			break;

  case 7:clrscr();
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t****************");
			printf("\n\n\t\t\t\tT H A N K Y O U ");
			printf("\n\n\t\t\t\t****************");
			delay(1000);
			exit(0);

  default:clrscr();
			 printf("\n\n\n\n\n\t\t\t YOU HAVE ENTERED WRONG OPTION !!! ");
			 printf("\n\n\t\t\t   <<<<< TRY AGAIN ! >>>>>");
			 printf("\n\n\t\t\t  *** PRESS ANY KEY TO EXIT ***");
			 getch();
  }
  }while(choice!=7);


}


void DOUBLE_MATRIX(int ch)
{
int A[10][10] , B[10][10] ,C[10][10];
int m,i,j,n,p,q,k;
int c=0,r=0;

clrscr();
printf("\n\n\n\n\t\t ENTER THE DETAILS OF FIRST MATRIX ");
printf("\n\t\t____________________________________");
printf("\n\n\n\n\t\t => NO. OF ROWS : ");
scanf("%d",&m);
printf("\n\n\t\t => NO. OF COLUMNS : ");
scanf("%d",&n);

clrscr();
printf("\n\n\n\t\t ENTER YOUR MATRIX OF ' %d ' ROWS AND ' %d ' COLUMNS : ",m,n);
for(i=0 ; i<m ; i++)
{
  for(j=0 ; j<n ; j++)
  {
	 gotoxy(22+c,7+r);
	 scanf("%d",&A[i][j]);
	 c=c+3;
  }
 r=r+2;
 c=0;
}

clrscr();
printf("\n\n\n\n\t\t ENTER THE DETAILS OF SECOND MATRIX ");
printf("\n\t\t____________________________________");
printf("\n\n\n\n\t\t => NO. OF ROWS : ");
scanf("%d",&p);
printf("\n\n\t\t => NO. OF COLUMNS : ");
scanf("%d",&q);
clrscr();
printf("\n\n\n\t\t ENTER YOUR MATRIX OF %d ROWS AND %d COLUMNS : ",p,q);
c=0,r=0;
for(i=0 ; i<p ; i++)
{
  for(j=0 ; j<q ; j++)
  {
	 gotoxy(22+c,9+r);
	 scanf("%d",&B[i][j]);
	 c=c+3;
  }
 r=r+2;
 c=0;
}

clrscr();
switch(ch)
{

case 1:if(m==p&&n==q)
		 {

			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<n ; j++)
			  {
			  C[i][j] = A[i][j] + B[i][j] ;
			  }
			}

			printf("\n\n\n\t\t ADDITION OF THE MATRICES ARE..... ");
			c=0,r=0;
			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<n ; j++)
			  {
				gotoxy(22+c,7+r);
				printf("%d",C[i][j]);
				c=c+3;
			  }
			 r=r+2;
			 c=0;
			}

		 }
		 else
		 {
		 printf("\n\n\n\t\t NO. OF ROWS AND COLUMNS OF BOTH MATRICES MUST BE SAME ");
		 printf("\n\n\t\t ADDITION NOT POSSIBLE <<< TRY AGAIN >>>");
		 }
		 break;

case 2:if(m==p&&n==q)
		 {

			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<n ; j++)
			  {
			  C[i][j] = A[i][j] - B[i][j] ;
			  }
			}

			printf("\n\n\n\t\t SUBTRACTION OF THE MATRICES ARE..... ");
			c=0,r=0;
			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<n ; j++)
			  {
				gotoxy(22+c,7+r);
				printf("%d",C[i][j]);
				c=c+3;
			  }
			 r=r+2;
			 c=0;
			}

		 }
		 else
		 {
		 printf("\n\n\n\t\t NO. OF ROWS AND COLUMNS OF BOTH MATRICES MUST BE SAME ");
		 printf("\n\n\t\t SUBTRACTION NOT POSSIBLE <<< TRY AGAIN >>>");
		 }
		 break;

case 3:if(n==p)
		 {

			int sum=0;
			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<q ; j++)
			  {
				 for(k=0 ; k<p ; k++)
				 {
				 sum = sum + A[i][k] * B[k][j] ;
				 }
			  C[i][j] = sum ;
			  sum=0 ;
			  }
			}

			printf("\n\n\t\t MULTIPLICATION OF THE MATRICES ARE..... ");
			c=0,r=0;
			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<q ; j++)
			  {
				gotoxy(22+c,7+r);
				printf("%d",C[i][j]);
				c=c+3;
			  }
			 r=r+2;
			 c=0;
			}

		 }
		 else
		 {
		 printf("\n\n\n\t\t NO. OF COLUMNS OF FIRST MATRIX AND");
		 printf("\n\t\t NO. OF ROWS OF SECOND MATRIX MUST BE SAME ");
		 printf("\n\n\n\t\t MULTIPLICATION NOT POSSIBLE <<< TRY AGAIN >>>");
		 }
		 break;

}
printf("\n\n\n\t\t PRESS ANY KEY TO EXIT ");
getch();
}


void SINGLE_MATRIX(int ch)
{

int A[10][10],m,n ;
int c=0,r=0,i,j,a;
clrscr();
printf("\n\n\t\t ENTER THE DETAILS OF MATRIX .....");
printf("\n\t\t____________________________________");
printf("\n\n\n\t\t NO. OF ROWS : ");
scanf("%d",&m);
printf("\n\n\t\t NO. OF COLUMNS : ");
scanf("%d",&n);
clrscr();
printf("\n\n\t\t ENTER YOUR MATRIX OF ' %d ' ROWS AND ' %d ' COLUMNS : ",m,n);
for(i=0 ; i<m ; i++)
{
  for(j=0 ; j<n ; j++)
  {
	 gotoxy(25+c,7+r);
	 scanf("%d",&A[i][j]);
	 c=c+5;
  }
 r=r+2;
 c=0;
}

clrscr();
switch(ch)
{

case 4 : printf("\n\n\t\t TRANSPOSE OF THE MATRIX IS......");
			c=0, r=0 ;
			for(i=0 ; i<n ; i++)
			{
			  for(j=0 ; j<m ; j++)
			  {
				gotoxy(20+c,7+r);
				printf("%d",A[j][i]);
				c=c+5;
			  }
			 c=0;
			 r=r+2;
			}
			printf("\n\n\n\n\t\t PRESS ANY KEY TO EXIT ");
			getch();
			break;


case 5 :if(m==n)
			{
			do
			{
			clrscr();
			printf("\n\n\t\t WHAT DO YOU WANT TO VIEW ??? ");
			printf("\n\n\n\n\t\t 1 . UPPER TRIANGULAR MATRIX ");
			printf("\n\n\t\t 2 . LOWER TRIANGULAR MATRIX ");
			printf("\n\n\t\t 3 . DIAGONAL ELEMENTS OF MATRIX ");
			printf("\n\n\t\t 4. EXIT  ");
			printf("\n\n\n\n\n\t\t ENTER YOUR OPTION : ");
			scanf("%d",&a);

			c=0 , r=0;
			clrscr();
			if(a==1)
			printf("\n\n\t\t UPPER TRIANGULAR MATRIX.....");
			if(a==2)
			printf("\n\n\t\t LOWER TRIANGULAR MATRIX.....");
			if(a==3)
			printf("\n\n\t\t DIAGONAL ELEMENTS OF MATRIX ");
			for(i=0 ; i<m ; i++)
			{
			  for(j=0 ; j<n ; j++)
			  {


				  if(a==1)
				  {
					gotoxy(25+c,7+r);
					if(i<=j)
					printf("%d",A[i][j]);
					else
					printf("*");
				  }

				  if(a==2)
				  {
					gotoxy(25+c,7+r);
					if(i>=j)
					printf("%d",A[i][j]);
					else
					printf("*");
				  }
				  if(a==3)
				  {
					gotoxy(25+c,7+r);
					if(i==j)
					printf("%d",A[i][j]);
					else
					printf("*");
				  }

				c=c+5;
			  }
			 c=0;
			 r=r+2;
			}
			if(a!=1&&a!=2&&a!=3&&a!=4)
			printf("\n\n\t\t WRONG OPTION ENTERED. TRY AGAIN !!!");
			printf("\n\n\n\t\t PRESS ANY KEY TO EXIT");
			getch();
			}while(a!=4);
			}
			else
			{
			printf("\n\n\t\t NO. OF ROWS AND COLUMNS MUST BE SAME FOR THIS OPERATION.");
			printf("\n\n\t\t TRY AGAIN !!!");
			printf("\n\n\t\t PRESS ANY KEY TO EXIT ");
			getch();
			}
			break;

}

}

void game()
{
int a,c,m=2,n=2,k=1,r=0,s=0,i,j,score=0;
char login[15],pass[15];
clrscr();
printf("\n\n\n\n\t\t ENTER THE LOGIN DETAILS");
printf("\n\n\t\t   => LOGIN ID : "); scanf("%s",login);
printf("\t\t   => PASSWORD : "); scanf("%s",pass);
if(strcmp(pass,"matrix")==0&&strcmp(login,"matrix.cet")==0)
{
clrscr();
printf("\n\n\t\t *** HOW TO PLAY ***");
printf("\n\n\n\t 1) A square matrix will be displayed on screen.");
printf("\n\t 2) Player can view the matrix for 5 seconds only.");
printf("\n\t 3) Matrix will be in form of no.s like 1,2,3....");
printf("\n\t 4) One element in the matrix will have '*' sign instead of no.");
printf("\n\t 5) Player will have to ENTER THE MISSING NO.");
printf("\n\t 6) If correct no. is entered then the player will get a score of 100.");
printf("\n\t 7) In case of wrong no. the game will be over.");
printf("\n\t 8) There will be total 5 levels in game");
printf("\n\t 9) No. of rows and columns of matrix increasing by 1 in each level.");
printf("\n\n\n\n\t => PRESS ANY KEY TO START THE GAME");
printf("\n\t   (if you have read the instructions properly)");
getch();
do
{
clrscr();
if(m==2)
c=3;
if(m==3)
c=4;
if(m==4)
c=16;
if(m==5)
c=7;
if(m==6)
c=16;
printf("\n\n\t *** LEVEL NO : %d ***     [ SCORE = %d ]",(m-1),score);
			for(i=0 ; i<n ; i++)
			{
			  for(j=0 ; j<m ; j++)
			  {
				gotoxy(10+s,7+r);
				if(m==2)
				{
				if(i==1&&j==0)
				printf("* ");
				else
				printf("%d ",k);
				}
				if(m==3)
				{
				if(i==1&&j==0)
				printf("* ");
				else
				printf("%d ",k);
				}
				if(m==4)
				{
				if(i==3&&j==3)
				printf("* ");
				else
				printf("%d ",k);
				}
				if(m==5)
				{
				if(i==1&&j==1)
				printf("* ");
				else
				printf("%d ",k);
				}
				if(m==6)
				{
				if(i==2&&j==3)
				printf("* ");
				else
				printf("%d ",k);
				}
				k++;
				s=s+9;
			  }
			 s=0;
			 r=r+3;
			}
m++;
n++;
k=1;
s=0;
r=0;
printf("\n\n\n\t FIND THE MISSING NO. ");
printf("\n\t TIME LEFT IS : ");
for(i=5;i>=1;i--)
{
printf(" %d ",i);
delay(1000);
}
clrscr();
printf("\n\n\n\n\n\t\t ENTER THE MISSING NO. : ");
scanf("%d",&a);
if(c!=a)
{
clrscr();
for(i=1;i<=3;i++)
{
clrscr();
printf("\n\n\n\n\t\t\t WRONG NUMBER ENTERED");
printf("\n\n\t\t\t    GAME OVER !!!");
printf("\n\n\n\n\t\t\t YOUR SCORE IS %d ",score);
sound(500); delay(300); nosound();
if(i<3)
clrscr();
delay(200);
}
printf("\n\n\n\n\n\n\n\t\t\tPRESS ANY KEY TO EXIT");
getch();
}
if(c==a)
{
score=score+100;
if(m==7)
{
clrscr();
printf("\n\n\n\n\t\t\t***** YOU WIN THE GAME *****");
printf("\n\n\t\t\t     CONGRATULATIONS !!!");
printf("\n\n\n\n\t\t\t      YOUR SCORE IS %d ",score);
printf("\n\n\n\n\n\n\n\t\t\t     PRESS ANY KEY TO EXIT");
getch();
}
}
}while(c==a&&m<=6);
}
else
{
clrscr();
printf("\n\n\n\n\n\t\t *** WRONG PASSWORD ENTERED ***");
sound(500);
delay(2000);
nosound();
}
}
