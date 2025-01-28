void counterBackk(int b)
{

 


if(gerisayim<=150 && gerisayim>140)
{
     if(b==0)
         {  
         output_c(0b00011000);
         b=1;
         }
       else{
          output_c(0b01010100);
          b=0;
            } 
 }
 else if(gerisayim<=140 && gerisayim>130)
{
   if(b==0)
          {     
         output_c(0b00011000);
         b=1;
          }
       else{  
        output_c(0b01000100);
         b=0;
           } 
 }
 else if(gerisayim<=130 && gerisayim>120)
{
         if(b==0)
          {   
          output_c(0b00011000);
          b=1;
          }
       else{
     
       output_c(0b00110100);
       b=0;
           } 
 }
 else if(gerisayim<=120 && gerisayim>110)
{
       if(b==0)

          {
          output_c(0b00011000);
          b=1;
          }
          else{
 
           output_c(0b00100100);
            b=0;
              } 
 }
 else if(gerisayim<=110 && gerisayim>100)
{
     if(b==0)
        {    
         output_c(0b00011000);
          b=1;
         }
       else{
         output_c(0b00010100);
         b=0;
           } 
 }
  else if(gerisayim<=100 && gerisayim>90)
{
            if(b==0)
              {
              output_c(0b00011000);
              b=1;
              }
             else if(b==1){  
                output_c(0b00000100);
               b=0;
              }
 }
  else if(gerisayim==90)
{
       output_c(0b10010100);
        //b=1;
 }
 else if(gerisayim==80)
{
     output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_high(DD);
      
 }
 else if(gerisayim==70)
{
     output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(gerisayim==60)
{
         output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(gerisayim==50)
{
         output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(gerisayim==40)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
 }
 if(gerisayim==30)
{
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(gerisayim==20)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(gerisayim==10)
{
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(gerisayim==0)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
 }
 else
{}
 }



 

 
/*

if(t1<=150 && t1>140)
{
     if(a==0)
         {  
         output_c(0b00011000);
         a=1;
         }
       else{
          output_c(0b01010100);
          a=0;
            } 
 }
 else if(t1<=140 && t1>130)
{
   if(a==0)
          {     
         output_c(0b00011000);
         a=1;
          }
       else{  
        output_c(0b01000100);
         a=0;
           } 
 }
 else if(t1<=130 && t1>120)
{
         if(a==0)
          {   
          output_c(0b00011000);
          a=1;
          }
       else{
     
       output_c(0b00110100);
       a=0;
           } 
 }
 else if(t1<=120 && t1>110)
{
       if(a==0)

          {
          output_c(0b00011000);
          a=1;
          }
          else{
 
           output_c(0b00100100);
            a=0;
              } 
 }
 else if(t1<=110 && t1>100)
{
     if(a==0)
        {    
         output_c(0b00011000);
          a=1;
         }
       else{
         output_c(0b00010100);
         a=0;
           } 
 }
  else if(t1<=100 && t1>90)
{
            if(a==0)
              {
              output_c(0b00011000);
              a=1;
              }
             else if(a==1){  
                output_c(0b00000100);
               a=0;
              }
 }
  else if(t1==90)
{
       output_c(0b10010100);
        a=1;
 }
 else if(t1==80)
{
     output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_high(DD);
      
 }
 else if(t1==70)
{
     output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(t1==60)
{
         output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(t1==50)
{
         output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
 }
 else if(t1==40)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
 }
 if(t1==30)
{
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(t1==20)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(t1==10)
{
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
 }
 else if(t1==0)
{
        output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
 }
 else
{}
 }
*/
