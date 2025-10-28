class Led {
  private:
    int pino; // o atributo será o número do pino

  public:
    // inicializa o pino
    Led(int p) {
      pino = p;
      pinMode(pino, OUTPUT);
    }

    void ligar() {
      digitalWrite(pino, HIGH);
    }

    void desligar() {
      digitalWrite(pino, LOW);
    }

    // Pisca o LED por um tempo determinado
    void piscar(int tempo) {
      ligar();
      delay(tempo);
      desligar();
    }
};

// Ponteiros para objetos Led
Led* led13;
Led* led12;
Led* led11;

void setup() {
  // Alocação dinâmica dos LEDs
  led13 = new Led(13);
  led12 = new Led(12);
  led11 = new Led(11);
}

void loop() {
  led13->piscar(6000); 
  led12->piscar(2000);
  led11->piscar(4000);
}
