#include <Adafruit_MLX90614.h> // inclure la bibliothèque téléchargée

Adafruit_MLX90614 mlx = Adafruit_MLX90614(); // Création de l'objet mlx 


void setup() {
  Serial.begin(9600); //Initialisation du moniteur série
  Serial.println("Température d'un objet");  
  mlx.begin();  //démarrage de mlx
}

void loop() {
 Serial.print("Température ambiante = ");
 Serial.print(mlx.readAmbientTempC()); 
 Serial.print("*C\tTempérature de l'objet = ");
 Serial.print(mlx.readObjectTempC());
 Serial.println("*C");
 delay(1000); //Attendre une seconde avant d'afficher la prochaine température
    }
