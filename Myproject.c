#include<stdio.h>
#include<stdlib.h>
#define t_max 1000
#define T_MAX 200
#define max 200
#include"structproject.h"

int Menu_Principal();
int Location_Voiture();
void Visualiser_Contrat();
void Louer_Voiture();
void Retourner_Voiture();
void Modifier_Contrat();
int Gestion_Voiture();
void Liste_Voiture();
void Ajouter_Voiture();
void Modifier_Voiture();
void Supprimer_Voiture();
int Gestion_Client();
void Liste_Client();
void Ajouter_Client();
void Modifier_Client();
void Supprimer_Client();

    //*******************************MAIN******************************************************//

void main()
{

      Menu_Principal();

}

//*******************************MENU_PRINCIPALE****************************//

int Menu_Principal()
{
	 int choix;


	 printf("\n                                        \n**************************************************MenuPrincipal*********************************************************\n");


	 printf("\n");

	 printf("\n                       *******************************************************************************************************************************************************************************************");

	 printf("\n                       \***                                                          \***");
	 printf("\n                       \***   -> Location---------------------------------------1    \***");
	 printf("\n                       \***   -> Gestion voitures-------------------------------2    \***");
	 printf("\n                       \***   -> Gestion clients--------------------------------3    \***");
	 printf("\n                       \***   ->  Quitter---------------------------------------4    \***");
	 printf("\n                       \***                                                          \***");
	 printf("\n                       ********************************************************************************************************************************************************************************************");
	 printf("\n\n                                     -> Votre choix  :  ");

	 scanf("%d",&choix);
     system("cls");
     switch(choix)
	{
		case 1 : Location_Voiture();
			break;
		case 2 : Gestion_Voiture();
			break;
		case 3 : Gestion_Client();
			break;
        default : exit(1);

	}
	return choix;
 }

 //**********************LOCATION_VOITURE***************************//

  int Location_Voiture()
{
	 int choix;

	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Location d'une Voiture      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	 printf("\n");

	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Visualiser contrat_________________________________1     \xba");
	 printf("\n                       \xba     Louer voiture______________________________________2     \xba");
	 printf("\n                       \xba     Retourner voiture__________________________________3     \xba");
	 printf("\n                       \xba     Modifier contrat___________________________________4     \xba");
	 printf("\n                       \xba     Retour_____________________________________________5     \xba");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");

	 scanf("%d",&choix);
	 system("cls");
	 	 switch(choix)
	{
		case 1 : Visualiser_Contrat();
			break;
		case 2 : Louer_Voiture();
			break;
		case 3 : Retourner_Voiture();
			break;
		case 4 : Modifier_Contrat();
			break;
		case 5 :  Menu_Principal();
			break;
		default : exit(1);

	}

	 return choix;
 }


 //********************VISUALISER_CONTRAT****************************//

 void Visualiser_Contrat()
 {
 	float n;
 	contrat c;
	FILE* fichier=NULL;
 	char chaine[max]="";

 	fichier = fopen("listcontrat.txt","r");
 	printf("\n\n*** affichage des liste des contrats :****\n\n");
 	while(fgets(chaine,t_max,fichier) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(fichier);
	fichier = fopen("listcontrat.txt","r");
	if(fichier== NULL)
	{
		printf("\n\n le contrat n'existe pas !! ");
	}
	if(fichier != NULL)
	{
 		do
 		{
 			printf("\n entrez le numero de contrat que vous pouver visualiser : \n ");
 			scanf("%f",&n);
		}while(n>100 || n<=1 );
		fichier = fopen("listcontrat.txt","r");
 		fseek(fichier,(n-1)*89,SEEK_SET);
		fgets(chaine,max,fichier);
		printf("%s",chaine);

		fclose(fichier);
 	}
	fclose(fichier);

	Location_Voiture();
 }

 //*************LOUER_VOITURE*******************//

 void Louer_Voiture()
 {
 	int id,nb,i=0,j=0;
 	int x,b,z,m,k,a,n,f,g;
 	char chaine[t_max]="";
 	char nomClient[8],prenomClient[10];
 	FILE* fichier=NULL;
 	FILE* ct=NULL;
 	FILE* ov=NULL;
 	client c;
 	voiture v;
 	contrat cont;
    fichier = fopen("listclients.txt","r");
    if(fichier == NULL)
    {

		do
		{
			printf("\n est ce que vous pouvez louer une voiture ? (oui == 1 ou non == 0) : ");
			scanf("%d",&x);
		}while(x != 1 && x != 0);
		if(x == 1)
		{
			printf("\n Ok: Entrer vos informations :\n");
			do
			{
				printf(" l'id du client : \n");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>100);
 			printf("entrer le nom du client : \n ");
 			scanf("%s",c.nom);
 			printf("entrer le prenom du client : \n");
 			scanf("%s",c.prenom);
 			do
			{
				printf("entrer votre cin : \n");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >99999);
 			printf("donner l'adresse : \n");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("donner votre  numero de telephone : \n");
 				scanf("%d",c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);


			fichier=fopen("listclients.txt","a+");
	   		{

				fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
        	}
	    	fclose(fichier);
	    }
	    else
	    {
	    	printf("\n-------------------------------------------CORDIALEMENT !!------------------------------------------------\n");
		}

	    ov = fopen("listvoiture.txt","r");
	   	if(ov == NULL)
	   	{

			do
 			{
 				printf("l'id du voiture est  : ");
 				scanf("%d",&v.idVoiture);
 			}while(v.idVoiture<1 || v.idVoiture>100);
		 	printf("entrer la marque : \n");
 			scanf("%s",v.marque);
 			printf("entre le nom de la voiture : ");
 			scanf("%s",v.nomVoiture);
 			printf("entrer la couleur : ");
 			scanf("%s",v.couleur);
 			do
 			{
 				printf("entrer le nombre de places : ");
 				scanf("%d",&v.nbrPlace);
 			}while(v.nbrPlace<1 || v.nbrPlace>7);
 			do
 			{
				 printf("entrer le prixjour : ");
 				scanf("%d",&v.prixJour);
 			}while(v.prixJour<400 || v.prixJour>1000);
			 printf(" la voiture est  en location ? : ");
 			 scanf("%s",v.EnLocation);


 			ov = fopen("listvoiture.txt","a+");
 			{
 				fprintf(ov,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
				fclose(ov);
			}

			printf("\n donner votre numero de contrat : ");
			scanf("%f",&cont.numContrat);
			do
			{
				printf(" donner l'id du client : ");
				scanf("%d",&cont.idClient);
			}while(cont.idClient<0 || cont.idClient>99);
			do
			{
				printf(" donner l'id du voiture : ");
				scanf("%d",&cont.idVoiture);
			}while(cont.idVoiture<0 || cont.idVoiture>99);
			do
			{
				printf(" donner le cout : ");
				scanf("%d",&cont.cout);
			}while(cont.cout<100 || cont.cout>1000);
			printf("donner la  Date de debut de contrat : \n");
			do{
				printf("le  Jour : ");
				scanf("%d",&cont.debut.jour);
			}while(cont.debut.jour<1 || cont.debut.jour>30);
			do
			{
				printf("le  Mois : ");
				scanf("%d",&cont.debut.mois);
			}while(cont.debut.mois<1 || cont.debut.mois>12);
			do
			{
				printf("l'Annee : ");
				scanf("%d",&cont.debut.annee);
			}while(cont.debut.annee<2000 || cont.debut.annee>=2021);
			printf("la Date de fin de contrat : \n");
			do
			{
				printf("le  Jour : ");
				scanf("%d",&cont.fin.jour);
			}while(cont.fin.jour<1 || cont.fin.jour>30);
			do{
				printf("le Mois : ");
				scanf("%d",&cont.fin.mois);
			}while(cont.fin.mois<1 || cont.fin.mois>12);
			do{
				printf("l'Annee : ");
				scanf("%d",&cont.fin.annee);
			}while(cont.fin.annee<2000 || cont.fin.annee>=2021);


			ct = fopen("listcontrat.txt","a+");
			{
				fprintf(ct,"num:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
				fclose(ct);
			}
			fclose(ov);
	   	   }

	    	printf("\n \n votre La location est bien effectue !! MERCI ^^ \n");

	   	    fclose(fichier);
	}
	fichier = fopen("listclients.txt","r");
	if(fichier != NULL)
	{

 		printf("\n donner le nom du clients : ");
 		scanf("%s",&nomClient);
 		printf("\n donner le prenom du clients : ");
 		scanf("%s",&prenomClient);
 		printf("\n");
 		fichier = fopen("listclients.txt","r");
 		while(fgets(chaine,t_max,fichier) != NULL)
 		{
 			printf("%s \n",chaine);
		}
		fclose(fichier);
		do
		{
			printf("avez-vous etrouvee votre nom dans cette liste ? pour oui faire 1 pour non faire  0 : \n");
 			scanf("%d",&f);
		}while(f != 1 && f != 0);
		if(f == 1)
		{
		 	printf("\n numero de ligne ? : ");
			scanf("%d",&nb);

			while(i<nb*109)
			{
				fichier = fopen("listclients.txt","r");
				fseek(fichier,i,SEEK_SET);
				fgets(chaine,t_max,fichier);
				printf("\n %s",chaine);
				fclose(fichier);

				do{
					printf("\n cest ce que c'est  vous ? pour oui faire 1 pour non faire 0 :  ");
					scanf("%d",&z);
				}while(z != 1 && z !=0);
				if(z == 1)
				{
					printf("\n VALIDER ! \n");
					i+=112;
					printf("\n donner l'id du voiture a rechercher : ");
					scanf("%d",&id);
					printf("\n");
					ov = fopen("listvoiture.txt","r");
					while(fgets(chaine,t_max,ov) != NULL)
 					{
 						printf("%s \n",chaine);
					}
					fclose(ov);
					do
					{
						printf("\n votre id est dans la liste ? si oui faire 1 si non faire 0 : ");
 						scanf("%d",&g);
					}while(g != 1 && g != 0);
					if(g == 1)
					{
						printf("\n donner le numero de la ligne  : ");
						scanf("%d",&nb);
						printf("\n");
						while(j<nb*109)
						{
							ov = fopen("listvoiture.txt","r");
							fseek(ov,j,SEEK_SET);
							fgets(chaine,t_max,ov);
							printf("\n %s",chaine);
							fclose(ov);

							do{
								printf("\n avez-vouz trouver la voiture ? si oui faire 1 si non faire 0 :  ");
								scanf("%d",&m);
							}while(m != 1 && m !=0);
							if(m == 1)
							{
								do
								{
									printf("\n si la voiture est dispo faire faire 1 pour oui et 0 pour non : ");
									scanf("%d",&k);
								}while(k != 1 && k != 0);
								if(k == 1)
								{
									printf("\n remplire les informations a nouveau  : \n");

 									do
 									{
 										printf(" l'id du voiture : ");
 										scanf("%d",&v.idVoiture);
 									}while(v.idVoiture<1 || v.idVoiture>99);
								 	printf(" la marque : ");
 									scanf("%s",v.marque);
 									printf("le nom de la voiture : ");
 									scanf("%s",v.nomVoiture);
 									printf("la  couleur : ");
 									scanf("%s",v.couleur);
 									do
 									{
 										printf("le nombre de places : ");
 										scanf("%d",&v.nbrPlace);
 									}while(v.nbrPlace<1 || v.nbrPlace>7);
 									do
 									{
										 printf(" le prixjour : ");
 										scanf("%d",&v.prixJour);
 									}while(v.prixJour<400 || v.prixJour>1000);
									 printf("la voiture est en location ? (ecrire oui) : \n");
 									 scanf("%s",v.EnLocation);

 									ov = fopen("voiture.txt","a+");
 									{
 										fprintf(ov,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
										fclose(ov);
									}
									j+=112;
									printf("\n donner le numero du contrat : ");
									scanf("%f",&cont.numContrat);
									do
									{
										printf("donner l'id du client : ");
										scanf("%d",&cont.idClient);
									}while(cont.idClient<0 || cont.idClient>100);
									do
									{
										printf(" donner l'id du voiture : ");
										scanf("%d",&cont.idVoiture);
									}while(cont.idVoiture<0 || cont.idVoiture>100);
									do
									{
										printf(" donner le cout : ");
										scanf("%d",&cont.cout);
									}while(cont.cout<400 || cont.cout>1000);
									printf("la  Date de debut du contrat : \n");
									do{
										printf("le Jour : ");
										scanf("%d",&cont.debut.jour);
									}while(cont.debut.jour<1 || cont.debut.jour>30);
									do
									{
										printf("le Mois : ");
										scanf("%d",&cont.debut.mois);
									}while(cont.debut.mois<1 || cont.debut.mois>12);
									do
									{
										printf("l'Annee : ");
										scanf("%d",&cont.debut.annee);
									}while(cont.debut.annee<2000 || cont.debut.annee>=2021);
									printf("la  Date de fin de contrat : \n");
									do
									{
										printf("le Jour : \n");
										scanf("%d",&cont.fin.jour);
									}while(cont.fin.jour<1 || cont.fin.jour>30);
									do{
										printf("le  Mois : \n");
										scanf("%d",&cont.fin.mois);
									}while(cont.fin.mois<1 || cont.fin.mois>12);
									do{
										printf("l' Annee : \n");
										scanf("%d",&cont.fin.annee);
									}while(cont.fin.annee<2000 || cont.fin.annee>=2021);

									ct = fopen("listcontrat.txt","a+");
									{
										fprintf(ct,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
										fclose(ct);
									}
								}
								else
								{
									printf("\n dezolé cette voiture n'exite pas ! \n");

									ov = fopen("voiture.txt","a+");
									{
										fprintf(ov,"%s",chaine);
										fclose(ov);
									}
									j+=112;
								}
							}
							else
							{
								ov= fopen("voiture.txt","a+");
								{
									fprintf(ov,"%s",chaine);
									fclose(ov);
								}

								j+=112;
							}

						}
						remove("listvoiture.txt");
						rename("voiture.txt","listvoiture.txt");
					}
					else
					{
						printf("\n la voiture n'existe pas !! ");

						do
 						{
 							printf("\t l'id du voiture : ");
 							scanf("%d",&v.idVoiture);
 						}while(v.idVoiture<1 || v.idVoiture>100);
					 	printf("\t la marque  : ");
 						scanf("%s",v.marque);
 						printf("\t le nom de la voiture : ");
 						scanf("%s",v.nomVoiture);
 						printf("\t couleur  : ");
 						scanf("%s",v.couleur);
 						do
 						{
 							printf("\t nombre de places : ");
 							scanf("%d",&v.nbrPlace);
 						}while(v.nbrPlace<1 || v.nbrPlace>7);
 						do
 						{
							 printf("\t le prix d'un jour : ");
 							scanf("%d",&v.prixJour);
 						}while(v.prixJour<400 || v.prixJour>1000);
						 printf("\tla voiture est  en location  ?( ecrivez oui) : ");
 						 scanf("%s",v.EnLocation);

 						ov= fopen("listvoiture.txt","a+");
 						{
 							fprintf(ov,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
							fclose(ov);
						}


						printf("\n\t donner numero de contrat : ");
						scanf("%f",&cont.numContrat);
						do
						{
							printf("\t donner l'id du client : ");
							scanf("%d",&cont.idClient);
						}while(cont.idClient<0 || c.idClient>100);
						do
						{
							printf("\t donner l'id du voiture : ");
							scanf("%d",&cont.idVoiture);
						}while(cont.idVoiture<0 || cont.idVoiture>100);
						do
						{
							printf("\t donner le cout : ");
							scanf("%d",&cont.cout);
						}while(cont.cout<400 || cont.cout>100);
						printf("\t Date de debut de contrat : \n");
						do{
							printf("\t\t Jour : \n");
							scanf("%d",&cont.debut.jour);
						}while(cont.debut.jour<1 || cont.debut.jour>30);
						do
						{
							printf("\t\t Mois : \n");
							scanf("%d",&cont.debut.mois);
						}while(cont.debut.mois<1 || cont.debut.mois>12);
						do
						{
							printf("\t\t Annee : \n");
							scanf("%d",&cont.debut.annee);
						}while(cont.debut.annee<2000 || cont.debut.annee>=2021);
						printf("\t Date de fin de contrat : \n");
						do
						{
							printf("\t\t Jour : \n");
							scanf("%d",&cont.fin.jour);
						}while(cont.fin.jour<1 || cont.fin.jour>30);
						do{
							printf("\t\t Mois : \n");
							scanf("%d",&cont.fin.mois);
						}while(cont.fin.mois<1 || cont.fin.mois>12);
						do{
							printf("\t\t Annee : \n");
							scanf("%d",&cont.fin.annee);
						}while(cont.fin.annee<2000 || cont.fin.annee>=2021);

						ct = fopen("listcontrat.txt","a+");
						{
							fprintf(ct,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
							fclose(ct);
						}
						fclose(ov);

					}
				}
				else
				{
					i+=112;
				}
			}
		}
		else
		{

			do
			{
				printf("\t l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>100);
 			printf("\t le nom du client  : ");
 			scanf("%s",c.nom);
 			printf("\t le prenom du client  : ");
 			scanf("%s",c.prenom);
 			do
			{
				printf("\t CIN  : ");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >10000);
 			printf("\t l'adresse  : ");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("\t numero de telephone : ");
 				scanf("%d",&c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);


			fichier=fopen("listclients.txt","a+");
	   		{

				fprintf(fichier,"\nl'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
        	}
	    	fclose(fichier);

			printf("\n donner l'id du voiture a rechercher : ");
			scanf("%d",&id);
			printf("\n\n");
			ov = fopen("listvoiture.txt","r");
			printf("\n la liste des voitures: \n\n");
			while(fgets(chaine,t_max,ov) != NULL)
 			{
 				printf("%s \n",chaine);
			}
			fclose(ov);
			do
			{
				printf("\n est ce que vous avez trouvee votre id dans cette liste oui faire 1  non faire 0 : ");
 				scanf("%d",&g);
			}while(g != 1 && g != 0);
			if(g == 1)
			{
				printf("\n donner le numero de ligne ou il y a la voiture a Louer : ");
				scanf("%d",&nb);

				while(i<nb*109)
				{
					ov = fopen("listvoiture.txt","r");
					fseek(ov,i,SEEK_SET);
					fgets(chaine,t_max,ov);
					printf("\n %s",chaine);
					fclose(ov);

					do{
						printf("\n est-il la voiture qui choisi le client ? si oui faire 1 si non faire 0 :  ");
						scanf("%d",&m);
					}while(m != 1 && m !=0);
					if(m == 1)
					{
						do
						{
							printf("\n est-il disponible si oui faire 1 si non faire 0 : ");
							scanf("%d",&k);
						}while(k != 1 && k != 0);
						if(k == 1)
						{
							printf("\n\t\t Remplire les informations du voiture en changeons la location de non a oui : \n\n");

 							do
 							{
 								printf("\t l'id du voiture : ");
 								scanf("%d",&v.idVoiture);
 							}while(v.idVoiture<1 || v.idVoiture>100);
						 	printf("\t la marque  : ");
 							scanf("%s",v.marque);
 							printf("\t le nom de la voiture : ");
 							scanf("%s",v.nomVoiture);
 							printf("\t couleur  : ");
 							scanf("%s",v.couleur);
 							do
 							{
 								printf("\t nombre de place : ");
 								scanf("%d",&v.nbrPlace);
 							}while(v.nbrPlace<1 || v.nbrPlace>7);
 							do
 							{
								 printf("\t le prix d'un jour : ");
 								scanf("%d",&v.prixJour);
 							}while(v.prixJour<400 || v.prixJour>1000);
							 printf("\t est-il en location (ecrivez oui) : ");
 							 scanf("%s",v.EnLocation);

 							ov = fopen("voiture.txt","a+");
 							{
 								fprintf(ov,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
								fclose(ov);
							}
							i+=112;

							printf("\n entre le numero de contrat : ");
							scanf("%f",&cont.numContrat);
							do
							{
								printf("\n entrer l'id du client : ");
								scanf("%d",&cont.idClient);
							}while(cont.idClient<0 || cont.idClient>100);
							do
							{
								printf("\t donner l'id du voiture : ");
								scanf("%d",&cont.idVoiture);
							}while(cont.idVoiture<0 || cont.idVoiture>100);
							do
							{
								printf(" donner le cout : ");
								scanf("%d",&cont.cout);
							}while(cont.cout<400 || cont.cout>1000);
							printf("donner la Date de debut de contrat : \n");
							do{
								printf("le Jour : ");
								scanf("%d",&cont.debut.jour);
							}while(cont.debut.jour<1 || cont.debut.jour>30);
							do
							{
								printf("le Mois : ");
									scanf("%d",&cont.debut.mois);
							}while(cont.debut.mois<1 || cont.debut.mois>12);
							do
							{
								printf("l' Annee : ");
								scanf("%d",&cont.debut.annee);
							}while(cont.debut.annee<2000 || cont.debut.annee>=2021);
							printf("le Date de fin de contrat : \n");
							do
							{
								printf("le Jour : ");
								scanf("%d",&cont.fin.jour);
							}while(cont.fin.jour<1 || cont.fin.jour>30);
							do{
								printf("le Mois : ");
								scanf("%d",&cont.fin.mois);
							}while(cont.fin.mois<1 || cont.fin.mois>12);
							do{
								printf("l'Annee : ");
								scanf("%d",&cont.fin.annee);
							}while(cont.fin.annee<2000 || cont.fin.annee>=2021);

							ct = fopen("listcontrat.txt","a+");
							{
								fprintf(ct,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
								fclose(ct);
							}
						}
						else
						{
							printf("\n cette voiture n'existe pas elle est deja louer  \n");

							ov = fopen("voiture.txt","a+");
							{
								fprintf(ov,"%s",chaine);
								fclose(ov);
							}
							i+=11;
						}
					}
					else
					{
						ov = fopen("voiture.txt","a+");
						{
							fprintf(ov,"%s",chaine);
							fclose(ov);
						}
						i+=112;
					}

				}
				remove("listvoiture.txt");
				rename("voiture.txt","listvoiture.txt");
			}
			else
			{
				printf("\nil n y a pas de voiture \n");
				do
 				{
 					printf("entrer l'id du voiture : ");
 					scanf("%d",&v.idVoiture);
 				}while(v.idVoiture<1 || v.idVoiture>100);
			 	printf("\t la marque : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture : ");
 				scanf("%s",v.nomVoiture);
 				printf("\t couleur  : ");
 				scanf("%s",v.couleur);
 				do
 				{
 					printf("\t le  de places : ");
 					scanf("%d",&v.nbrPlace);
 				}while(v.nbrPlace<1 || v.nbrPlace>9);
 				do
 				{
					 printf("\t le prixjour : ");
 					scanf("%d",&v.prixJour);
 				}while(v.prixJour<400 || v.prixJour>1000);
				 printf("\tle voiture est  en location ? **ecrivez oui : ");
 				 scanf("%s",v.EnLocation);

 				ov = fopen("listvoiture.txt","a+");
 				{
 					fprintf(ov,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ov);
				}

				printf("\n\t donner numero de contrat : ");
				scanf("%f",&cont.numContrat);
				do
				{
					printf("\t donner l'id du client : ");
					scanf("%d",&cont.idClient);
				}while(cont.idClient<0 || cont.idClient>100);
				do
				{
					printf("\t donner l'id du voiture : ");
					scanf("%d",&cont.idVoiture);
				}while(cont.idVoiture<0 || cont.idVoiture>100);
				do
				{
					printf("\t donner le cout : ");
					scanf("%d",&cont.cout);
				}while(cont.cout<100 || cont.cout>999);
				printf("\t Date de debut de contrat : \n");
				do{
					printf("\t\t  le Jour : ");
					scanf("%d",&cont.debut.jour);
				}while(cont.debut.jour<1 || cont.debut.jour>30);
				do
				{
					printf("\t le  Mois : ");
					scanf("%d",&cont.debut.mois);
				}while(cont.debut.mois<1 || cont.debut.mois>12);
				do
				{
					printf("l' Annee : ");
					scanf("%d",&cont.debut.annee);
				}while(cont.debut.annee<2000 || cont.debut.annee>=2021);
				printf("\t la Date de fin de contrat : \n");
				do
				{
					printf("\t\t le Jour : ");
					scanf("%d",&cont.fin.jour);
				}while(cont.fin.jour<1 || cont.fin.jour>30);
				do{
					printf("\t\t le Mois : ");
					scanf("%d",&cont.fin.mois);
				}while(cont.fin.mois<1 || cont.fin.mois>12);
				do{
					printf("\t\t l'Annee : ");
					scanf("%d",&cont.fin.annee);
				}while(cont.fin.annee<2000 || cont.fin.annee>=2021);

				ct = fopen("listcontrat.txt","a+");
				{
					fprintf(ct,"\nnum:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d",cont.numContrat,cont.idVoiture,cont.idClient,cont.cout,cont.debut.jour,cont.debut.mois,cont.debut.annee,cont.fin.jour,cont.fin.mois,cont.fin.annee);
					fclose(ct);
				}
				fclose(ov);
			}

		}


 		fclose(fichier);
	}

	printf("\n La location est bien  effectue \n");

	Location_Voiture();

}


void Retourner_Voiture()
{
 	FILE *ouvre;
 	FILE *contra;
 	voiture v;
 	char chaine[t_max]="";
 	int nb,id,c,x,k,i=0,j=0;
    printf("\n donner l'id de la voiture que vous pouvez Retourner : ");
 	scanf("%d",&id);

	ouvre = fopen("listvoiture.txt","r");
	while(fgets(chaine,t_max,ouvre) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(ouvre);
	do
	{
		printf("\n est ce que vous avez trouvee votre id dans cette liste : ");
 		scanf("%d",&k);
	}while(k != 1 && k != 0);
	if(k == 1)
	{
		printf("\n donner le numero de ligne de voiture a Retourner : ");
   		scanf("%d",&nb);
 		while(i<nb*109)
		{
			ouvre = fopen("listvoiture.txt","r");
			fseek(ouvre,i,SEEK_SET);
			fgets(chaine,t_max,ouvre);
			printf("\n %s",chaine);
			fclose(ouvre);

			do
			{
				printf("\n est-il la voiture a Retourner : ");
				scanf("%d",&c);
			}while(c != 1 && c != 0);
			if(c == 1)
			{
 				printf("\n\t\t remplire les informations du voiture en changeons la location de oui a non : \n\n");
 				do
 				{
 					printf("\t l'id du voiture : ");
 					scanf("%d",&v.idVoiture);
 				}while(v.idVoiture<1 || v.idVoiture>100);
			 	printf("\t la marque  : ");
 				scanf("%s",v.marque);
 				printf("\t le nom de la voiture  : ");
 				scanf("%s",v.nomVoiture);
 				printf("\t couleur : ");
 				scanf("%s",v.couleur);
 				do
 				{
 					printf("\t nombre de place : ");
 					scanf("%d",&v.nbrPlace);
 				}while(v.nbrPlace<1 || v.nbrPlace>7);
 				do
 				{
					 printf("\t le prixjour : ");
 					scanf("%d",&v.prixJour);
 				}while(v.prixJour<400 || v.prixJour>1000);
				 printf("\t est-il en location (ecrivez non) : ");
 				 scanf("%s",v.EnLocation);

 				ouvre = fopen("voituree.txt","a+");
 				{
 					fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ouvre);
				}
				i+=112;

				printf("\nsuprimer votre contrat \n\n");

				printf("\n entrer le nombre de contrat que vous avez deja dans votre fichier : ");
				scanf("%d",&nb);
				while(j<nb*89)
				{
					contra = fopen("listcontrat.txt","r");
					fseek(contra,j,SEEK_SET);
					fgets(chaine,t_max,contra);
					printf("%s",chaine);
					fclose(contra);

					printf("\n est ce que cette contrat a le meme de id de voiture ? (oui = 1 || non = 0) : ");
					scanf("%d",&x);
					printf("\n");

					if(x == 1)
					{
						j+=89;
					}
					else
					{
						contra = fopen("listcont.txt","a+");
						{
							fprintf(contra,"%s",chaine);
							fclose(contra);
						}
						j+=89;
					}
				}
				remove("listcontrat.txt");
				rename("supprimercont.txt","listcontrat.txt");
			}
			else
			{
				ouvre = fopen("voituree.txt","a+");
				{
					fprintf(ouvre,"%s",chaine);
					fclose(ouvre);
				}
				i+=112;
			}
		}
		remove("listvoiture.txt");
		rename("voituree.txt","listvoiture.txt");
	}
	else
	{
		printf("\n l'id n'existe pas \n");
	}
	printf("\nC'est bien MERCI ^^ \n");

	Location_Voiture();
}

 void Modifier_Contrat()
{
	FILE* contra;
	contrat c;
	char chaine[t_max]="";
	int x,nb,k,i=0;

	printf("\n entrer le nombre de contrat que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);
	while(i<nb*89)
	{
		contra = fopen("listcontrat.txt","r");
		fseek(contra,i,SEEK_SET);
		fgets(chaine,t_max,contra);
		printf("\n %s",chaine);
		fclose(contra);
		do{
		printf("\n tu veux modifier quelque chose dans cette contrat ou non ? (oui = 1 || non = 0) : ");
		scanf("%d",&x);
		}while(x != 1 && x != 0);
		if(x == 1)
		{
			printf("\n Remplire les informations et modifier ce que vous voullez \n");

			printf("\n\t donner numero de contrat : ");
			scanf("%f",&c.numContrat);
			do
			{
				printf("\t donner l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>100);
			do
			{
				printf("\t donner l'id du voiture : ");
				scanf("%d",&c.idVoiture);
			}while(c.idVoiture<0 || c.idVoiture>100);
			do
			{
				printf("\t donner le cout : ");
				scanf("%d",&c.cout);
			}while(c.cout<400 || c.cout>1000);
			printf("\t Date de debut de contrat : \n");
			do{
				printf("\t\t Jour : ");
				scanf("%d",&c.debut.jour);
			}while(c.debut.jour<1 || c.debut.jour>30);
			do
			{
				printf("\t\t Mois : ");
				scanf("%d",&c.debut.mois);
			}while(c.debut.mois<1 || c.debut.mois>12);
			do
			{
				printf("\t\t Annee : ");
				scanf("%d",&c.debut.annee);
			}while(c.debut.annee<2000 || c.debut.annee>=2021);
			printf("\t Date de fin de contrat : \n");
			do
			{
				printf("\t\t Jour : ");
				scanf("%d",&c.fin.jour);
			}while(c.fin.jour<1 || c.fin.jour>30);
			do{
				printf("\t\t Mois : ");
				scanf("%d",&c.fin.mois);
			}while(c.fin.mois<1 || c.fin.mois>12);
			do{
				printf("\t\t Annee : ");
				scanf("%d",&c.fin.annee);
			}while(c.fin.annee<2000 || c.fin.annee>=2021);

			contra = fopen("supprimercont.txt","a+");
			{
				fprintf(contra,"num:%f  id voiture:%d  id client:%d  cout:%d  Date Debut:%d/%d/%d  Date Fin:%d/%d/%d\n",c.numContrat,c.idVoiture,c.idClient,c.cout,c.debut.jour,c.debut.mois,c.debut.annee,c.fin.jour,c.fin.mois,c.fin.annee);
				fclose(contra);
			}

			i+=89;
		}
		else
		{
			contra = fopen("supprimercont.txt","a+");
			{
				fprintf(contra,"%s",chaine);
				fclose(contra);
			}
		i+=89;
		}

	}

	remove("listcontrat.txt");
	rename("supprimercont.txt","listcontrat.txt");

	printf("\n\n BIEN ^^ \n\n");

	Location_Voiture();
}

   int Gestion_Voiture()
{
	 int choix;

	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Gestion des Voitures      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	 printf("\n");

	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Liste des Voitures_________________________________1     \xba");
	 printf("\n                       \xba     Ajouter voiture____________________________________2     \xba");
	 printf("\n                       \xba     Modifier voiture___________________________________3     \xba");
	 printf("\n                       \xba     Supprimer voiture__________________________________4     \xba");
	 printf("\n                       \xba     Retour_____________________________________________5     \xba");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");

	 scanf("%d",&choix);
	 system("cls");
	  switch(choix)
	{
		case 1 : Liste_Voiture();
			break;
		case 2 : Ajouter_Voiture();
			break;
		case 3 : Modifier_Voiture();
			break;
		case 4 : Supprimer_Voiture();
			break;
		case 5 : Menu_Principal();
			break;
		default : exit(1);
   }
	return choix;
 }
void Liste_Voiture(voiture *v,int n)
{
	char chaine[t_max]="";
	FILE* ouvre=NULL;
	ouvre=fopen("listvoiture.txt","r");
	if(ouvre != NULL)
	{
		while(fgets(chaine,t_max,ouvre) != NULL)
		{
		printf("%s \n",chaine);
	    }
	    fclose(ouvre);
	}
	else
	{
		printf("\n ce fichier n'existe pas !!! \n");
	}
	printf("\n\n");
	Gestion_Voiture();
}

void Ajouter_Voiture()
{
	   voiture v;
	   int i,n;
	    printf("\n entrer le nombre de voiture que vous voullez ajouter : \t");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	printf(L"\n\n la voiture  %d----- \n\n",i+1);
	    	do{
				printf("\n\t l'id de la voiture : ");
				scanf("%d",&v.idVoiture);
			}while(v.idVoiture<1 || v.idVoiture>100);
	    	printf("\t la Marque de la voiture  : ");
			scanf("%s",v.marque);
			printf("\t Nom Voiture  : ");
			scanf("%s",v.nomVoiture);
			printf("\t la couleur (: ");
			scanf("%s",v.couleur);
			do{
				printf("\t nombre de place : ");
				scanf("%d",&v.nbrPlace);
			}while(v.nbrPlace<1 || v.nbrPlace>8);
			do{
				printf("\t prix d'un jour : ");
				scanf("%d",&v.prixJour);
			}while(v.prixJour<400 || v.prixJour>1000);
			printf("\t est-il en location ?  : ");
			scanf("%s",v.EnLocation);


			FILE *ouvre = fopen("listvoiture.txt","a+");
	   		{
			printf("\n");
			fprintf(ouvre,"\nl'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,prix d'un jour:%d$,en location:%s",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
		    }
		  fclose(ouvre);
    	}
    	printf("\n\n C'EST BIEN ^^ \n\n");
		Gestion_Voiture();
}
void Modifier_Voiture()
{
	FILE* ouvre;
	voiture v;
	char chaine[t_max]="";
	int x,c,nb,i=0;

	ouvre = fopen("listvoiture.txt","r");
	while(fgets(chaine,t_max,ouvre) != NULL)
 	{
 		printf("%s \n",chaine);
	}
	fclose(ouvre);
	do
	{
		printf("\nvous pouvez modifier une voiture  ? : ");
		scanf("%d",&c);
	}while(c != 1 && c != 0);
	if(c == 1)
	{
		printf("\n entrer le nombre de voiture que vous avez dans votre fichier : ");
		scanf("%d",&nb);
		while(i<nb*109)
		{
			ouvre = fopen("listvoiture.txt","r");
			fseek(ouvre,i,SEEK_SET);
			fgets(chaine,t_max,ouvre);
			printf("\n %s",chaine);
			fclose(ouvre);

			do{
			printf("\n tu veux modifier les informations de cette voiture ? 1 oui 0 non : ");
			scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
				printf("\n remplire les information et changer ce que vous voullez \n");
				do
				{
					printf("\t l'id voiture : ");
					scanf("%d",&v.idVoiture);
				}while(v.idVoiture<1 || v.idVoiture>100);
				printf("\t marque  : ");
				scanf("%s",v.marque);
				printf("\t Nom  : ");
				scanf("%s",v.nomVoiture);
				printf("\t couleur : ");
			    scanf("%s",v.couleur);
				do
				{
					printf("\t nombre de place  : ");
					scanf("%d",&v.nbrPlace);
				}while(v.nbrPlace<1 || v.nbrPlace>7);
				do
				{
					printf("\t prix d'un jour  : ");
					scanf("%d",&v.prixJour);
				}while(v.prixJour<400 || v.prixJour>1000);
				printf("\t est-il en location ? : ");
				scanf("%s",v.EnLocation);

				ouvre = fopen("lvoit.txt","a+");
				{
					fprintf(ouvre,"l'id voiture:%d,marque:%s,Nom:%s,couleur:%s,nombre de place:%d,le prix d'un jour:%d$,en location:%s\n",v.idVoiture,v.marque,v.nomVoiture,v.couleur,v.nbrPlace,v.prixJour,v.EnLocation);
					fclose(ouvre);
				}
				i+=112;
			}
			else
			{
				ouvre = fopen("lvoit.txt","a+");
				{
					fprintf(ouvre,"%s",chaine);
					fclose(ouvre);
				}
				i+=112;
			}
		}
		remove("listvoiture.txt");
		rename("lvoit.txt","listvoiture.txt");

		printf("\n\nc'est bien ^^ \n\n");
	}
	else
	{
		printf("\nMerci à vous \n\n");
	}

	Gestion_Voiture();
}


void Supprimer_Voiture()
{
	FILE* ouvre;
	voiture v;
	char chaine[t_max]="";
	int x,nb,id,c,i=0;

	printf("\n donner l'id de la voiture que vous voullez supprimer : ");
	scanf("%d",&id);
	printf("\n entrer le nombre de voiture que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);
	while(i<nb*109)
	{
		ouvre = fopen("listvoiture.txt","r");
		fseek(ouvre,i,SEEK_SET);
		fgets(chaine,t_max,ouvre);
		printf("\n %s",chaine);
		fclose(ouvre);

		printf("\n est ce que cette voiture a le meme id que tu as entree ?  : ");
		scanf("%d",&x);
		printf("\n");

		if(x == 1)
		{
			i+=112;
		}
		else
		{
			ouvre = fopen("voiture.txt","a+");
			{
				fprintf(ouvre,"%s",chaine);
				fclose(ouvre);
			}
			i+=112;
		}
	}
	remove("listevoiture.txt");
	rename("voiture.txt","listvoiture.txt");
	printf("\n \n la voiture a été supprimer \n\n");

	Gestion_Voiture();
}

  int Gestion_Client()
{
	 int choix;

	 printf("\n                                        \xda\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xbf");
	 printf("\n                                        \xb3 Gestion des Clients      \xb3");
	 printf("\n                                        \xc0\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xc4\xd9");

	 printf("\n");

	 printf("\n                       \xc9\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbb");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xba     Liste des clients__________________________________1     \xba");
	 printf("\n                       \xba     Ajouter client_____________________________________2     \xba");
	 printf("\n                       \xba     Modifier client____________________________________3     \xba");
	 printf("\n                       \xba     Supprimer client___________________________________4     \xba");
	 printf("\n                       \xba     Retour_____________________________________________5     \xba");
	 printf("\n                       \xba                                                              \xba");
	 printf("\n                       \xc8\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xbc");
	 printf("\n\n                                          Votre choix  :  ");

	 scanf("%d",&choix);
	 system("cls");
	  switch(choix)
	{
		case 1 : Liste_Client();
			break;
		case 2 : Ajouter_Client();
			break;
		case 3 : Modifier_Client();
			break;
		case 4 : Supprimer_Client();
			break;
		case 5 : Menu_Principal();
			break;
		default : exit(1);

	}

	return choix;

}

 void Liste_Client(client *v,int n)
{
	char ch[T_MAX]="";
	FILE* fichier=NULL;
	fichier=fopen("listclients.txt","r");
	if(fichier != NULL)
	{
		while(fgets(ch,T_MAX,fichier) != NULL)
		{
		printf("%s",ch);
	    }
	    fclose(fichier);
	}
	else
	{
		printf("\n ce fichier n'existe pas !!! \n");
	}
	printf("\n\n");
	Gestion_Client();
}

void Ajouter_Client()
{
	   client c;
	   int i,n;

	    printf("\n entrer le nombre de client que vous voullez ajouter : \t");
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    	printf(L"\n\n le client %d\n\n",i+1);
	    	do
			{
				printf("\t l'id du client : ");
				scanf("%d",&c.idClient);
			}while(c.idClient<0 || c.idClient>100);
 			printf("\t le nom du client : ");
 			scanf("%s",c.nom);
 			printf("\t le prenom du client : ");
 			scanf("%s",c.prenom);
 			do
			{
				printf("\t CIN  : ");
		    	scanf("%d",&c.cin);
			}while(c.cin <00000 || c.cin >10000);
 			printf("\t l'adresse : ");
 			scanf("%s",c.adresse);
 			do
 			{
 				printf("\t numero de telephone : ");
 				scanf("%d",&c.telephone);
			}while(c.telephone<0000000000 || c.telephone>9999999999);

			FILE *fichier = fopen("listclients.txt","a+");
	   		{

				fprintf(fichier,"client num %d:",i+4);
				fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d\n",c.idClient,c.nom,c.prenom,c.cin,c.adresse,c.telephone);
		    }
		    fclose(fichier);
    	}

		Gestion_Client();
}

void Modifier_Client()
{
	FILE* fichier;
	client v;
	char ch[T_MAX]="";
	int x,nb,c,i=0;

	fichier = fopen("listclients.txt","r");
	while(fgets(ch,T_MAX,fichier) != NULL)
 	{
 		printf("%s \n",ch);
	}
	fclose(fichier);
	do
	{
		printf("\n vous pouvez modifier un client de cette liste ? : ");
		scanf("%d",&c);
	}while(c != 1 && c != 0);
	if(c == 1)
	{
		printf("\n entrer le nombre de client que vous avez deja dans votre fichier : ");
		scanf("%d",&nb);
		while(i<nb*109)
		{
			fichier = fopen("listclients.txt","r");
			fseek(fichier,i,SEEK_SET);
			fgets(ch,T_MAX,fichier);
			printf("\n %s",ch);
			fclose(fichier);
			do{
				printf("\n tu veux modifier les informations de ce client ? : ");
				scanf("%d",&x);
			}while(x != 1 && x != 0);
			if(x == 1)
			{
				printf("\n Remplire les information que vous voullez \n");
				do
				{
					printf("\t l'id du client : ");
					scanf("%d",&v.idClient);
				}while(v.idClient<0 || v.idClient>100);
				printf("\t Nom  : ");
				scanf("%s",v.nom);
				printf("\t Prenom ( : ");
				scanf("%s",v.prenom);
				do
				{
					printf("\t CIN  : ");
		    		scanf("%d",&v.cin);
				}while(v.cin <00000 || v.cin >10000);
				printf("\t l'adresse : ");
				scanf("%s",v.adresse);
				do{
					printf("\t numero de telephone  : ");
					scanf("%d",&v.telephone);
				}while(v.telephone<0000000000 || v.telephone>9999999999);

				fichier = fopen("client.txt","a+");
				{
					fprintf(fichier,"l'id du client:%d,Nom:%s,Prenom:%s,cin:%d,l'adresse:%s,numero de telephone:%d\n",v.idClient,v.nom,v.prenom,v.cin,v.adresse,v.telephone);
					fclose(fichier);
				}
				i+=112;
			}
			else
			{
				fichier = fopen("client.txt","a+");
				{
					fprintf(fichier,"%s",ch);
					fclose(fichier);
				}
			i+=112;
			}
		}
		remove("listclients.txt");
		rename("client.txt","listclients.txt");

		printf("\n\n c'est bien ^^ \n\n");
	}
	else
	{
		printf("\nMerci ^^ \n");
	}

	Gestion_Client();
}
void Supprimer_Client()
{
	FILE* fichier;
	client v;
	char ch[T_MAX]="";
	int x,nb,id,c,i=0;

	printf("\n donner l'id du client que tu veux supprimer : ");
	scanf("%d",&id);
	printf("\n\n entrer le nombre de client que vous avez deja dans votre fichier : ");
	scanf("%d",&nb);

	while(i<nb*109)
	{
		fichier = fopen("listclients.txt","r");
		fseek(fichier,i,SEEK_SET);
		fgets(ch,T_MAX,fichier);
		printf("\n %s",ch);
		fclose(fichier);
		do{
		printf("\n est ce que ce client a le meme id que tu as entree ?  : ");
		scanf("%d",&x);
		}while(x != 1 && x != 0);
		printf("\n");

		if(x == 1)
		{
			i+=112;
		}
		else
		{
			fichier = fopen("client.txt","a+");
			{
				fprintf(fichier,"%s",ch);
				fclose(fichier);
			}
			i+=112;
		}
	}
	remove("listclients.txt");
	rename("client.txt","listclients.txt");

	Gestion_Client();
}


