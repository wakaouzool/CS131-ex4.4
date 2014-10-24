/*ex4.1

one person = 1+1/2+1/3+1/4+............+1/n = ln(n)+y // y=0.577215564

whole city has m people, total = m*(ln(n)+y))

/*ex4.2:

Algo p(x, n)

input: number x and int n;
output : number x^n;

Procedure:
if (n == 0){ return 1; }

else
	return x*p(x, n - 1);

4.3
Algorithm Power(x,n):
Input: A number x and integer n ≥ 0
Output: The value xn
if n = 0 then
return 1
if n is odd then
y ← Power(x,(n − 1)/2)
return x · y · y
else
y ← Power(x,n/2)
return y · y

int power(int x, size_t n);

int power(int x, size_t n){

	int y;

	if (n==0){ return 1;}

	else if (n%2=1){ y = pow(x, (n-1)/2); return x*y*y; }

	else { y = pow( x, n/2); return y*y; }
}

4.4 

Power(2, 9) = 2*power(2,4)*power(2,4) 
            = 2*(power(2,2)*power(2,2)*power(2,2)*power(2,2))
			= 2*(power(2,1)*power(2,1)*power(2,1)*power(2,1)*power(2,1)*power(2,1)*power(2,1)*power(2,1))
			= 2*(2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0)*2*power(2,0)*power(2,0))
            = 2*2*2*2*2*2*2*2*2
			= 512


4.5
Algorithm BinarySum(A,i,n):
Input: An array A and integers i and n
Output: The sum of the n integers in A starting at index i
if n = 1 then
return A[i]
return BinarySum(A,i, ⌈ n/2 ⌉ ) + BinarySum(A,i + ⌈ n/2 ⌉ , ⌊ n/2 ⌋ )

#include <ctime>

int begin;
int end;

int binarysum( int a[], int i, int n);

int binarysum( int a[], int i, int n){
	if (n==1){return a[i];}

	return binarysum(a[], i, n/2)+binarysum(a[], i+n/2 , n/2);
	}

begin = clock();
binarysum();
end = clock();

int time = (end - begin)/CLK_TCK;




4,6	Graph the functions 8n, 4nlogn, 2n2, n3, and 2n using a logarithmic scale
	for the x- and y-axes. That is, if the function is f (n) is y, plot this as a
	point with x-coordinate at logn and y-coordinate at logy.




4.7
	

4.8
	40n^2 < 2^n^3 when n >=20

4.9

logy=logx+b

4.10

Because y = ax + b is a straight line, and log y =a log x + b also is a straight line
som when log y = n ^alogx+b , it will also be a straight line

4.11

y= (0+2n)*(n+1)/2

4.12

O(f(n)) = worst case O(f(n)) because in every loop , the max runtime is = f(n)




*/

