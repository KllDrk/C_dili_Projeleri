#include<stdio.h>
#include<conio.h>
typedef struct
{
	char Department_name[100];
	int academicStaffCount;
	int StudentCount;
}Department;
typedef struct
{
	char faculty_name[100];
	Department departments[2];
}Faculty;
 struct University{
	char universe_name[100];
	Faculty faculties[2];
}Universities[2];


University y(University x)
{
	printf("�niversite adi....");
	scanf("%s",x.universe_name);	

    return x;
}

Faculty y(Faculty x)
{
 printf("fak�lte adi....");
	scanf("%s",x.faculty_name);
	
	return x;
}
Department y(Department x)
{
printf("b�l�m�n ismi....");
	scanf("%s",x.Department_name);
	printf("akademisyen sayisi....");
	scanf("%d",&x.academicStaffCount);
	printf("ogrenci sayisi....");
	scanf("%d",&x.StudentCount);
	return x;
}

int main()
{
   int i;
   University University[2];
   Faculty Faculty[2];
   Department Department[2];
   int a=0;
   for(i=0;i<2;i++)
   {
    University[i]=y(University[i]);
    for(i=0;i<2;i++)
    {
    	Faculty[i]=y(Faculty[i]);
    	for(i=0;i<2;i++)
    	{
    		Department[i]=y(Department[i]);
		}
	  }
    }
    for(i=0;i<2;i++){
	
    printf("�niversite adi...\n%s\n%s\n",Universities[i].universe_name,University[i].universe_name);
    printf("fak�lte adi...\n%s\n%s\n",Universities[i].faculties[i].faculty_name,University[i].faculties[i].faculty_name);
    printf("b�l�m ismi....\n%s\n%s\n",University[i].faculties[i].departments[i].Department_name,University[i].faculties[i].departments[i].Department_name);
    printf("akademisyen sayisi...\n%d\n%d\n",University[i].faculties[i].departments[i].Department_name,University[i].faculties[i].departments[i].Department_name);
    float d=(float)University[i].faculties[i].departments[i].StudentCount/University[i].faculties[i].departments[i].academicStaffCount;
   
    }
    return 0 ;
    
}
