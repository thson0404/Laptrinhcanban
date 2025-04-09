#include <stdio.h>

int main() {
    int s, m = 3, n = 5, r, t;
    float x = 3.0, y;
    
    t = n / m;
	printf("t = %d\n", t);
	               
    r = n % m;
	printf("r = %d\n", r);
	              
    y = n / m;
	printf("y = %f\n", y); 
	              
    t = x * y - m / 2;
	printf("t = %d\n", t); 
	      
    x = x * 2.0;
	printf("x = %f\n", x); 
	            
    s = (m + n) / r;
	printf("s = %d\n", s); 
	        
    y = -n;                 
	printf("y = %f\n", y);
 
    return 0;
}

