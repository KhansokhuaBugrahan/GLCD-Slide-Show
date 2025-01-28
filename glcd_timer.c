int glcd_timer(){  
  long int value=0;
value=read_adc();                          //BCD giriþ pinleri sýrasýyla ABCD-C4,C5,C6,C7
if(value>=0 && value<=64)
    {
       
      return 0;
    }
if(value>64 && value<=128)
    { 
       
         return 10;
    } 
    if(value>128 && value<=192)
    { 
       
        return 20;
    } 
    if(value>192 && value<=256)
    { 
       
       return 30;
    } 
   if(value>256 && value<=320)
    { 
       
         return 40;
    } 
    if(value>320 && value<=384)
    { 
      
        return 50;
    } 
    if(value>384 && value<=448)
    { 
      
       return 60;
    } 
    if(value>448 && value<=512)
    { 
       
       return 70;
    } 
    if(value>512 && value<=576)
    { 
      
       return 80;
    } 
    if(value>576 && value<=640)  // 9
    { 
      
       return 90;
    } 
    if(value>640 && value<=704)  //10
    { 
     
         return 100;
    } 
 if(value>704 && value<=768)  //11
    { 
      
     return 110;
}
   if(value>768 && value<=832)  //12
    { 
       
      return 120;
}
   if(value>832 && value<=896)  //13
    { 
     
       return 130;
}
    if(value>896 && value<=960) //14
    { 
      
       return 140;
    }
 if(value>960 && value<=1024) //15
    { 
       
          return 150;
    }
     
}
  


