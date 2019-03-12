void Operation(int A, int B, char ch)
{
  switch(ch)
  {
    case '+':
    {
      printf("%d",A+B);
      break;
    }

    case '*':
    {
      printf("%d",A*B);
      break;
    }
    
    case '-':
    {
      if(A>B)
      {
        printf("%d",A-B);
      }
      else
        printf("%d",B-A);

      break;
    }
    
    case '/':
    {
      if(A>B)
      {
        printf("%d",A/B);
      }
      else
        printf("%d",B/A);

      break;
    }

    default:
    {
        printf("Invalid operator");
    }
  }

}