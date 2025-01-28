void slideShow()  // dizi[s]==>resim indexi
{
            static int s=0;
            if(tekrarlama==0)
           {
                   tekrarlama+=1;
                if(s==7)
                    s=0;

               glcd_init(ON);
               static unsigned int32 sayac=0;
                 static int i,j,k; // STATÝK KALDIR
         
               for(i=0;i<64;i+=8)
                   {   
                   for(j=0;j<128;j++)
                     {
                      for(k=0;k<8;k++)
                     {
                        if(bit_test(logo[dizi[s]][sayac],k))
                      { 
                          glcd_pixel(j,i+k,ON);
 
                       }
                      }
                   sayac++;
                     }
                    }
    
                 sayac=0;
               
                 s++; 
                 
                 
              enable_interrupts(INT_timer1);
                   enable_interrupts(INT_timer0);
          }
                    
}
