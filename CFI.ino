# define CH1 12 //light
# define CH2 13 //fan

void setup() {

 Serial.begin(9600);
 pinMode(CH1,OUTPUT);
 pinMode(CH2,OUTPUT);

 digitalWrite(CH1,HIGH);
 digitalWrite(CH2,HIGH);

 delay(2000);
}

void loop() {

  delay(100)

  if(Serial.available())
  {
    char c = Serial.read();

    if(c=='1'){

     digitalWrite(CH1,HIGH);
     digitalWrite(CH2,HIGH);
      
    }

    if(c=='0'){

     digitalWrite(CH1,LOW);
     digitalWrite(CH2,LOW);
      
    }
    
   if(c=='2'){

     digitalWrite(CH1,HIGH);
  
    }
    
   if(c=='-2'){

     digitalWrite(CH12,LOW);
    
   }
    
   if(c=='3'){

     digitalWrite(CH12,HIGH);
     digitalWrite(CH13,HIGH);
      
    }

    if(c=='-3'){

     digitalWrite(CH12,HIGH);
     digitalWrite(CH13,HIGH);
      
    }
      
  }
  
}
