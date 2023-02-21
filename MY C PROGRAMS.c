#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
//int main(){





////PROGRAM 1:addtion,subtrction,multiplacation,division and mudulo of two numbers:

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
////PROGRAM 2:AREA OF A CIRCLE:
//   float r;
//   printf("enter the radius of circle:");
//     scanf("%f",&r);
//   printf("area of circle is:%f",3.14*r*r);

////PROGRAM 3:GREATEST OF TWO NUMBERS USING CONDITIONAL OPERATOR:

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

////PROGRAM 4: SWAPPING TWO NUMBERS:

//    int a,b,c;
//    a=10;
//    b=20;
//        printf("\noriginal form is:%d,%d",a,b);
//    c=a;
//    a=b;
//    b=c;
//        printf("\nafter swapping:%d,%d",a,b);

//// PROGRAM 5: CHECK WETHER A YEAR IS LEAP OR NOT:
     
//   int year;
//    printf("enter a year:");
//   scanf("%d",&year);
//      if(year%4==0&&year%100!=0)
//         printf("its a leap year");
//     else
//         printf("its not a leap year");
//     if(year%400==0)
//		  printf("its a leap year");

//// PROGRAM 6: TO CHECK WETHER A NUMBER IS EVEN OR ODD:

//   int i;
//  printf("enter a number:");
//  scanf("%d",&i);
//	  if( i%2==0)
//	  	printf("its even");
//	 else
//	 	printf("its odd");

//// PROGRAM 8:USE OF PRE/POST OPERATORS:

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

//// program 11:GENERATE DIFFRENT TYPE OF PATTERNS:

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
////  PROGRAM 12:TO REVERSE A NUMBER:
  
//// 123
////   123%10=3 P      523					N			4567  					N			
////   123/10=12	   523%10=3 P			N%10 P			4567%10=7 p				N%10  P
////   12%10=2 P	   523/10=52			N/10 =m			4567/10=456=q			N/10=Q
////   12/10=1P	       52%10=2 P			m%10 P		456%10=6 p				Q%10  P
////   321			   52/10=5 P			m/10 P		456/10=45 l				Q/10=L
////														45%10=5 p				L%10  P
////														45/10=4 p				L/10  P
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
//////PRogram 13:factorial of a number:

//  		 int i,f=1,num;
//		    printf("Input the number : ");
//		   scanf("%d",&num); 
//		   for(i=1;i<=num;i++)
//		           f=f*i; 											//4!=1*2*3*4
//		   printf("The Factorial of %d is: %d\n",num,f);  
//		  											              //4!=4*3*2*1=n(n-1)(n-2)(n-3)
//  			
////PROGRAM 14:SUM OF INDIVIVUAL DIGITS OF A NUMBER:
					
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
  
////PROGRAM 15:CHECK WETHER A NUMBER IS PRIME:	 																							
 			
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

////or

//for(i=2;i<n/2;i++){
//	
//	if(n%i==0)
//		printf("its nt a prime number:");
//								break;
//			}
//	if(n%i!=0)
//		printf("is a prime number");

		
////PROGRAM 16:TO CHECK WETHER A NUMBER IS PERFECT:

////perfect number, a positive integer that is equal to the sum of its proper divisors. 
////The smallest perfect number is 6, which is the sum of 1, 2, and 3. 
////Other perfect numbers are 28, 496, and 8,128. /*
							
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
//				
//int num, rem, sum = 0, i;  
 //take an input from the user.  
//printf("Enter a number\n");  
//scanf("%d", &num);      
 //find all divisors and add them  
//for(i = 1; i < num; i++)  
  //                  {  
    //                      rem = num % i;  
      //                    if (rem == 0)  
        //                              { 
		//								sum=sum+i; 
          //                             }  
            //            }  
//if (sum == num)  
//                  printf(" %d is a Perfect Number");  
//           else  
//                  printf("\n %d is not a Perfect Number"); 
//	
////PROGRAM 17:TO CHECK EXPONENTIAL OF A NUMBER:

////	#include <math.h>  

  
//int main()  
//{// Use the exp() function to compute the exponential value for e.  
//    printf("The value for e raised to power 0 is    = %.6f \n", exp(0));  
//    printf("The value for e raised to power 2 is      = %.6f \n", exp(2));  
//    printf("The value for e raised to power 13 is     = %.6f \n", exp(13));  
//    printf("The value for e raised to power 12.01 is     = %.6f \n", exp(12.01));  
//    printf("The value for e raised to power -1 is   = %.6f \n", exp(-1));  
//    printf("The value for e raised to power -3.73 is  = %.6f \n", exp(-3.73));  
//// Using .6f to print the result will return the answer up to 6th decimal place.  
//	
//	
//	printf(" value of e raise to the power 0 is:%6f",exp(0));
//
//	printf(" value of e raise to the power 10 is:%6f",exp(10));


////PROGRMA 18: PROGRAM TO WRITE TABLE OF A NUMBER:

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

////PROGRAM 19:TO GENERATE PERFECT NUMBER SERIES UPTO CERTAIN LIMIT:

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
//
// /**
// * C program to print all Perfect numbers between 1 to n 
// */
//
//
//
//
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


//// PROGRAM 20: TO GENERATE EVEN SERIES :

// int i,n;
// printf("how many even numbers u want to print:");
// scanf("%d",&n);
// 		for( i=2;i<=n;i++){
// 			if(i%2==0)
// 				printf("%d ",i);
// 			
// 			
//		 }
// //PROGRAM 21: TO GENERATE FIBONACCI SERIES:  1 1 2 3 5 8 13 21...sum of two previous digits

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


//// Function to print Fibonacci Number:

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
//int main()
//{
//    // Given number N
//    int N = 10;
// 
//    // Function Call
//    fibUsingGoto(N);
// 

// //PROGRAM 22: TO PRINT prime SERIES:

//  int i,n;
//  printf("enter a number:");
//  scanf("%d",&n);
//  
//   for(i=2;i<n;i++){
//   
//   		if(n%i==0)
//  				break;
//  }
//  	if(i==n)	
//    	printf("its prime");
//  	else
//  		printf("not a prime");
//}
//write a prgram which takeS Month number as an input from user and display no of days as output;
	
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
//}

//// write a program which takes marks obtained in an exmamination (out of 100) 
////from user and display the appropriate answer:

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
//	
//}
//
////PROGRAM: SUM OF TEN NATURAL NUMBERS:

// int i,sum=0;
// printf("sum of ten naturals numbers is:");
// for (i=1;i<10;i++){
// 		sum=sum+i;
// 	
// }
// 		printf("%d",sum);
//
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
//   	     	break;
//  				count++;}
//  }
//        	if(count==0)
//  	    	   printf("%d ",2*m+1);  // not good practice
//  }
//}


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
//}
//
//}


//int i,n,m,count;
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
//      printf("%d ", m);
//}


////FUNCTIONS:
//// WRITE A FUNCTION WHICH PRINTS SUM OF TWO NUMBERS (TNRN):

//void sum()
//{
//	int a,b,c;
//	printf("enter two numbers:");
//	scanf("%d \n",&a,&b);
//	c=a+b;
//	printf("sum is %d ",c);
//
//}
// int main(){
//	
//	sum();
// 	
// 	return 0;
// }

//TSRN:
//void sum(int a,int b)
//{
//	int c;
//	c=a+b;
//	printf("sum is %d",c);
//	
//	
//}
// int main(){
// 	
// 	sum(4,5);
// 	return 0;
//	 
//	 }
//
////(TNRS):
//  
//  int sum(){
//  	int a,b,c;
//  	printf("enter two numbers:\n");
//  	
//  	scanf("%d\n",&a);
//  	scanf("%d",&b);
//  	c=a+b;
//  	return c;
//  }
//   int main() {
//    int s;
//   	s=sum();
//   	printf("sum is %d",s);
//   	return 0;
//   	
//   	
//   }
//    

//TSRS:
//    int sum( int a, int b){
//  	int c;
//  	c=a+b;
//  	return c;
//  }
//   int main() {
//    int s,x,y;
//    printf("enter two numbers:\n");
//    scanf("%d\n",&x);
//    scanf("%d",&y);
//   	s=sum(x,y);
//   	printf("sum is %d",s);
//   	return 0;
//   	
//   	
//   }
////WRITE A FUNCTION TO PRINT AREA OF A CIRCLE:TSRS

//float area( int r){
//	  
//	return 3.14*r*r;
//	
//	
//}
// int main(){
// 	int r,a;
// 	printf("enter radius of circle:");
// 	scanf("%d",&r);
// 	a=area(r);
// 	printf("area of circle is %d",a);
// 	return 0;
// 	
// }
//
//// WRITE A FUNCTION TO CHECK WETHER A GIVEN NUMBER IS EVEN OR ODD,RETURN 1 FOR EVEN AND 0 FOR ODD;  
//  int oddEven(int n){
//  	 if(n%2==0)
//  	 	return 1;
//  		return 0;   // else return 0;
//  		
//  	
//  	
//  }
//    
//    int main(){
//    	
//    	int n;
//    	printf("enter a num:");
//    	scanf("%d",&n);
//    	
//    if(oddEven(n))
//    	printf("even");
//    	
//    else
//    	printf("odd");
//    	
//	}
//    
//    //WRITE A FUNCTION TO PRINT FACTORIAL  OF A NUMBER:
//   int fact( int n) {
//   	int f=1;
//   	 while(n){
//   	
//   	      f= f*n;
//   	 		n--;
//		}
//		return f;
//	}
//   	int main(){
//	   int a,b;
//	   printf("enter a number:");
//	   scanf("%d",&a);
//	  b = fact(a);
//	   printf("%d",b);
//	   
//	   
////PROGRAM 23:TO CHECK WETHER A NUMBER IS ARMSTRONG OR NOT:
///ARMSTRONG:is a number that is equal to the sum of cubes of its digits. For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.

//Let's try to understand why 153 is an Armstrong number.

//153 = (1*1*1)+(5*5*5)+(3*3*3)  
//where:  
//(1*1*1)=1  
//(5*5*5)=125  
//(3*3*3)=27  
//So:  
//1+125+27=153
//  
// int n,r,temp,sum=0;
// printf("enter a number:");
// scanf("%d",&n);
// 	temp=n;
// 	while(n>0){
// 		
// 	r=n%10;    
//		sum=sum+(r*r*r);    
//		n=n/10;    
//	 }
//	 
//	if(temp==sum)
// 		printf(" number is armstrong");
//   	else
//   		printf(" number is not armstrong");
//   	}
   	
//int n,r,sum=0,temp;    
//printf("enter the number=");    
//scanf("%d",&n);    
//temp=n;    
//while(n>0)    
//{    
//r=n%10;    
//sum=sum+(r*r*r);    
//n=n/10;    
//}       
//if(temp==sum)    
//printf("armstrong  number ");    
//else    
//printf("not armstrong number"); }


////TO CHECK WETTHER A NUMBER IS PAILDROME OR NOT :


////A palindrome number is a number that remains the same when digits are reversed.
////For example, the number 12321 is a palindrome number, but 1451 is not a palindrome number.
 
// int n,r,sum=0,temp;
// printf("enter a number:"); 
//	scanf("%d",&n);
//	temp=n;
//		while(n){
//	r=n%10;    
//	sum=(sum*10)+r;    
//	n=n/10;    
// }    
//if(temp==sum)    
//printf("palindrome number ");    
//else    
//printf("not palindrome");   
		

//123%10=3   12%10=2         1%10=1           
//sum=3      sum=3*10+2=32    sum=32*10+1=321 print  reverse of 123 is 321 
//123/10=12    12/10=1          1/10=false


//// ARRAYS: PROGRAM 25-30:
//
//// DECLARING AN ARRAY:

//int arr[]={2, 3, 4, 5, 6};
//int i;
//	// printf("%d\n",arr[0]); //2
//	  arr[0]=6;
//     //printf("%d",arr[0]);//6
//   
//	for(i=0;i<5;i++)
//	
//		printf("%d\n",arr[i]); 
//			
//	}


//	int i;
//	int myNumbers[4];
//		myNumbers[0]=20;
//		myNumbers[1]=25;
//		myNumbers[2]=34;
//		myNumbers[3]=84;
//		
//	for(i=0;i<4;i++)
//      printf("%d\n",myNumbers[i]);
//}

////2D ARRYAS:

//int matrix[2][3]={{4,5,6},{16,20,21}};
//int i,j;
//	//printf("%d\n",matrix[0][2]);
//	//printf("%d",matrix[0][0]);
//	for(i=0;i<2;i++){
//		for(j=0;j<3;j++){
//			printf("%d ",matrix[i][j]);
			
			
//		}
//	}


// sorting array in ASCENDING ORDER:

// int arr[]={4,7,3,2};
//int i,j,a;
//	for(i=0;i<4;i++){
//		for(j=i+1;j<4;j++){
//		
//		if(arr[i]>arr[j]){
//			a=arr[i];
//			arr[i]=arr[j];
//			arr[j]=a;
//		}
//		
//	}
//	}
//	printf("sorted array\n");
//		for(i=0;i<4;i++)
//			printf("%d ",arr[i]);



//int a,i,j,size,arr[20];
//printf("enter the size of array=");
//scanf("%d",&size);
//	printf("enter the  elements of array:\n");
//		for(i=0;i<size;i++)
//			scanf("%d ",&arr[i]);
//				for(i=0;i<size;i++){
//			
//					for(j=i+1;j<size;j++){
//				
//						if(arr[i]>arr[j]){
//					
//							a=arr[i];
//							arr[i]=arr[j];
//							arr[j]=a;
//					
//				}
//				
//				
//			}
//			
//			
//			
//		}
	//printf("sorted array in ascending order is given as:\n");
//	for(i=0;i<size;i++)
//	
//		printf("%d\n",arr[i]);



// find greatest element in an array:
//		
//	printf("enter the size of the array:");
//	printf("enter the elements of the array\n");
//		for(i=1;i<size;i++)
//			scanf("%d",&arr[i]);
//			for(i=0;i<size;i++){
//				for(j=i+1;j<size;j++){
//				 	if(arr[i]>arr[j]){
//						
//						a=arr[i];
//						arr[i]=arr[j];
//						arr[j]=a;
//						
//					}	
//					
//					
//					
//				}
//			
//			
//			
//		}
//		
//		for(i=0;i<size;i++)	{
//			
//				printf(" greatest element in the array is %d",arr[size-1]);
//															break;
// 
//					}
//
////TO PRINT SMALLEST NUMBER IN AN ARRAY:
//
//int i,a,j,size,arr[20];
////printf("enter the size of the array:");
//	scanf("%d",&size);
//	printf("enter the elements of the array\n");
//	scanf("%d",&arr[i]);
//		for(i=1;i<size;i++)
//			scanf("%d",&arr[i]);
//			for(i=0;i<size;i++){
//				for(j=i+1;j<size;j++){
//				 	if(arr[i]>arr[j]){
//						
//						a=arr[i];
//						arr[i]=arr[j];
//						arr[j]=a;
//						
//					}	
//					
//					
//					
//				}
//			
//			
//			
//		}
//		
//	//	for(i=0;i<size;i++)	{
//			
//		//		printf(" greatest element in the array is %d",arr[size-1]);
////															break;
// 
//				//	}
//
//
//for(i=0;i<size;i++)	{
//			
//			printf(" smallest element in the array is %d",arr[0]);
//														break;
// 
//				}

////SUM OF ELEMENTS OF AN ARRAY:
//
//int i,j,sum=0;
//int arr[4]={3,5,6,7};
//	for(i=0;i<4;i++){
//		sum+=arr[i];
//		
//	}
//printf("sum of elements of array is %d",sum);
//
////PROGRAM 30:TO REVERSE ELEMENTS OF AN ARRAY:

//	int i,arr[]={6,7,8,9};
//		for(i=3;i>=0;i--){
//				printf ("%d ",arr[i]);
//
//	
//}
//
// PROGRAM 31: SEARCH  an ELEMENT OF AN ARRAY of n elements USING LINEAR SEARCH:

//  int a[20],i,key,n,flag=0;
//  
//   printf("enter size of an array=");
//    scanf("%d",&n);
//    
//  printf("Enter array elements:\n");
// 
//    for(i=0;i<n;++i){
//	
//      scanf("%d",&a[i]);
//  }
//        printf("Enter element to search:");
//          scanf("%d",&key);
//               for(i=0;i<n;++i){
//			   
//                    if(a[i]==key)
//                    		break;
//                         flag=1;
//            }
//               if(flag=1)
//                  printf("Element found at index %d",i);
//               else
//                  printf("Element not found");
// 
//
//PROGRAM 32: SEARCH  an ELEMENT OF AN ARRAY of n elements USING BINARRY SEARCH:
////it works on sorted array:
//
//
//int i,size,low,mid,high,key,array[100];
//
//printf(" enter the size of the array:");
//  scanf("%d",&size);
//  
//printf("enter the elements of an array:\n");
//	for(i=0;i<size;i++){
//	  scanf("%d",&array[i]);}
//	  
//printf("enter the value to search:");
// scanf("%d",&key);
// 
// 	  low=0;
//	  high=size-1;
//    mid=(low+high)/2;
//   	
//	while(low<=high){
//		
//		if(array[mid]<key)
//		  	low=mid+1;
//			
//		else if (array[mid]==key){
//		
//		
//			printf("%d found at location %d",key,mid+1);
//			break;
//	}
//	
//	else
//	
//	high=mid-1;
//	mid=(low+high)/2;
//
//   }
//
//    if (low>high)
//       printf("not found!");


//PROGRAM 32: TO PRINT FREQUENCY OF AN ELEMENT IN THE ARRAY:

//	int i,key,size,count=0,flag=0;
//	int arr[100];
//	
// printf("enter the size of array:");
//    scanf("%d",&size);
// printf("enter the elements  of array:\n");
//	for(i=0;i<size;i++){
//	
//	    scanf("%d",&arr[i]);
//	
//	}
//	printf("enter the element u want to check the frequency of:");
//	
//       scanf("%d",&key);
//   
//	for(i=0;i<size;i++){
//	
//		if(arr[i]==key){
//			count+=1;
//				flag=1;
//			
//		}
//		
//}
//	if (flag==1)
//    	printf("%d occurs %d times in the array ",key,count);
//	
//	else
//	
//	   printf("%d does not exist in the array",key);


// PROGRAM 33:TO FIND FREQUENCY oF EVERY ELEMENT IN The ARRAY: 
     
//   int arr[]={1,2,3,6,5,6,6};
//   int i,j,count=0;
//    int length=sizeof(arr)/sizeof(arr[0]);
//    printf(" length of array is:%d \n",length);
//    int frq[length];
//    int visited=-1;
//    
//    for(i=0;i<length;i++){         
//    	count=1;
//    	for(j=i+1;j<length;j++){
//    		
//    		if(arr[i]==arr[j]){
//    			
//    			count++;   
//    			frq[j]=visited;
//			}
//		}
//    	
//             if(frq[i]!=visited)
//    			
//    			frq[i]=count;

//				
//		}
//		for(i=0;i<length;i++){
//			
//			if(frq[i]!=visited){
//				printf(" %d",arr[i]);
//				printf(" | ");
//				printf(" %d\n",frq[i]);
//				
//				
//			}
//			
//		}


//int i,j,length,count,flag=-1;
// int arr[100]; int frq[length];
//printf("enter the size of the array:");									//YET TO B EDITED
//scanf("%d",&length);
//printf("enter the elements of array:\n");
//for(i=0;i<length;i++){
//	scanf("%d",&arr[i]);
//}
//
//for(i=0;i<length;i++){         
//    	count=1;
//   	for(j=i+1;j<length;j++){
//    		
//    		if(arr[i]==arr[j]){
//   			
//    			count++;   
//    			frq[j]=flag;
//			}													
//		}
//  	
//             if(frq[i]!=flag)
//    			
//    			frq[i]=count;
//
//				
//		}
//		for(i=0;i<length;i++){
//			
//			if(frq[i]!=flag){
//				printf(" %d",arr[i]);
//				printf(" | ");
//				printf(" %d\n",frq[i]);
//				
//				
//			}
//			
//		}


//PROGRAM 35: SORT AN ARRAY OF N ELEMENTS USING BUBBLE SORT:
// BUBBLE SORT:Bubble sort in C is a straightforward sorting algorithm 
//that checks and swaps elements if they are not in the intended order. 
//It compares two adjacent elements to find which one is greater or lesser 
//and switches them based on the given condition 
//until the final place of the element is found.

// int i,j,swap,size;
//int arr[100];
//
//printf("enter the size of the array:");
//scanf("%d",&size);
//
//printf("enter the elements of array:\n");
//	for(i=0;i<size;i++){
//
//		scanf("%d",&arr[i]);
//
//	}
//		for(i=0;i<size-1;i++){
//			
//			for(j=0;j<size-i;j++){
//				
//				if(arr[j]>arr[j+1]){
//				
//				swap=arr[j];
//				arr[j]=arr[j+1];
//				arr[j+1]=swap;
//				
//				
//				}
//				
//				
//			}
//		}
//		printf("sorted array in ascending order is as:\n");
//			for(i=0;i<size;i++){
//				printf("%d\n",arr[i]);
//			}
//


//	int i,j,swap,size;
//int arr[100];
//
//printf("enter the size of the array:");
//scanf("%d",&size);
//
//printf("enter the elements of array:\n");
//	for(i=0;i<size;i++){
//
//		scanf("%d",&arr[i]);
//
//	}
//		for(i=0;i<size;i++){
//			
//			for(j=i+1;j<size;j++){
//				
//				if(arr[i]>arr[j]){
//				
//				swap=arr[j];
//				arr[j]=arr[i];
//				arr[i]=swap;
//				
//				
//				}
//				
//				
//			}
//		}
//		printf("sorted array in ascending order is as:\n");
//			for(i=0;i<size;i++){
//				printf("%d\n",arr[i]);
//			}




// SELECTION SORT:
 //This sorting algorithm, iterates through the array
// and finds the smallest number in the array and swaps it with the first element
//  if it is smaller than the first element.
// Next, it goes on to the second element and so on until all elements are sorted.

//PROGRAM 36:SORT AN ARRAY OF N ELEMENTS USING SELECTION SORT:

//int i,j,swap,size,position;
//int a[100];
//
//printf("enter the size of the array:");
//scanf("%d",&size);
//
//printf("enter the elements of array:\n");
//	for(i=0;i<size;i++){
//
//		scanf("%d",&a[i]);
//
//	}
//		for(i=0;i<size-1;i++){
//			position=i;
//			for(j=i+1;j<size;j++){
//				
//				if(a[position]>a[j])
//					
//					position=j;
//				}
//				if(position!=i){
//				
//					swap=a[i];
//					a[i]=a[position];
//					a[position]=swap;
//					
//					
//				}
//				
//			}   
//
// printf("sorted array:\n");
//
//	for(i=0;i<size;i++){
//		
//		printf("%d\n",a[i]);
//	}

//PROGRAM 37: TO INSERT AN ELEMENT IN AN ARRAY OF N ELEMENT AT THE BEIGINNING 
//            AND AT THE END OF THE ARRAY:

//int arr[3]={2,  3,  4,  5 , };
//int i;  // [0],[1],[2],[3],[4]...
//
//arr[4]=7; 
//for(i=0;i<5;i++)
//printf("%d ",arr[i]);

//INSERT ELEMENT AT THE END OF AN ARRAY:

//	int i,j,x,n;
//	int arr[100];
//printf("enter the size of the array:");
//	scanf("%d",&n);
//printf("enter the elements of the ARRAY:\n");
//	for(i=0;i<n;i++){
//		
//		scanf("%d",&arr[i]);
//		
//	}
//
//printf("enter the element u want to insert at the end of an array:");
//scanf("%d",&x);
//
//	arr[n]=x;
//	
//printf("new array after insertion:\n");
//for(i=0;i<n+1;i++){
//	
//	printf("%d ",arr[i]);
//

//inserting the element at any specific position:

//int i,x,n,pos;
//int arr[100];
//
//printf("enter the length of the array:");
//scanf("%d",&n);
//
//printf("enter the elements of the array:\n");
//	for(i=0;i<n;i++){
//		
//		scanf("%d",&arr[i]);
//	
//	}
//
//printf("enter the number u want to insert:");
//scanf("%d",&x);

//printf("enter the index u want to insert the number:"); // for position,,arr[pos-1]=x;
//scanf("%d",&pos);
//
//    n=n+1;											//new value of of n,i.e size is increased by one to original array,,if n=6;now its 7...
//    
//	for(i=n-1;i>=pos;i--){
//		arr[i]=arr[i-1];                             // arr[5]=arr[4];and so on 
//		
//	}
//		arr[pos]=x;                                       //arr[pos-1]=x;          [pos];number pos when put in[] is tread as index:
//	
//for(i=0;i<n;i++){
//	printf("%d ",arr[i]);
//}


//PROGRAM 38: TO delete AN ELEMENT IN AN ARRAY OF N ELEMENT AT THE BEIGINNING ,END
//              AND AT ANY SPECIFIC POSITIOM IN THE ARRAY:

// int i,n,x,index=-1;
// int arr[100];
// 
// printf("enter the size of the array:");
// scanf("%d",&n);
// 
// printf("enter the elements of array:\n");
//	 for(i=0;i<n;i++)
// 		scanf("%d",&arr[i]);
//
//printf("enter the number u want to delete:");
//scanf("%d",&x);
//
//		for(i=0;i<n;i++){
//			if(arr[i]==x){
//				index=i;	
//					break;
//			}
//				
//			
//		}
//		
//		if(index!=-1){
//			for(i=index;i<n-1;i++)              
//				arr[i]=arr[i+1];
//				
//				printf("new array is:\n");
//					for(i=0;i<n-1;i++)
//						printf("%d ",arr[i]);
//			
//            }
//
//	else
//		printf("element not found\n");


//STRINGS:

//DECLARING A STRING
//char greetings[]="hello world";
//printf("%s",greetings);

//greetings[0] = 'J';
//printf("%s", greetings);
// Outputs Jello World! instead of Hello World!

//loop through string

//char carName[] = "Volvo";
//int i;
//
//for (i = 0; i < 5; ++i) {
//  printf("%c\n", carName[i]);
//}


//char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//printf("%s", greetings);

//char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
//char greetings2[] = "Hello World!";

//printf("%lu\n", sizeof(greetings));   // Outputs 13
//printf("%lu\n", sizeof(greetings2));  // Outputs 13


// PROGRAM 39:TO FIND LENGTH OF A STRING WITHOUT USING STRLEN FUNCTIONS;

//char str[]="hello world";
// int i,count=0;
// 
//	for(i=0;str[i]!='\0';i++)
//					count++;
//	
//		printf("%lu", count);



// TAKING INPUT FROM USER,THEN PRINTING THE LENGTH OF THE STRING:

//char favGame[100];
//int i, count=0;
//
// printf("enter the name of the game:\n");
// fgets(favGame, sizeof(favGame), stdin);



//char fullName[100];
//int i,count=0;
//
// printf("Type your full name: \n");
// fgets(fullName, sizeof(fullName), stdin);
//		for(i=0;fullName[i]!='\0';i++)
//					count++;
//    
//    printf(" length of string is %d", count-1);
    
    

// PROGRAM 40:concatenate two strings without using any string handling function:	


//    char str1[100] = "hyder ";
//	char str2[100] = "fida";
//   
//    char str3[100];
//    
//    int i = 0, j = 0;
//   
//    printf("\nFirst string: %s", str1);
//    printf("\nSecond string: %s", str2);
//   
//    // Insert the first string
//    
//  }
//   
//    // Insert the second string
//    
//   i = 0;
//    while (str2[i] != '\0') {
//        str3[j] = str2[i];
//        i++;
//        j++;
//    }
//    str3[j] = '\0';    //inserting null character in str3
//   
//    printf("\nConcatenated string: %s", str3);
   
   
//char str1[100];
//char str2[100];
//char str3[200];
// int i=0,j=0;
// 
//printf("Enter the ist string: ");    
//    fgets(str1, sizeof(str1), stdin);    
//    
//printf("Enter the 2nd string: ");    
//    fgets(str2, sizeof(str2), stdin);  
//	
//	while(str1[i]!='\0') {
//		str3[j]=str1[i];
//			i++;
//			j++;
//		
//	} 
//	
//	i=0;
//	while(str2[i]!='\0') {
//		str3[j]=str2[i];
//			i++;
//			j++;
//			
//		}
//    str3[j]='\0';
//    
//    printf(" concatinated string is: %s", str3);
    
    
// PROGRAM 41:comparing two strings without using string handling functions:

//char str1[]="hyder";
//char str2[]="hyde";
//
//int i ,flag=0;
//
//for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
//        if (str1[i] != str2[i]) {
//            flag = 1;
//            break;
//        }
//}
//    if (flag) 
//        printf("Not Equal.");
//     else 
//        printf("Equal");


// PROGRAM 42:COPY ONE STRING WITHOUT INTO ANOTHER STRING WITHOUT USING STRING HANDLING FUCNTIONS:

//char str1[100];
//char str2[100];
//int i;
//printf("enter the original string:");
// scanf("%s",str1);
//for(i=0;str1[i]!='\0';i++){
//	str2[i]=str1[i];
//	
//}
//str2[i]='\0';
//printf(" copied string is:%s ",str2);


 //or
 
//char s1[1000];
//   char s2[1000]; 
//   printf("Enter any string: "); 
//   gets(s1); 
//   int i; 
//   for(i=0;s1[i]!='\0';i++) { 
//      s2[i]=s1[i]; 
//   } 
//   s2[i]='\0'; 
//   
//   printf("original string s1='%s'\n",s1); 
//   printf("copied string   s2='%s'",s2); 


// PROGRAM 43: FIND LENGTH OF STRING USING STRLEN() FUNCTION:

// char s1[]="HUSSAIN";
//printf("%d",strlen(s1));


//char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//printf("%d", strlen(alphabet));


//taking input from user:

//char s1[100];  
//
//printf("enter the string to find its length:");
//  // scanf("%s",s1); // scans sting with no spaces
//   fgets(s1,sizeof(s1),stdin); //includes spaces n null character
//
// printf(" length of given string is=%d", strlen(s1));



//PROGRAM 44:comparing two strings using  strcmp function:
 
//   char str1[50];  // declaration of char array  
//   char str2[50];  // declaration of char array  
//   int value; // declaration of integer variable  
//   
//   printf("Enter the first string : ");  
//   scanf("%s",str1);  
//   printf("Enter the second string : ");  
//   scanf("%s",str2);  
//   
//   // comparing both the strings using strcmp() function  
//   value = strcmp(str1,str2);  
//   if(value == 0)  
//   printf("strings are same");  
//   else  
//   printf("strings are not same"); 
   
//   
//   char s1[100];
//   char s2[100];
//   int value;
   
// printf("Enter the ist string:");
//    scanf("%s",s1);
//   
// printf("Enter the 2nd string:");
//     scanf("%s",s2);
//
//value=strcmp(s1,s2);
//	
//   if (value==0){
//   	printf("same");
//   }
//   else{
//   	printf("not same");
//   }
   
   
 // PROGRAM 45:CONCATINATE TWO STRINGS USING STRNCAT() FUNCTION: 
 
// 
//   char str1[20] = "Hello ";
//  char str2[20] = "World!";
//// Concatenate str2 to str1 (result is stored in str1)
//strcat(str1, str2);
//// Print str1
//printf("%s", str1);
   
   
//   char s1[100];
//   char s2[100];
//   printf("enter the ist string:");
//   scanf("%s ",s1);
//    
//    printf("enter the 2nd string:");
//   scanf("%s",s2);
//    
//    strcat(s1,s2);
//    
//    printf("%s",s1);
    
    
//PROGRAM 46:COPY ONE STRING INTO ANOTHER STRING USING STRCPY FUNCTION:

//char s1[20] = "Hello ";
//char s2[20] = "world";

//  copy ist in 2nd:

// strcpy(s1,s2);
// printf("%s",s1);
 
 //copy 2nd in ist:
 
//  strcpy(s2,s1);
// printf("%s",s2);
 
 // input from user:
// 
//  char s1[100];
//   char s2[100];
// printf("Enter the ist string:");
//    scanf("%s",s1);
//   
// printf("Enter the 2nd string:");
//     scanf("%s",s2);
//   
//     strcpy(s1,s2);
//   
//   printf("%s",s1);


//PROGRAMS 47-59 at last:

// 60-78:FUNCTIONS: 

//PROGRAM 60: TO IMPLEMENT A FUNCTION WITH NO ARGUMENTS AND NO RETURN VALUE: TNRN (takes nothing returns nothing):

//	void sum(){     			//void means returns nothing and empty braces means takes nothing:
//		int a=10,b=20,c;
//		c=a+b;
//	printf("sum is: %d",c);	
//		
//	}
//	
// int main(){
// 	
//   sum();	
//   
//}

////taking input from user:

// void sum(){
//	int a,b,c;
////	printf("enter two numbers:");
////	scanf("%d ,%d",&a,&b);
//	printf("enter ist number:");
//	  scanf("%d",&a);
//	printf("enter 2nd number:");
//   scanf("%d",&b);
//	c=a+b;
// printf("sum is: %d",c);
//	
//}
//
//int main(){
//	int s;
//	
//	sum();
//
//}


// 61:TSRN : TAKES SOMETHING RETURNS NOTHING:

//void sum(int a,int b){
//	int c;
//	
//	printf("enter ist number:");
//	  scanf("%d",&a);
//	printf("enter 2nd number:");
//	  scanf("%d",&b);
//	 c=a+b;
//printf("sum of two numbers is:%d",c);
//	
//}
//main(){
//	
//	sum(22,23);
//}


//62:TNRS: (takes nothing returns something):


//int sum(){
//	int a,b,c;
//	printf("enter ist number:");
//	  scanf("%d",&a);
//	printf("enter 2nd number:");
//	  scanf("%d",&b);
//	c=a+b;
//	return c;
//	
//}
//int main(){
//	
//	int s;
//	
//	s=sum();
//	
//printf("sum is: %d",s);
//	
//	
//}


//63:TSRS: (takes something returns something);

//int sum( int a,int b){
//	int c;  
//	
//	c=a+b;
//	
//	return c;
//	
//}
//
// main(){
//	
//	int x,y,s;
//	
//	printf("enter ist number:");
//	  scanf("%d",&x);
//	printf("enter 2nd number:");
//	  scanf("%d",&y);
//	  
//	s=sum(x,y);
//	printf("sum of two numbers is: %d",s);
//	
//}


//PROGRAM 64: TO CHECK WETHER A NUmBER IS ODD OR EVEN : TSRS:
 
// int isEven(int a){
// 	
// 	 if(a%2==0)
// 	 	 return 1;
//	  
//	  else
//	  	 return 0;
//		    
// }
// 
//int main(){
//	int i;
//	printf("enter a number:");
//		scanf("%d",&i);
// 	 if(isEven(i))
//	  
//	  	printf("even"); 
//	  
// 	else
//    	printf("odd");
//}

//WRITE A PROGRAM TO CHECK WETHER A NUMBER IS PRIME OR NOT:TSRS:

//int isPrime(int n){
//	int i;
//	for(i=2;i<n/2;i++)
//	
//		if(n%i==0)
//
//		  return 0;
//			return 1;
//   
//    }
//    
//int main(){
//	int x;
//	printf("enter a number:");
//	 scanf("%d",&x);
//	if(isPrime(x))
//		printf("prime");
//	else
//		printf("not prime");
//		
//}


//PROGRAM 65: TO SHOW HOW TO INSERT ELEMENTS IN AN ARRAY AND PRINT THE SAME:

// wrong logic:

//int insertElement(int arr[100],int size,int pos,int num){
//	int i;
//		size=size+1;
//		for (i = size - 1; i >= pos; i--)
//	
//	        	arr[i] = arr[i - 1];
//
//          	   arr[pos - 1] = num;
//
//  for (i = 0; i < size; i++){
//  
//	    	return arr[i];
//    }
//}

//int main(){
//	
//	int i, n,x,num;
//   int arr[100]; 
//   printf("Enter the number of elements (1 to 100): "); 
//      scanf("%d", &n); 
//   for (i = 0; i < n; ++i) 
// {
//    printf("Enter number%d: ", i + 1); 
//         scanf("%d", &arr[i]); 	
//}
//   printf("Enter the element to b inserted : "); 
//      scanf("%d", &num);
//   printf("Enter the position of element to b inserted : "); 
//        scanf("%d", &x); 
//    
//     int m = insertElement(arr,n,x,num);
//     
//         printf("new array is:%d ",m);
//
//}




//int main()
//{
//	int arr[100] = { 0 };
//	int i,x,pos,n = 10;
//
//	// initial array of size 10
//	for (i = 0; i < 10; i++)
//		arr[i] = i + 1;
//
//	// print the original array
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	// element to be inserted
//	x = 50;
//
//	// position at which element
//	// is to be inserted
//	pos = 5;
//
//	// increase the size by 1
//	n++;
//
//	// shift elements forward
//	for (i = n - 1; i >= pos; i--)
//		arr[i] = arr[i - 1];
//
//	// insert x at pos
//	arr[pos - 1] = x;
//
//	// print the updated array
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//			printf("\n");
//
//	return 0;
//}

	

//program 66:to find sum of elements of an Array using functions:

//int arrAdd(int array[],int size){
//	int i;
//	int count=0;
//
//	for(i=0;i<size;i++)
//		count=count+array[i];
//	
//	return count;
//	
//}	
//	
//	int main(){
//		int i,n,sum,arr[100];
//	printf("enter the size of array:");
//		scanf("%d",&n);
//	printf("enter the elements of array:\n");
//	  for(i=0;i<n;i++)
//		scanf("%d",&arr[i]);
//
//	sum=arrAdd(arr,n);
//		printf("sum is:%d",sum);
//		
//		
//	}

//program 67:to find the largest element in an array of n-elements using functions:
    	
//without using functions
//int main(){
//int i, n;
//int arr[100]; 
//printf("Enter the number of elements (1 to 100): "); 
//scanf("%d", &n); 
//for (i = 0; i < n; ++i) 
//{
// printf("Enter number%d: ", i + 1); 
// scanf("%d", &arr[i]); 
// }
//   storing the largest number to arr[0] 
// for (i = 1; i < n; ++i) 
// {
//  if (arr[0] < arr[i]) 
//  arr[0] = arr[i];
//   } 
//   printf("Largest element = %d", arr[0]); 
//  return 0; 
//  }



//USING FUNCTIONS
// int largestNum(int arr[],int size){
//	
//	int i;
//	for(i=0;i<size;i++){
//		
//		if (arr[0]<arr[i])
//			arr[0]=arr[i]; 
//	
//    	}
//    	return arr[0];
//    }
//
//int main(){
//int i, n;
//int arr[100]; 
//printf("Enter the number of elements (1 to 100): "); 
//scanf("%d", &n); 
//for (i = 0; i < n; ++i) 
//{
// printf("Enter number%d: ", i + 1); 
// scanf("%d", &arr[i]); 
// }
//
//   int L=largestNum(arr,n);
//   printf("largest number is %d",L);
//
//
//}


//program 68:to find the smallest element in an array of n-elements using functions:

//  int smallestNum(int arr[],int size){
//	int i;
//	for(i=0;i<size;i++){
//		
//		if (arr[0]>arr[i])
//			arr[0]=arr[i];
//	
//    	}
//    	return arr[0]
//		];
//    }
//   
//  int main(){
//   	int i, n;
//    int arr[100]; 
//  printf("Enter the number of elements (1 to 100): "); 
//    scanf("%d", &n); 
//       for (i = 0; i < n; ++i) 
//        {
//           printf("Enter number%d: ", i + 1); 
//              scanf("%d", &arr[i]); 
//     }
//     
//     int s = smallestNum(arr,n);
//     printf("smallest number is: %d",s);
//    
//   }
//PROGRAM 69: TO SEARCH AN ELEMENT IN AN ARRAY OF N ELEMENTS 
//USING LINEAR SEACRH USING FUNCTIONS:
//int linearSearch(int arr[],int size,int key){
//		int i,k,flag=0;
//		for(i=0;i<size;i++){
//			if(arr[i]==key){
//	
//			    	flag=1;
//				    break;
//			}
//		
//	}
//			if(flag==1)
//			    return i;	
//			      return 0;
//
//}
//   
// int main(){
// 	int arr[100];
//	 int n,x,i;
// 	printf("enter the size of the array:");
// 	  scanf("%d",&n);
// 	printf("enter the elements of the array:\n" );
// 		for(i=0;i<n;i++){
// 	       scanf("%d",&arr[i]);
//			}
// 	  printf("enter the element u want to search:");
// 	    scanf("%d",&x); 
//	   
//	   int z= linearSearch(arr,n,x);
//	   
//	        printf("index of the given element is %d",z);
//		
// }  

//PROGRAM 70: TO SEARCH AN ELEMENT IN AN ARRAY OF N ELEMENTS 
//USING binarry SEACRH USING FUNCTIONS:

//int binarySearch(int arr[],int size,int key) {
//	int i,low=0;
//	int high = size-1;
//	int mid = (low+high)/2;
//  											//DRY RUN
//	while(low<=high){					//0   1  2  3  4  5  6  7  8  9   key=89?
//										//11 23 34 35 40 56 77 89 90  91 
//		if(arr[mid]<key)				//low=[0], high=[9], mid=(0+9)/2=[4]=40!key
//									    //arr[mid]<key=40<89=true;=>
//		  	low=mid+1;					//low=mid+1=4+1=5,high=9,mid=(5+9)/2=[7]=89=key ans.
//												
//		else if (arr[mid]==key){
//			return mid;
//		        	break;
//	}
//	else
//	
//	high=mid-1;
//	mid=(low+high)/2;
//
//   }
//
//    if (low>high)
//       return 0;//  mid=(low+high)/2;
//	     
//	 }
 
//int main(){
//	
//	int arr[100];
//	 int n,x,i;
// 	printf("enter the size of the array:");
// 	  scanf("%d",&n);
// 	printf("enter the elements of the array:\n" );
// 		for(i=0;i<n;i++){
// 	       scanf("%d",&arr[i]);
//			}
// 	  printf("enter the element u want to search:");
// 	    scanf("%d",&x); 
//	
//	int z=binarySearch(arr,n,x);
//	printf(" element found at index %d",z);
//	
//	return 0;
//}


//PROGRAM 71: WRITE A PROGRAM TO REVERSE ELEMENTS OF AN ARRAY OF N ELMENTS USING FUNCTION:

//	int reverseArray(int arr[],int size){
//		int i,j;
//		for(i=size;i>=0;i--){
//			 return arr[i];
//			
//		}
//		
//	}
//		
//int main(){
//	int arr[100];
//	 int n,i;
// 	printf("enter the size of the array:");
// 	  scanf("%d",&n);
// 	printf("enter the elements of the array:\n" );
// 		for(i=0;i<n;i++){
// 	       scanf("%d",&arr[i]);
//			}
// 	  
//	int z=reverseArray(arr,n);
//	printf("%d",z);
//	
//}



//PROGRAM 72:FIND THE FREQUENCY OF AN ELEMENT IN AN ARRAY OF N ELEMETS USING FUNCTIONS:

//int frqEle(int arr[],int size,int key){
//	int i,count=0;
//	for(i=0;i<size;i++){
//		
//		if(arr[i]==key){
//			count++;
//		}
//		
//	}
//   return count;
//	
//}
//
//int main(){
//	int arr[100];
//	 int n,i,x;
// 	printf("enter the size of the array:");
// 	  scanf("%d",&n);
// 	printf("enter the elements of the array:\n" );
// 		for(i=0;i<n;i++){
// 	       scanf("%d",&arr[i]);
//		}
//		
//		printf("enter the element to find its frequency:");
// 	    scanf("%d",&x); 
// 	    
// 	   int z=frqEle(arr,n,x);
// 	    printf("%d element occurs %d times in the array",x,z);
//
//}

//PROGRAM 72:FIND THE FREQUENCY OF every ELEMENT IN AN ARRAY OF N ELEMETS USING FUNCTIONS:

// wrong

int frqAll(int arr[],int size){
	int i,j,flag=0;
	int count;
	for(i=0;i<size;i++){         
    	count=1;
   	for(j=i+1;j<size;j++){
    		
    		if(arr[i]==arr[j]){
    			count++;   
    			arr[j]=flag;
			}													
		}
	
             if(arr[i]!=flag)
    			
    			arr[i]=count;

				
		}
		for(i=0;i<size;i++){
			if(arr[i]!=flag)
	            return arr[i];
	}
		

}

int main(){
	int arr[100];
	 int n,i;
 	printf("enter the size of the array:");
 	  scanf("%d",&n);
 	printf("enter the elements of the array:\n" );
 		for(i=0;i<n;i++){
 	       scanf("%d",&arr[i]);
		}
		for(i=arr[0];i<arr[n];i++){
        	int	z=frqAll(arr,n);
	
		printf("%d occurs %d times in the array\n",i,z);
	}
		
}







//for(i=0;i<length;i++){         
//    	count=1;
//   	for(j=i+1;j<length;j++){
//    		
//    		if(arr[i]==arr[j]){
//   			
//    			count++;   
//    			frq[j]=flag;
//			}													
//		}
//  	
//             if(frq[i]!=flag)
//    			
//    			frq[i]=count;
//
//				
//		}
//		for(i=0;i<length;i++){
//			
//			if(frq[i]!=flag){
//				printf(" %d",arr[i]);
//				printf(" | ");
//				printf(" %d\n",frq[i]);
//				
//				
//			}
//			
//		}








































