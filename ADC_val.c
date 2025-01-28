 

void adcdegerA(int a){  
   long int value=0;
value=read_adc();                          //BCD giriþ pinleri sýrasýyla ABCD-C4,C5,C6,C7
if(value>=0 && value<=64)
    {
       output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
       
    }
if(value>64 && value<=128)
    { 
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_low(CC);
       output_low(DD);
         
    } 
    if(value>128 && value<=192)
    { 
       output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
         
    } 
    if(value>192 && value<=256)
    { 
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_low(CC);
       output_low(DD);
        
    } 
   if(value>256 && value<=320)
    { 
       output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
         
    } 
    if(value>320 && value<=384)
    { 
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_low(BB);
       output_high(CC);
       output_low(DD);
        
    } 
    if(value>384 && value<=448)
    { 
       output_high(D1);
       output_low(D2);

       output_low(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
       
    } 
    if(value>448 && value<=512)
    { 
       output_high(D1);
       output_low(D2);

       output_high(AA);
       output_high(BB);
       output_high(CC);
       output_low(DD);
       
    } 
    if(value>512 && value<=576)
    { 
       output_high(D1);
       output_low(D2);

       output_low(AA);
       output_low(BB);
       output_low(CC);
       output_high(DD);
      
    } 
   if(value>576 && value<=640)  // 9
    { 
     
       output_c(0b10010100);
        a=1;
    }  
    if(value>640 && value<=641)  //10
    {  
               
             
               output_c(0b00000000);
               
           
    } 
 if(value>641&& value<=704)  //10
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
 if(value>704 && value<=768)  //11
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
   if(value>768 && value<=832)  //12
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
   if(value>832 && value<=896)  //13
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
    if(value>896 && value<=960) //14
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
 if(value>960 && value<=1023) //15
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

 
}
  
