#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
void name();
void menu();
void Electron_menu();
int Electron_calculatio();
void particle_menu();
int particle_cal();
int main()

{
	int choice,choice_2=2,wish;
	start:	
	name();
	menu();
	scanf("%d",&choice);
	if (choice==1)
	{
		printf("Finding wavelength for \n 1.Electron or\n 2.Any other particle\n");
		scanf("%d",&choice_2);
		if (choice_2==1)
		{
			Electron_menu();
		}
		if (choice_2==2)
		{
			particle_menu();
		}
	}
	printf("--------------------------------------------------------\n");
	// printf("1:restart\n0:exit\n");
	// scanf("%d",&wish);
	// if(wish==1)
	// {
	// 	system("@cls||clear");
	// 	goto start;
	// }
	// else if (wish==0)
	// {
	// 	printf("--THANK YOU--");
	// }
}
void name()
{
	printf("\t\t****GROUP NO.--->2****\n");
	printf("Nathan Vaz-->607\n");
	printf("Gauresh Wadekar-->608\n");
	printf("Anurag Yadav-->609(Vice-Leader)\n");
	printf("Gaurav Yadav-->610\n");
	printf("Shruti Yeole-->611(Leader)\n");
	printf("Suneesh Kumar-->612\n\n");

}
void menu()
{
		printf("*****DE-BROGILE WAVELENTH CALCULATOR*****\n");
		printf("Enter Number Corresponding To Which You Want To Use Formula\n");
		printf("1.de broglie hypothesis for electrons as particle\n");
}
void Electron_menu()
{
	printf("Which quantity you have \n(quantities must be in S.I. Unit) ");
	printf("\n1.velocity of particle \n");
	printf("2.kinetic energy of particle\n");
	printf("3.applied potential\n");
	printf("4.Momentum\n");
	Electron_calculatio();
	
}
int Electron_calculatio()
{
	int choice;
	float v,w_1,ke,ap,mvm;
	double w_2;
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Enter velocity of particle: ");
				scanf("%f",&v);
				w_1=0.0007285 / v;
				
				printf("The de Broglie Wavelength is=%E meters\n",w_1);
								printf("ABOUT DIFFRACTION: \n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
		case 2:
			{
				printf("Enter Kinetic Energy of particle: ");
				scanf("%f",&ke);
				w_2=(2.4152*1E-37)/ke;
			//	w_2=sqrt(w_2);
				printf("The de Broglie Wavelength is=%E meters\n",w_2);
				printf("\nABOUT DIFFRACTION:\n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
                break;
			}
		case 3:
			{
				printf("Enter Applied Potential of particle: ");
				scanf("%f",&ap);
				ap=sqrt(ap);
				w_2=(12.27*1E-10 / ap);
				printf("The de Broglie Wavelength is=%E meters\n\n",w_2);
					printf("ABOUT DIFFRACTION:\n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
		case 4:
			{
				printf("Enter Momentum of particle :");
				scanf("%f",&mvm);
				w_2=6.636E-34/mvm;
				printf("The de Broglie Wavelength is=%E meters\n",w_2);
				printf("ABOUT DIFFRACTION:\n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
	}
}
void particle_menu()
{
	printf("Enter mass of the particle: ");
	particle_cal();
}
int particle_cal()
{
	int choice;
	float v,w_1,m,ke,ap,mvm;
	double w_2,w_3;
	scanf("%f",&m);

	
			printf("\nWhich quantity you have \n(quantities must be in S.I. Unit)\n\n");
            printf("1.velocity of particle \n");
            printf("2.kinetic energy of particle\n");
            printf("3.applied potential\n");
            printf("4.Momentum\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				printf("Enter velocity of particle: ");
				scanf("%f",&v);
				w_1=(6.63E-34) /(m * v);
				
				printf("The de Broglie Wavelength is=%E meters\n",w_1);
								printf("ABOUT DIFFRACTION: \n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
		case 2:
			{
				printf("Enter Kinetic Energy of particle: ");
				scanf("%f",&ke);
				w_1=2*m*ke;
				w_3=sqrt(w_1);
				w_2=(6.63*1E-34 / w_3);
				//w_3=sqrt(w_2);
				printf("The de Broglie Wavelength is=%E meters\n",w_2);
				printf("\nABOUT DIFFRACTION:\n");
				      if (w_2>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
                break;
			}
		case 3:
			{
				printf("Enter Applied Potential of particle: ");
				scanf("%f",&ap);
				
				w_2=2*m*1.602*1E-19*ap;
				w_2=sqrt(w_2);
				w_3=((6.63*1E-34) / w_2);
				printf("The de Broglie Wavelength is=%E meters\n\n",w_3);
					printf("ABOUT DIFFRACTION:\n");
				      if (w_3>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
		case 4:
			{
				printf("Enter Momentum of particle :");
				scanf("%f",&mvm);
				w_2=6.636E-34/mvm;
				printf("The de Broglie Wavelength is=%E meters\n",w_2);
				printf("ABOUT DIFFRACTION:\n");
				      if (w_1>=(6*1E-7)){
                    printf("This particle will show diffraction effect as its wavelength is NOT NEGLIGIBLE as compared to the size of particle\n");
                }
                else
                {
                    printf("This particle will NOT show diffraction effect as its wavelength is NEGLIGIBLE as compared to the size of particle\n");

                }
				break;
			}
	}
	
}
