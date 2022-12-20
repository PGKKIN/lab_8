char before(char x){
char y;
    if(x=='A')
    {
        y='Z';
        return y;
    }
    else if(x>'A' and x<='Z')
    {
      y=x-1;
      return y;
    }
    return '0';
    
}