#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
//PROGRAM 1:addtion,subtrction,multiplacation,division and mudulo of two numbers:
//	int a,b,sum,sub,mux,dvd,mud;
//	a=20;
//	b=10;
//	sum=a+b;
//	   printf("\nsum of two nums: %d",sum);
//  sub=a-b;
//     printf("\nsub of two nums: %d",sub);
//  mux=a*b;
//	  printf("\nmux of two nums: %d",mux);
//	dvd=a/b;
//	  printf("\ndvd of two nums: %d",dvd);
//	mud=a%b;
//	  printf("\nmud of two nums: %d",mud);
//PROGRAM 2:AREA OF A CIRCLE:
//   float r;
//   printf("enter the radius of circle:");
//     scanf("%f",&r);
//   printf("area of circle is:%f",3.14*r*r);
//PROGRAM 3:GREATEST OF TWO NUMBERS USING CONDITIONAL OPERATOR:
//    int a,b,c;
//      printf("\nEnter three nums:\na:");
//       scanf("%d", &a);
//    printf("b: ");
//       scanf("%d", &b);
//    printf("c: ");
//       scanf("%d", &c);
//         if  (a>=b&&a>=c)
//		  {
//            printf("%d",a);
//			}
//        else if (b>=a&&b>=c)
//		{
//           printf("%d",b);
//		   }
//        else
//           {
//		   printf("%d",c);
//		   }

//PROGRAM 4: SWAPPING TWO NUMBERS:
//    int a,b,c;
//    a=10;
//    b=20;
//        printf("\noriginal form is:%d,%d",a,b);
//    c=a;
//    a=b;
//    b=c;
//        printf("\nafter swapping:%d,%d",a,b);
// PROGRAM 5: CHECK WETHER A YEAR IS LEAP OR NOT:     
//   int year;
//    printf("enter a year:");
//   scanf("%d",&year);
//      if(year%4==0&&year%100!=0)
//         printf("its a leap year");
//     else
//         printf("its not a leap year");
//     if(year%400==0)
//		  printf("its a leap year");
// PROGRAM 6: TO CHECK WETHER A NUMBER IS EVEN OR ODD:
//   int i;
//  printf("enter a number:");
//  scanf("%d",&i);
//	  if( i%2==0)
//	  	printf("its even");
//	 else
//	 	printf("its odd");
// PROGRAM 8:USE OF PRE/POST OPERATORS:
//  int i=0;
//  	
//    while(i<10){
//    	i++;
//      printf("%d\n",i);
//	}
//    int j=10;
//      while(j>0){
//         j--;
//      printf("%d\n",j);
//     }
// program 11:GENERATE DIFFRENT TYPE OF PATTERNS:
// int i,j,n;
//  printf("enter the number of lines u want to draw:");
//   scanf("%d",&n);
//
//  		for(i=0;i<n;i++){
//  			for(j=0;j<n;j++){
//  				if(j<=i)
//  				
//  					printf("* ");
//				  
//  				else
//  				
//  					printf(" ");
//  					
//  		       }
//			  printf("\n");
//  			
//
//		  }
//  int i,j,n;
//  printf("enter the number of lines u want to draw:");
//   scanf("%d",&n);
//
//  		for(i=0;i<n;i++){
//  			for(j=0;j<n;j++){
//  				if(i<=j)
//  				
//  					printf("* ");
//				  
//  				else
//  				
//  					printf(" ");
//  					
//  		       }
//			  printf("\n");
//  			
//
//		  }
//int i,j,n;
//  printf("enter the number of lines u want to draw:");
//   scanf("%d",&n);
//
//  		for(i=n;i>0;i--){
//  			for(j=0;j<n;j++){
//  				if(j>=i)
//  				
//  					printf("* ");
//				  
//  				else
//  				
//  					printf(" ");
//  					
//  		       }
//			  printf("\n");
//  		
//		  }
//  			
//  		
//  	int i,j,n;
//  printf("enter the number of lines u want to draw:");
//   scanf("%d",&n);
//
//  		for(i=n;i>0;i--){
//  			for(j=0;j<n;j++){
//  				if(i>j)
//  				
//  					printf("* ");
//				  
//  				else
//  				
//  					printf(" ");
//  					
//  		       }
//			  printf("\n");
//  		
//		  }
//  			
//  PROGRAM 12:TO REVERSE A NUMBER:
  
// 123
//   123%10=3 P      523					N			4567  					N			
//   123/10=12	   523%10=3 P			N%10 P			4567%10=7 p				N%10  P
//   12%10=2 P	   523/10=52			N/10 =m			4567/10=456=q			N/10=Q
//   12/10=1P	       52%10=2 P			m%10 P		456%10=6 p				Q%10  P
//   321			   52/10=5 P			m/10 P		456/10=45 l				Q/10=L
//														45%10=5 p				L%10  P
//														45/10=4 p				L/10  P
//	int i,j;
//	printf("enter the number u want to reverse");
//    	scanf("%d",&i);
//    printf("%d",i%10);
//		j=i/10;
//	printf("%d",j%10);
//	printf("%d",j/10);
//int i,j=0,k;
//	printf("enter the number u want to reverse:");				
//    	scanf("%d",&i);									//	321
//    														while(32>1)    while(32>1)		while(3>1)
//			while(i>1){								//	k=	321%10=1		k=	32%10=2	   	k= 3%10=0
//				k=i%10;								//	j=	0*10+1=1		j=	1*10+2=12	j=	12*10+0=120
//				j=j*10+k;							//	i=	321/10=32		i=	32/10=3		i=	3/10=0
//				i=i/10;																		condition false 
//		}												
//			    									  	//	therefore output(step 2)=j,i=3 21;
//
////PRogram 13:factorial of a number:
//  		 int i,f=1,num;
//		    printf("Input the number : ");
//		   scanf("%d",&num); 
//		   for(i=1;i<=num;i++)
//		           f=f*i; 											//4!=1*2*3*4
//		   printf("The Factorial of %d is: %d\n",num,f);  
//		  											              //4!=4*3*2*1=n(n-1)(n-2)(n-3)
  			
//PROGRAM 14:SUM OF INDIVIVUAL DIGITS OF A NUMBER:					
//int i,num,sum=0,remainder;
//     printf("enter a number:");
//	 scanf("%d",&num);	
//	 	while(num!=0){
//	 	remainder=num%10;
//	 	sum=sum+remainder;
//	 	num=num/10;
//	 	
//		 }
//	printf("sum of indiviual digits of  %d is:%d",num,sum);
 // int a=3;													//	231=2+3+1
 // printf("%d",a%10); //a%10=a
  
//PROGRAM 15:CHECK WETHER A NUMBER IS PRIME:	 																							
 			
//	 		for(i=2;i<n;i++)	{
//			 
//			 
// 				if(n%i==0)
// 					printf(" is a prime number");				
//					else
//
//					  	printf(" is  not a prime number");
//						  }
//			
//  		int n,i,m=0,flag=0;    
//printf("Enter the number to check prime:");    
//scanf("%d",&n);    
//m=n/2;    
//for(i=2;i<=m;i++)    
//{    
//if(n%i==0)    
//{    
//printf("Number is not prime");    
//flag=1;    
//break;    
//}    
//}    
//if(flag==0)    
//printf("Number is prime");     
//	
//int i,n;
//printf("enter a number:");
//scanf("%d",&n);
//
//for(i=2;i<n/2;i++){
//	
//	if(n%i==0)
//		printf("its nt a prime number:");
//								break;
//			}
//	if(n%i!=0)
//		printf("is a prime number");
			
//PROGRAM 16:TO CHECK WETHER A NUMBER IS PERFECT:
//perfect number, a positive integer that is equal to the sum of its proper divisors. 
//The smallest perfect number is 6, which is the sum of 1, 2, and 3. 
//Other perfect numbers are 28, 496, and 8,128. /*
//							
// int n,i,m,rem,sum=0;
//	printf("enter a number:");
//	scanf("%d",&n);
//		m=n/2;
//      for (i=1;i<=m;i++){
//       	
//       				rem=n%i;
//			 	   if(rem==0) {
//			 	   		sum=sum+i;
//					}
//       	
//       	
//	 }
//         	
//  
//		if(sum==n)
//	          printf("%d a perfect number",n);			
//		else
//	
//			printf("%d is not a perfect number",n);
				
//int num, rem, sum = 0, i;  
 //take an input from the user.  
//printf("Enter a number\n");  
//scanf("%d", &num);      
 //find all divisors and add them  
//for(i = 1; i < num; i++)  
  //                   {  
    //                      rem = num % i;  
      //                    if (rem == 0)  
        //                              { 
		//								sum=sum+i; 
          //                             }  
            //            }  
//if (sum == num)  
  //                 printf(" %d is a Perfect Number");  
   //        else  
    //              printf("\n %d is not a Perfect Number"); 
	
//PROGRAM 17:TO CHECK EXPONENTIAL OF A NUMBER:

//	#include <math.h>  
//  
//int main()  
//{// Use the exp() function to compute the exponential value for e.  
//    printf("The value for e raised to power 0 is    = %.6f \n", exp(0));  
//    printf("The value for e raised to power 2 is      = %.6f \n", exp(2));  
//    printf("The value for e raised to power 13 is     = %.6f \n", exp(13));  
//    printf("The value for e raised to power 12.01 is     = %.6f \n", exp(12.01));  
//    printf("The value for e raised to power -1 is   = %.6f \n", exp(-1));  
//    printf("The value for e raised to power -3.73 is  = %.6f \n", exp(-3.73));  
//// Using .6f to print the result will return the answer up to 6th decimal place.  
	
	
//	printf(" value of e raise to the power 0 is:%6f",exp(0));

//	printf(" value of e raise to the power 10 is:%6f",exp(10));

//PROGRMA 18: PROGRAM TO WRITE TABLE OF A NUMBER:
//	int i,n,m;
// printf("Enter the number to check its table:");
// 	scanf("%d",&n);
// printf("Enter the lenght of the table u want to b printed:");
// 	scanf("%d",&m);
// 		for(i=1;i<=m;i++){
// 				
// 				printf("\n%d",n*i);
//
//		 }
//PROGRAM 19:TO GENERATE PERFECT NUMBER SERIES UPTO CERTAIN LIMIT:
 
// 	int i,j,end,sum;
//	  printf("Enter the limit upto which u want to check:");
//	  scanf("%d",&end);
//	 
//	 
//	 for(i=1;i<=end;i++){
//	 			sum=0;
//			 for(j=1;j<i;j++){
//			 	
//	 				if(i%j==0)
//					sum=sum+j;
//					
//				}
//		if( sum==i)
//		
//			printf("%d  ",i);
//           	
//    }

 /**
 * C program to print all Perfect numbers between 1 to n 
 */




//    int i, j, end, sum;
//
//    /* Input upper limit to print perfect number */
//    printf("Enter upper limit: ");
//    scanf("%d", &end);
//
//    printf("All Perfect numbers between 1 to %d:\n", end);
//    
//    /* Iterate from 1 to end */
//    for(i=1; i<=end; i++)
//    {
//        sum = 0;
//
//        /* Check whether the current number i is Perfect number or not */
//        for(j=1; j<i; j++)
//        {
//            if(i % j == 0)
//            {
//                sum += j;
//            }
//        }
// 
//        /* If the current number i is Perfect number */
//        if(sum == i)
//        {
//            printf("%d, ", i);
//        }
//    }
//
// PROGRAM 20: TO GENERATE EVEN SERIES :

// int i,n;
// printf("how many even numbers u want to print:");
// scanf("%d",&n);
// 		for( i=2;i<=n;i++){
// 			if(i%2==0)
// 				printf("%d ",i);
// 			
// 			
//		 }
 //PROGRAM 21: TO GENERATE FIBONACCI SERIES:  1 1 2 3 5 8 13 21...sum of two previous digits
// int i,n,sum=0,j;
// printf("enter the limit upto which u want to print fib. series:");
// scanf("%d",&n);
// 
// 		for (i=0;i<=n;i++){
// 												//modified below
// 				sum=sum+i;
// 		printf(" %d ",sum);
// 			 
// 			
// 			
//		 }


// Function to print Fibonacci Number
// using goto statement
//void fibUsingGoto(int N)
//{
//    int a = 0, b = 1, sum = 0;
//lableFib:
// 
//    // Print to series first N term
//    if (N != 0) {													//DRY RUN
// 										
//        // Print series						//N=10				N=9				N=8		         N=7           N=6          N=5       N=4  N=3  N=2  N=1  N=0     
//        printf(" %d", a);						//A=0 P				A=1 P			A=1 P           A=2            A=3 P        A=5  P     A=8 A=11 A=19 A=30  FALSE
// 											  //SUM=a+b=0+1=1		SUM=1+1=2       SUM=1+2=3       SUM=2+3=5      SUM=3+5=    SUM=3+8=11  
//        // Create next term					//A=B=>A=1			A=B=>A=1        A=B=>A=2        A=B=>A=3       A=B=>A=5    A=B=>A=8
//	 sum = a + b;								//B=SUM=1			B=SUM=2			B=SUM=3         B=SUM=5			B=SUM=8    B=SUM=11
//        a = b;								//N--				N--				N--              N=6             N=5       N=4
//        b = sum;								//N=9				N=8				N=7								
// 
//        // Decrement N				//    oupput =0                output=1       OUTPUT=1       OUTPUT=2        OUTPUT=3     OUTPUT=5  8 , 11 ,19 ,30  ...
//        N--;
// 
//        // Jump to lableFib
//        goto lableFib;
//    }
//}
// 
//// Driver Code
//int main()
//{
//    // Given number N
//    int N = 10;
// 
//    // Function Call
//    fibUsingGoto(N);
 
 
 //PROGRAM 22: TO PRINT SERIES:
//  int i,n;
//  printf("enter a number:");
//  scanf("%d",&n);
//   for(i=2;i<n;i++){
//   
//   		if(n%i==0)
//  				break;
//  }
//  	if(i==n)
//  		printf("its prime");
//  	else
//  		printf("not a prime");

//  	write a prgram which takeS Month number as an input from user and display no of days as output;
	
//int month;
//printf("enter the month name:");
//scanf("%d",&month);
//
//
//	switch(month)
//{
//	case 1:
//	case 3:
//	case 5:
//	case 7:
//	case 8:
//	case 10:
//	case 12:
//	printf("\n31days");
//	break;
//	case 2:
//	printf("\n28days");
//	break;
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//	printf("\n30 days");
//	default:
//		printf("invalid month");
//	
//	
//	
//}

// write a program which takes marks obtained in an exmamination (out of 100) from user and display the appropriate answer:
//
//int marks;
//printf("enter the marks obtained:");
//scanf("%d",&marks);
//
//
//	switch(marks)
//{
//	case 91 ... 100:
//		printf("grde A");
//			break;
//	
//
//	case 75 ... 90:
//		printf("grade B");
//			break;
//			
//	case 50 ... 74:
//		printf("grade C");
//			break;
//		default:
//		printf("fail");
	
//}

//PROGRAM: SUM OF TEN NATURAL NUMBERS:

// int i,sum=0;
// printf("sum of ten naturals numbers is:");
// for (i=1;i<10;i++){
// 		sum=sum+i;
// 	
// }
// 		printf("%d",sum);

// int i,sum=0;
// printf("sum of even numbers  upto 10 is:");
// for (i=1;i<10;i++){
// 	if(i%2==0)
// 		sum=sum+i;
// 	
// }
// 		printf("%d",sum);
  
//      int i, n, sum=0;  
//    printf("Enter any number: ");  
//    scanf("%d", &n);  
//    for(m=2;m<n;m+=)
//    for(i=2; i<=n; i+=2)  
//    {  
//        sum += i;  
//    }  
//    printf("Sum of all even numbers from 1 to %d: %d", n, sum);  
////      
////	//PROGRAM 22: TO PRINT  PRIME SERIES:
//  int i,n,m,count=0;
//  printf("enter end of series:");
//  scanf("%d",&n);
//      for(m=1;m<n;m++){
//  
//       for(i=1;i<n;i++){
//   
//   	     	if(n%i==0){
//				
//		
//   	     	break;
//  				count++;}
//  }
//        	if(count==0)
//  	    	   printf("%d ",2*m+1);  // not good practice
//  }
//
//
//int i, n, m, count;
//  printf("Enter a number: ");
//  scanf("%d", &n);
//
//  for (m = 2; m <= n; m++) {
//    count = 0;
//    for (i = 2; i <= m/2; i++) {
//      if (m % i == 0) {
//        count++;
//        break;
//      }
//    }
//    if (count == 0)
//	
//      printf("%d ", m);
//  }
int i,n,m,count;
  printf("Enter a number: ");
  scanf("%d", &n);

  for (m = 2; m <= n; m++) {
    count = 0;
    for (i = 2; i <= m/2; i++) {
      if (m % i == 0) {
        count++;
        break;
      }
    }
    if (count == 0)
      printf("%d ", m);
}







    return 0;
    
    
}
    
    
    
    
    
    
    
    
    
    
    
    

 
  
  
  
 
 
 
 
 
 
 
 
