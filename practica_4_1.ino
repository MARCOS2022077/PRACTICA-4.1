#define entrada A0 // se crea una variable
#define salida 3 // se crea una variable
#define inpin(pin) pinMode(pin,INPUT) // se define y se acorta una función
#define outpin(pin) pinMode(pin,OUTPUT) // se define y se acorta una función
#define high(pin) digitalWrite(pin,HIGH) // se define y se acorta una función
#define low(pin) digitalWrite(pin,LOW) // se define y se acorta una función
int valor_foto; // se crea una variable
#define tiempo(pin) delay(500) // se define y se acorta una función                                                                                                                                                                      
void setup(){ //inica el void setup
Serial.begin(9600); //para el monitor serial.
outpin(salida);  //se declara que pin va a hacer
inpin(entrada);  //se declara que pin va a hacer
 } // se cierra el void setup
void loop(){ //inica el bucle
valor_foto = analogRead(entrada); // se iguala valor a que lea la entrada
Serial.println(valor_foto);//se imprime en el monitor serial valor_foto

if(valor_foto < 800){//se indica como va ir el bicle 
  low(salida);//se le dise que la salida va a estar pagado
  }//se cierra 
  else{//se inica el else 
    high(salida);//se dise que si no este debe encender
    }//se cierra el else
    tiempo();//se coloca el delay
}//finaliza  el programa. 
