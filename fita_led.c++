// Incluindo a Biblioteca necessária
#include <IRremote.h>

// Definindo as Portas de Saída das cores RGB
#define fita_led_vermelho 3 
#define fita_led_verde 5 
#define fita_led_azul 6 

// Definindo porta de Dados do Receptor Infra-Vermelho
#define RECV_PIN 2

// Definindo parâmetros da Biblioteca
IRrecv irrecv(RECV_PIN);
decode_results results;

void setup() {
//   Iniciando o Receptor Infra-Vermelho 
  irrecv.enableIRIn();  

// Definindo portas dos leds com saída
  pinMode(fita_led_vermelho, OUTPUT);
  pinMode(fita_led_verde, OUTPUT);
  pinMode(fita_led_azul, OUTPUT);

// Quando fita led ligar iniciando em azul
  analogWrite(fita_led_vermelho,0 );
  analogWrite(fita_led_verde,0 );
  analogWrite(fita_led_azul,255 );
}

// Coletando resultados do decodificador Infra-Vermelho e definindo as cores de acordo com o Resultado
void loop() {
   {
while (irrecv.decode(&results)) {
irrecv.resume();

//Vermelho 
if(results.value==0xF720DF/* ← Aqui coloca o código extraído do seu controle, cada tecla tem o seu codigo*/){  
    analogWrite(fita_led_vermelho,255 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Vermelho");
    break;
}

//Verde
else if (results.value==0xF7A05F){
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,255 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Verde");
    break;
}

//Azul 
else if (results.value==0xF7609F){  
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,255 );
    Serial.println("Azul");
    break; 
}
  
//Laranja 
else if (results.value==0xF710EF){  
    analogWrite(fita_led_vermelho,2550 );
    analogWrite(fita_led_verde,23 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Laranja");
    break;
  }

//Off
else if (results.value==0xF740BF){
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Off");
    break;  
}

//On
else if (results.value==0xF7C03F){  
    analogWrite(fita_led_vermelho,255 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,0 );
    Serial.println("On");
    break; 
}

//Roxo
else if (results.value==0xF7708F){  
    analogWrite(fita_led_vermelho,255 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,164 );
    Serial.println("Roxo");
    break;
}

//Alaranjado
else if (results.value==0xF730CF){ 
    analogWrite(fita_led_vermelho,254 );
    analogWrite(fita_led_verde,26 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Alaranjado");
    break;
}


//Amarelo
else if (results.value==0xF728D7){ 
    analogWrite(fita_led_vermelho,254 );
    analogWrite(fita_led_verde,117 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Amarelo");
    break;  
}


//Verde Limão
else if (results.value==0xF7906F){
    analogWrite(fita_led_vermelho,161 );
    analogWrite(fita_led_verde,254 );
    analogWrite(fita_led_azul,0 );
    Serial.println("Verde Limão");
    break;
}


//Violeta 
else if (results.value==0xF748B7){
    analogWrite(fita_led_vermelho,254 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,226 );
    Serial.println("Violeta");
    break;
}


//Azul Turquesa
else if (results.value==0xF750AF){
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,76 );
    analogWrite(fita_led_azul,254 );
    Serial.println("Azul Turquesa");
    break; 
}


//Rosa
else if (results.value==0xF76897){
    analogWrite(fita_led_vermelho,254 );
    analogWrite(fita_led_verde,0 );
    analogWrite(fita_led_azul,12 );
    Serial.println("Rosa");
    break;
}


//Azul Celeste 
else if (results.value==0xF78877){  
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,160 );
    analogWrite(fita_led_azul,254 );
    Serial.println("Azul Celeste");
    break;
}


//Azul Marinho
else if (results.value==0xF7A857){
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,106 );
    analogWrite(fita_led_azul,254 );
    Serial.println("Azul marinho ");
    break;
}


//Azul Claro
else if (results.value==0xF7B04F){  
    analogWrite(fita_led_vermelho,0 );
    analogWrite(fita_led_verde,255 );
    analogWrite(fita_led_azul,255 );
    Serial.println("Azul Claro ");
    break;  
}
}
}
}