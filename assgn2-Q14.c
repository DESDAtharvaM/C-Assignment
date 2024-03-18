#include <stdio.h>

int main () {

int empid, depno ;
char dsg  ;

printf("Enter the Employee id : ");
scanf("%d",&empid);

printf("Enter the Department No : ");
scanf("%d",&depno);

printf("Enter the Dsgn Code : ");
scanf("%*c%c",&dsg);

switch(depno)
{

    case (10)  : printf(" Employee with  employee id %d is working in Marketing department as  ",empid);
    break ;

    case(20) : printf(" Employee with  employee id %d is working in Management department as  ",empid);
    break ;

    case(30) : printf(" Employee with  employee id %d is working in Sales department as  ",empid);
    break;

    case(40): printf(" Employee with  employee id %d is working in Desinging department as  ",empid);
    break;

}


switch (dsg)
{

    case('M') : printf("Manager ") ;
    break;
    case('S') : printf("Supervisor ");
    break ;
    case('s') : printf("Secuirty Officer ");
    break ;
    case('C') : printf(" Clerk ");
    break ;
}

return 0 ;

}
