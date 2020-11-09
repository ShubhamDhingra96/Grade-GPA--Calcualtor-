#include<stdio.h>
int main(int argc,char *argv[])
{
/* Variable */
	
	float intra;
	float final;
	float tps;
	float moyPond;
	float globale;
	const float VALEUR_INTRA = 0.25f;
	const float VALEUR_FINAL = 0.35f;
	const float VALEUR_TPS = 0.40f;
	
/* Entre de donnees */
	
	printf ("Entrez la note d'examen intra de l etudiant:");
	scanf ("%f", &intra);
	
	printf ("Entrez la note d'examen final de l etudiants:");
	scanf ("%f", &final);
	
	printf ("Entrez la note des travaux pratiques de l etudiants:");
	scanf ("%f", &tps);
				
/* Note numerique */
	
	moyPond = (intra * VALEUR_INTRA + final * VALEUR_FINAL)/0.60;
	
	if (moyPond < 40) 
		if (tps > 50)
			tps = 50; 
	
	globale = intra * VALEUR_INTRA + final * VALEUR_FINAL + tps * VALEUR_TPS;
	
/* Note litterale */
	
	if (globale <=35)
		printf ("\n\nLa note numerique %f donne un F pour l etudiant", globale);
	else if (globale <=50)
		printf ("\n\nLa note numerique %f donne un E pour l etudiant", globale);
	else if (globale <=54)
		printf ("\n\nLa note numerique %f donne un D pour l etudiant", globale);
	else if (globale <=57)
		printf ("\n\nLa note numerique %f donne un D+ pour l etudiant", globale);
	else if (globale <=60)
		printf ("\n\nLa note numerique %f donne un C- pour l etudiant", globale);
	else if (globale <=65)
		printf ("\n\nLa note numerique %f donne un C pour l etudiant", globale);
	else if (globale <=70)
		printf ("\n\nLa note numerique %f donne un C+ pour l etudiant", globale);
	else if (globale <=73) 
		printf ("\n\nLa note numerique %f donne un B- pour l etudiant", globale);
	else if (globale <=77)
		printf ("\n\nLa note numerique %f donne un B pour l etudiant", globale);
	else if (globale <=80)
		printf ("\n\nLa note numerique %f donne un B+ pour l etudiant", globale);
	else if (globale <=85)
		printf ("\n\nLa note numerique %f donne un A- pour l etudiant", globale);
	else if (globale <=90)
		printf ("\n\nLa note numerique %f donne un A pour l etudiant", globale);
	else if (globale <=100)
		printf ("\n\nLa note numerique %f donne un A+ pour l etudiant", globale);
	
	return 0;
}

