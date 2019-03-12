void either_even_or_odd(int a, int b)
{
    if( (a%2 == 0 && b%2 == 0) || (a%2 != 0 && b%2 != 0) )
      printf("True");
    else 
      printf("False");

}