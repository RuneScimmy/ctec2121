<<<<<<< HEAD
//conflict line
=======
//conflict line 
>>>>>>> conflict
#include <stdio.h>

float add (float x, float y)
{
    return x + y;
}
  
float sub (float x, float y)
{
    return x - y;
}

float times (float x, float y)
{
    return x * y;
}

float div (float x, float y)
{
    return x / y;
}

float rem (float x, float y)
{
	return y - x;
}	

int main()
{
    float a, b, r;
    char op;
    do {
       printf("number  op  number?  ");
       scanf(" %f %c %f", &a, &op, &b);
       switch (op)
       {
           case '+' : r = add(a,b);
                      break;
           case 'q' : break;
             
           case '-' : r = sub(a,b);
                      break;
                      
           case '*' : r = times(a,b);
                      break;  
                         
           case '/' : r = div(a,b);
                      break;        
                        
           case 're' : r = rem(a,b);
           	      break;
           	   
           default  : op='?';
       }
       if (op=='?')
          printf("Unknown operator\n");
       else if (op=='q')
          printf("Bye\n");
       else
          printf("%f %c %f = %f\n", a, op, b, r);
    }
    while (op != 'q');
   
    return 0;
}
