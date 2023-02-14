#include <stdio.h>


int num ()
{
	int n1;
	printf ("n1=");
	scanf ("%i" , &n1);
	for (float i = 0; i < n1 + 1; i++)
	{
		if ( i * i == n1)
		{
			n1 = i;
			printf ("%i koren chisla %i\n", n1 * n1, n1);
			return n1;
		}
	}
	printf ("ne natural chislo\n");
	return 0;
}

int num (int *n2)
{
	for (int i = 0; i < ( * n2 ) + 1; i++)
	{	
		if ( i * i == ( * n2 ))
		{
			( * n2 ) = i;
			printf ( "%i koren chisla %i\t", ( * n2 ) * ( * n2 ), * n2);
			printf ("ykazatel\n"); 
			return * n2;			
		}
	}
	printf ("ne natural chislo \4 ykazate\n");
	return  0;
	
}

int num ( int & n3)
{
	for (int i = 0; i < n3 + 1; i++)
	{
		if ( i * i == n3)
		{
			n3 = i;
			printf ("%i koren chisla %i\t", n3 * n3, n3);
			printf ("ssylka\n"); 
			return n3;
		}
	}
	printf ("ne natural chislo \4 ssylka\n");
	return 0;	
}

int main()
{
	int n2, n3;
	num ();
	printf ("n2=");
	scanf ("%i", &n2);
	num (&n2);
	printf ("n3=");
	scanf ("%i", &n3);
	num (n3);
	return 0;
}
