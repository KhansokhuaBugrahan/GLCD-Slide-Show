void parametreAA()
{
     int z;
     for(z=0;z<7;z++)
  {
      if(diziyeni[z]==13){

      glcd_init(ON);
     static unsigned int32 sayac=0;
        static int i,j,k; // STATÝK KALDIR
         
   for(i=0;i<64;i+=8)
      {   
         for(j=0;j<128;j++)
         {
            for(k=0;k<8;k++)
            {
               if(bit_test(logo[z][sayac],k))
               { 
                  glcd_pixel(j,i+k,ON);
 
               }
            }
            sayac++;
         }
      }  
    resim=z;
    sayac=0;
      
      break;
    }    
  }
}
