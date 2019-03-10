
/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C
void bitwise(int a, int b, int c)
{
   printf("%d\n%d\n%d\n%d\n%d", a^a, c^b, a&b, c|(a^a), ~(c^b));
   
}