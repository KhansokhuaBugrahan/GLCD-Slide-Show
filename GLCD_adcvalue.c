 void parametre(int c)  // c ==>resim indexi
{
            if(diziyeni[c]==13){        // && c!=resim            //dizi[0]=3 
              glcd_init(ON);
               static unsigned int32 sayac=0;
                 static int i,j,k; // STATÝK KALDIR
         
               for(i=0;i<64;i+=8)
                   {   
                   for(j=0;j<128;j++)
                     {
                      for(k=0;k<8;k++)
                     {
                        if(bit_test(logo[c][sayac],k))
                      { 
                          glcd_pixel(j,i+k,ON);
 
                       }
                      }
                   sayac++;
                     }
                    }
    
                 sayac=0;
                  
                 resim=c;
            }           
}
 

int adcdeger()
{  
  long int value=0;
value=read_adc(); 
static int a=0;      
static int b=0;   
static int c=0;   
static int d=0;   
static int e=0;   
static int f=0; 
static int g=0;
static int resim;                      //BCD giriþ pinleri sýrasýyla ABCD-C4,C5,C6,C7
 if(value>=0 && value<=145)
    {
         
      if(a==0 && diziyeni[0]==13 ){
                resim=0;
         parametre(resim);
                a++;

                b=0;
                c=0;
                d=0;
                e=0;
                f=0;
                g=0;
                return resim;
             }
            
    }
  if(value>145 && value<=290)
    { 
         
      if(b==0 && diziyeni[1]==13){
          resim=1;
         parametre(resim);
                b++;

                a=0;
                c=0;
                d=0;
                e=0;
                f=0;
                g=0;
                return resim;
           
    } 
}
    if(value>290 && value<=435)
    { 

      if(c==0 && diziyeni[2]==13){
            resim=2;
         parametre(resim);
                c++;

                b=0;
                a=0;
                d=0;
                e=0;
                f=0;
                g=0;
                return resim;
             }
      
    } 
    if(value>435 && value<=580)
    { 
        if(d==0 && diziyeni[3]==13){
         resim=3;
         parametre(resim);
                d++;

                b=0;
                c=0;
                a=0;
                e=0;
                f=0;
                g=0;
                return resim;
        } 
            
    } 
   if(value>580 && value<=725)
    { 
      if(e==0 && diziyeni[4]==13){
         resim=4;
         parametre(resim);
                e++;

                b=0;
                c=0;
                d=0;
                a=0;
                f=0;
                g=0;
              return resim;
      }      
    } 
    if(value>725 && value<=870)
    { 
       if(f==0 && diziyeni[5]==13){
         resim=5;
         parametre(resim);
                f++;

                b=0;
                c=0;
                d=0;
                e=0;
                a=0;
                g=0;
               return resim;
             }
          
    } 
    if(value>870 && value<=1023)
    { 
       if(g==0 && diziyeni[6]==13){
         resim=6;
         parametre(resim);
                g++;

                b=0;
                c=0;
                d=0;
                e=0;
                f=0;
                a=0;
             return resim;
             }
             
           
    } 
    
    
   
}




  

