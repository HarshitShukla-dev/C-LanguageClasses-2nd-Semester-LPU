#include <stdio.h>
int main()
{
    int myArray[5] = {1, 2, 3, 4, 5};

    printf("{%d, %d, %d, %d, %d}", myArray[0], myArray[1], myArray[2], myArray[3], myArray[4]);

    return 0;
}

//____________________________________

#include <stdio.h>
int main()
{
    int myArray[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }

    return 0;
}

//______________________________________

#include <stdio.h>
int main()
{
    int myArray[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Your array is : {%d ,%d, %d, %d, %d}", myArray[0], myArray[1], myArray[2], myArray[3], myArray[4]);

    return 0;
}

//______________________________________

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the range of Array : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Your Array is : {");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d, ", myArray[i]);
    }
    printf("%d}", myArray[n - 1]);

    return 0;
}

//______________________________________

#include <stdio.h>
int main(){
    int n;
    printf("Enter number of students : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter weight of %d student : ", i + 1);
        scanf("%f", &myArray[i]);
    }

    printf("Your Array of weight of students is : {");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%f, ", myArray[i]);
    }
    printf("%f}", myArray[n - 1]);

    return 0;
}

//______________________________________

#include <stdio.h>
int main(){
    int n;
    printf("Enter the range of Array : ");
    scanf("%d", &n);
    int myArray[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter %d element : ", i + 1);
        scanf("%d", &myArray[i]);
    }

    printf("Your Array is : {");
    for (int i = 0; i < n - 1; i++)
    {
        printf("%u, ", &myArray[i]);
    }
    printf("%u}", &myArray[n - 1]);

    return 0;
}

//_________________________________

#include <stdio.h>
 
int main() {
    
	int N, i;
    printf("Enter range: ");
	scanf("%d", &N);
 
	int numArray[N];

	for (i=0;i<N; i++) {
        printf("Enter %d element : ",i+1);
    	scanf("%d", &numArray[i]);
	}
	
	int sum = 0;
	
    printf("Sum is :  ");
	for(i=0;i<N;i++){
	    sum +=numArray[i];
	}
   
	printf("%d\n",sum); 
    
	return 0;
}



