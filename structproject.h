typedef struct voiture
 {
 	int idVoiture;
 	int nbrPlace;
 	int prixJour;
 	char marque[10];
 	char nomVoiture[10];
 	char couleur[7];
 	char EnLocation[4];
 }voiture;
 typedef struct date
 {
 	int jour;
 	int mois;
 	int annee;
 } date;

 typedef struct contraLocation
 {
 	float numContrat;
 	int idVoiture;
 	int idClient;
 	date debut;
 	date fin;
 	int cout;
 } contrat;

 typedef struct Client
 {
 	int idClient;
 	int cin;
 	int telephone;
 	char nom[20];
 	char prenom[20];
 	char adresse[15];
 } client;

