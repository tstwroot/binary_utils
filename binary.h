// THIS HEADER FILE CONTAINS FUNCTIONS THAT FACILITATE DIRECT WORK WITH BINARY. IT CAN BE VERY USEFUL FOR CODE OPTIMIZATION.

// TODO: Write a function that convert binary to decimal
// TODO: Write a function that convert decimal to binary

// This function set the bit in passed offset. Returns 0 if success, otherwise 1
unsigned char set_bit(unsigned char *byte, unsigned char value, unsigned char offset)
{
  if(offset < 0 || offset > 7 || value < 0 || value > 1)
  {
    return(1);
  }
  
  unsigned char bit = 1;

  if(offset != 0)
  { 
    for(unsigned char i = 0; i < offset; i++)
    {
      bit *= 2;
    }
  }
  
  if(value == 1)
  {
    *byte = *byte | bit;
  }
  else 
  {
    *byte = *byte & ~bit;
  }

  return(0);
}

// This function returns a value of bit in a offset. On error will return -1
char get_bit(unsigned char byte, unsigned char offset)
{
  if(offset < 0 || offset > 7)
  {
    return(-1);
  }

  return((byte >> offset) & 1);
}
