#include <18F46K22.h>
#DEVICE ADC=10

#FUSES NOWDT                    //No Watch Dog Timer
#FUSES NOPROTECT         
#FUSES NOBROWNOUT               //No brownout reset
#FUSES NOLVP                    //No low voltage prgming, B3(PIC16) or B5(PIC18) used for I/O
//#fuses WDT1024



#use delay(internal=16000000)
int tekrarlama=0;
          //////////////////////  gerisayim=arrayTime[s]-t1;
  int resim;
 int diziyeni[7]={13,13,13,13,13,13,13};
 int dizi[7]={11,11,11,11,11,11,11};   
  int arrayTime[7];

#include <HDM64GS12.c>  //modified E0
#include <graphics.c>
#include <pictures.c>

#include <GLCD_func.c>
#include <glcd_timer.c>
#include <instructionPicture.c>
#include <instructionForBeginnigs.c>
#include <instructionForLastt.c>

#define D1 pin_C2               // Segment1 ON/OFF  C2 
#define D2 pin_C3   
            // Segment2 ON/OFF  c3
#define chooseTime pin_A5
#define START pin_A3
#define CHOOSE pin_A4
#define AA pin_C4     
#define BB pin_C5  
#define CC pin_C6  
#define DD pin_C7  

int s=0;
int t1=0;
int b=0; 
int gerisayim = arrayTime[s]-t1;
#include <ADC_val.c>
#include <GLCD_adcvalue.c>
#include <counterBack.c>
#include <countereturn.c>
#include <slideShowPrepared.c> 
int z=0;

#priority timer1,timer0
#int_timer1
void timer1_kesme(void)
{
      set_timer1(15536);     //2.5x10^-7x50kx8  0.1 s
       // static int a=0; 
        //static int t1=0;
        gerisayim=arrayTime[s]-t1;
        if(b==0)
    {
        counterBack(b);  
        b=1;
  
    }
      else 
    {
         counterBack(b);   
        b=0;
    }
            
         
      //glcd_init(ON);
            if(t1==arrayTime[s])
           {  
               if(s==6)
                  s=0; 
                  else
                  s+=1;   
                          
                      
                          
               t1=0;
               tekrarlama=0; 
                            //each interrupt occurs 10 times per second //0.1s
                        
            disable_interrupts(int_timer1);
            }
else{
      t1++;
    
    }
                                                                         
 
}
#int_timer0
void timer0_int(void)
{
      static int a=0; 
  if(z==0)

  {
    if(a==0)
    {
        adcdegerA(a);   
        a=1;
  
    }
    else 
    {
         adcdegerA(a);   
        a=0;
    }
  }
else{
    if(b==0)
     {
       counterBackk(b);  
         b=1;
     }
    else 
       {
       counterBackk(b);                                                                                                        
        b=0;
       }
}


}
void main()
{

 
 
set_tris_c(0x00);
set_tris_a(0x01);

setup_adc(ADC_CLOCK_INTERNAL); 
setup_adc_ports(sAN0,VSS_VDD );         //AN0 analog pin yap
set_adc_channel(0);                     // AN0 pininden oku
delay_us(20);

    output_low(D1);
   output_low(D2);
 set_timer1(15536);
  int onlem=0;


 instructionForBeginnig();
while(1){

   

 

if(input(START) && input(CHOOSE)!=1 && input(chooseTime)!=1)        //GLCD RESÝM DOLAÞIMI
{
      
       

           while(1)
          {
                    
                      static int hold=0; // GLCD'nin ADC den deðer okumasýný engellemek 
                        //static int select=0;
                       if(hold==0)
                          adcdeger();
                     //  static int resim=adcdeger();  

                       
                        
                       
                   if(input(CHOOSE) && input(chooseTime)!=1 && onlem==0)
                    {
                            disable_interrupts(INT_timer1);
                           hold++;    //ileride tekrar sýfýrlanmalý!!!
                            
                           static int i=0;
                          
                           dizi[i]=resim;        
                            i+=1;     //diziyeni[3]=9;
                           diziyeni[resim]=9;        //dizi[0]=3;       diziyeni={13}; dizi={11};
                           
                           onlem+=1;
                            //select+=1;
                           //GLCD_init(ON);     //süre ayarlamasý esnasýnda hangi resimi seçtiðini görmek ==> GLCD_init(ON) ekraný temizler
                           enable_interrupts(INT_timer0);
                          while(input(CHOOSE)){}
                          
                    } 
                    if(input(chooseTime) && input(CHOOSE)!=1 && onlem==1 )      // tekrar
                    {     
                           
                           disable_interrupts(INT_timer1);
                           // butonu kademe atlat
                           
                          static int j=0;
                           
                           arrayTime[j]=glcd_timer();
                           j++;  
                              
                           output_low(D1);
                           output_low(D2);
                           disable_interrupts(INT_timer0); 
                                hold=0;
                                //select=0;  
                                 onlem=0;
                              if(dizi[6]!=11)
                              {
                               disable_interrupts(INT_timer1);
                                              instructionForLast();
                                              while(1)
                                              {
                                                   
                                                      if(input(START))
                                                       {
                                                              z=1; 
                                                             while(1)
                                                                 {
                                                                        
  
                                                                    slideShow();
                                                                           
                                                                 }                                                                                                                                             
                                                        }              
                                              }        
                               }  
                                      parametreAA();         //yeni parametre çaðýr for döngüsü aç resim!=13 deðilse bastýr ve kal(break)
                            while(input(CHOOSE)){}
                        } 
       
        setup_timer_1(T1_INTERNAL | T1_DIV_BY_8);
       setup_timer_0(T0_INTERNAL | T0_8_BIT | T0_DIV_64);  
     
     disable_interrupts(INT_timer1);
   // enable_interrupts(INT_timer1);

  // enable_interrupts(INT_timer0);
    enable_interrupts(GLOBAL);
          
                 }
             }
          }         
       }
 




 
 



