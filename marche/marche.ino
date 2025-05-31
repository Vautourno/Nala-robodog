#include <Servo.h>

// Définition des broches pour chaque servomoteur
#define Servo_AVD_haut A2
#define Servo_AVG_haut A5
#define Servo_ARD_haut 7
#define Servo_ARG_haut 4

#define Servo_AVD_milieu A1
#define Servo_AVG_milieu A4
#define Servo_ARD_milieu 6
#define Servo_ARG_milieu 3

#define Servo_AVD_bas A0
#define Servo_AVG_bas A3
#define Servo_ARD_bas 5
#define Servo_ARG_bas 2

// Création des objets Servo
Servo servo_AVD_haut;
Servo servo_AVG_haut;
Servo servo_ARD_haut;
Servo servo_ARG_haut;

Servo servo_AVD_milieu;
Servo servo_AVG_milieu;
Servo servo_ARD_milieu;
Servo servo_ARG_milieu;

Servo servo_AVD_bas;
Servo servo_AVG_bas;
Servo servo_ARD_bas;
Servo servo_ARG_bas;

void setup() {
  // Attachement des servomoteurs aux broches correspondantes
  servo_AVD_haut.attach(Servo_AVD_haut);
  servo_AVG_haut.attach(Servo_AVG_haut);
  servo_ARD_haut.attach(Servo_ARD_haut);
  servo_ARG_haut.attach(Servo_ARG_haut);

  servo_AVD_milieu.attach(Servo_AVD_milieu);
  servo_AVG_milieu.attach(Servo_AVG_milieu);
  servo_ARD_milieu.attach(Servo_ARD_milieu);
  servo_ARG_milieu.attach(Servo_ARG_milieu);

  servo_AVD_bas.attach(Servo_AVD_bas);
  servo_AVG_bas.attach(Servo_AVG_bas);
  servo_ARD_bas.attach(Servo_ARD_bas);
  servo_ARG_bas.attach(Servo_ARG_bas);

  // Initialisation des servomoteurs à une position de départ
  setInitialPositions();
}

void loop() {


}  

void setInitialPositions() {
//   // Position initiale des servomoteurs
//   // positions validées le 07/03/25
//   // 120 = parallèle
//   servo_AVD_haut.write(0);
//   //0 = // au corps
//   // 120 = perpendiculaire au corps
//   servo_AVD_milieu.write(0);
//   // 0 droit
//   servo_AVD_bas.write(0);

//   // positions validées le 07/03/25
//   servo_AVG_haut.write(0);
//   // 120 = perpendiculaire au corps
//   servo_AVG_milieu.write(0);
//   // 180 droit
//   servo_AVG_bas.write(0);
  
//   //positions validées le 07/03/25
//   servo_ARD_haut.write(0);
//   // 140 = perpendiculaire au corps
//   servo_ARD_milieu.write(0);
//   // 0 droit
//   servo_ARD_bas.write(0);
  
//   // positions validées le 07/03/25
//   servo_ARG_haut.write(0);
//   // 120 = perpendiculaire au corps
//   // 30 avance
//   servo_ARG_milieu.write(0);
//   // 180 droit
//   servo_ARG_bas.write(0);

   servo_AVD_haut.write(100);
   servo_AVD_milieu.write(115);
   servo_AVD_bas.write(0);

   servo_AVG_haut.write(70);
   servo_AVG_milieu.write(120);
   servo_AVG_bas.write(180);

   servo_ARD_haut.write(70);
   servo_ARD_milieu.write(70);
   servo_ARD_bas.write(0);

   servo_ARG_haut.write(40);
   servo_ARG_milieu.write(90);
   servo_ARG_bas.write(180);

   delay(500);
}


void marcheavant() {
 // lever pattes avant gauche et arrière droite
     //servo_AVG_milieu.write(100);
     //servo_AVG_bas.write(10);
     //delay(200);
     //servo_ARD_milieu.write(50);
     //servo_ARD_bas.write(180);  
     //delay(200);
 // avancer pattes avant gauche et arrière droite
    // servo_AVG_haut.write(90);
     //servo_ARD_haut.write(110);
     //delay(200);
  // reposer pattes avant gauche et arrière droite
    // servo_AVG_haut.write(70);
     //servo_AVG_milieu.write(120);
     //servo_AVG_bas.write(90);
     //servo_ARD_haut.write(90);
     //servo_ARD_milieu.write(70);
     //servo_ARD_bas.write(110);
     //delay(200);  
  // lever pattes avant droite et arrière gauche
     //servo_AVD_milieu.write(50);
     //servo_AVD_bas.write(90);
     //servo_ARG_milieu.write(75);
     //servo_ARG_bas.write(60);
     //delay(200);
  // avancer pattes avant droite et arrière gauche
     //servo_AVD_haut.write(80);
     //servo_ARG_haut.write(75);
     //delay(200);
  // reposer pattes avant droite et arrière gauche
     //servo_AVD_haut.write(100);
     //servo_AVD_milieu.write(70);
     //servo_AVD_bas.write(110);
     //servo_ARG_haut.write(95);
     //servo_ARG_milieu.write(120);
     //servo_ARG_bas.write(80);
     //delay(200);
}
