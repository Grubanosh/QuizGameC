#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

char player1[15], player2[15], escolha1, escolha2;
int pontuacao1, pontuacao2, opc;

main(){
	srand(time(NULL));
	printf("Player 1: ");
	scanf("%s", player1);
	printf("Player 2: ");
	scanf("%s", player2);
	
	do{
		opc=(rand()%100)/2;
		switch(opc){
			case 0: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Atualmente, quantos elementos quimicos a tabela periodica possui?\n\n a) 113\n b) 109\n c) 108\n d) 118\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) 108");
					sleep(6);
					break;
			case 1:
					system("cls");
					printf("=================================================================================================\n");
					printf("\n Normalmente, quantos litros de sangue uma pessoa tem?\n\n a) Entre 2 e 4 litros\n b) Entre 4 e 6 litros\n c) 10 litros\n d) 7 litros\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Entre 4 e 6 litros");
					sleep(6);
					break;
			case 2: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual pais tem a menor expectativa de vida do mundo?\n\n a) Serra Leoa\n b) Afeganistão\n c) Chade\n d) Congo\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Serra Leoa");
					sleep(6);
					break;
			case 3:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quanto tempo a luz do Sol demora para chegar a Terra?\n\n a) 1 dia\n b) 8 horas\n c) 8 minutos\n d) 8 segundos\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					} 
					printf("\nResposta correta: c) 8 minutos");
					sleep(6);
					break;
			case 4:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual a altura da rede no volei masculino?\n\n a) 2,24m\n b) 2,52m\n c) 2,12m\n d) 2,43m\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) 2,43m");
					sleep(6);
					break;
			case 5:
					system("cls");
					printf("=================================================================================================\n");
					printf("Em que periodo da pre-historia o fogo foi descoberto?\n\n a) Neolitico\n b) Paleolitico\n c) Idade dos Metais\n d) Idade Media\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Paleolitico");
					sleep(6);
					break;
			case 6: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual a montanha mais alta do Brasil?\n\n a) Pico da Neblina\n b) Pico Parana\n c) Pico da Bandeira\n d) Monte Roraima\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Pico da Neblina");
					sleep(6);
					break;
			case 7:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual a velocidade da luz?\n\n a) 300 000 000 metros por segundo (m/s)\n b) 150 000 000 metros por segundo (m/s)\n c) 199 792 458 metros por segundo (m/s)\n d) 299 792 458 metros por segundo (m/s)\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) 299 792 458 metros por segundo (m/s)");
					sleep(6);
					break;
			case 8: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Quem e o autor de \"O Principe\"?\n\n a) Montesquieu\n b) Rousseau\n c) Maquiavel\n d) Thomas Hobbes\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Maquiavel");
					sleep(6);
					break;
			case 9: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Que lider mundial ficou conhecida como \"Dama de Ferro\"\n\n a) Angela Merkel\n b) Margaret Thatcher\n c) Christine Lagarde\n d) Hillary Clinton\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Margaret Thatcher");
					sleep(6);
					break;
			case 10:
					system("cls");
					printf("=================================================================================================\n");
					printf("Em que ano derrubaram as Torres Gemeas?\n\n a) 2001\n b) 2003\n c) 1998\n d) 2000\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) 2001");
					sleep(6);
					break;
			case 11:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos dentes uma pessoa adulta possui, se nao perdeu nenhum?\n\n a) 30\n b) 28\n c) 36\n d) 32\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) 32");
					sleep(6);
					break;
			case 12:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantas cores ha no arco-iris?\n\n a) 6\n b) 7\n c) 8\n d) 9\n\n");
					printf("=================================================================================================\n"); 
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) 7");
					sleep(6);
					break;
			case 13:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual e o maior osso do corpo humano? \n\n a) Tibia\n b) Femur\n c) Fibula\n d) Umero\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Femur");
					sleep(6);
					break; 
			case 14:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos ossos tem o corpo humano?\n\n a) 197\n b) 201\n c) 204\n d) 209\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) 204");
					sleep(6);
					break;
			case 15:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos estados existem no Brasil?\n\n a) 26\n b) 22\n c) 32\n d) 30\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) 26");
					sleep(6);
					break;
			case 16: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos paises fazem parte de America Latina?\n\n a) 12\n b) 19\n c) 21\n d) 30\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) 21");
					sleep(6);
					break;
			case 17:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual e o maior oceano do planeta terra?\n\n a) Oceano Antartico\n b) Oceano Atlantico\n c) Oceano Indico\n d) Oceano Pacifico\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Oceano Pacifico");
					sleep(6);
					break;
			case 18: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos planetas Terra cabem dentro no Sol?\n\n a) Um milhao\n b) Cem\n c) Seiscentos\n d) Dois milhoes\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Um milhao");
					sleep(6);
					break;
			case 19: 
					system("cls");
					printf("=================================================================================================\n");
					printf("O que mede a Escala Mercalli?\n\n a) A intensidade dos ventos\n b) A intensidade sismica de acordo com os danos provocados\n c) A magnitude de um terremoto\n d) A resistencia dos minerais\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) A intensidade sismica de acordo com os danos provocados");
					sleep(6);
					break;
			case 20:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quanto mede uma girafa?\n\n a) Entre 4,8 e 5,5 metros\n b) Entre 5 e 6 metros\n c) Entre 2,5 e 3,3 metros\n d) entre 3,5 e 4,2 metros\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Entre 4,8 e 5,5 metros");
					sleep(6);
					break;
			case 21:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantos bracos tem um polvo?\n\n a) 10\n b) 12\n c) 8\n d) 6\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) 8");
					sleep(6);
					break;
			case 22: 
					system("cls");
					printf("=================================================================================================\n");
					printf("De que sao constituidos os diamantes?\n\n a) Grafite\n b) Osmio\n c) Carbono\n d) Bohrio\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Carbono");
					sleep(6);
					break;
			case 23:
					system("cls");
					printf("=================================================================================================\n");
					printf("O que e um Papiloscopista?\n\n a) Especialista em copias\n b) Individuo que se dedica ao estudo de papiros\n c) Individuo responsavel por criancas orfas\n d)  Profissional especializado em identificacao humana\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					} 
					printf("\nResposta correta: d)  Profissional especializado em identificacao humana");
					sleep(6);
					break;
			case 24:
					system("cls");
					printf("=================================================================================================\n");
					printf("O que e Ortorexia?\n\n a) Obsessao pelo consumo de alimentos saudaveis\n b) Disturbio alimentar que provoca a ingestao excessiva de alimentos\n c) Transtorno alimentar caracterizado pela perda de apetite\n d) Obsessao em falar de forma correta\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Obsessao pelo consumo de alimentos saudaveis");
					sleep(6);
					break;
			case 25:
					system("cls");
					printf("=================================================================================================\n");
					printf("O etanol e produzido atraves de qual fonte de energia?\n\n a) Biomassa\n b) Eolica\n c) Geotermica\n d) Hidreletrica\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Biomassa");
					sleep(6);
					break;
			case 26: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual a velocidade maxima que um velociraptor poderia desenvolver?\n\n a) 20 km/h\n b) 50 km/h\n c) 100 km/h\n d) 200 km/h\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) 100 km/h");
					sleep(6);
					break;
			case 27:
					system("cls");
					printf("=================================================================================================\n");
					printf("Que anfibio tem uma grande glandula de veneno atras de cada olho?\n\n a) Sapo\n b) Salamandra\n c) Rã\n d) Cobra\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Sapo");
					sleep(6);
					break;
			case 28: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual a formula quimica do monoxido de carbono?\n\n a) CO\n b) CO2\n c) NaCl\n d) CH3\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) CO");
					sleep(6);
					break;
			case 29: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Quem e considerado o pai da quimica moderna?\n\n a) Isaac Newton\n b) Antoine Lavoisier\n c) Albert Einstein\n d) John Dalton\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Antoine Lavoisier");
					sleep(6);
					break;
			case 30:
					system("cls");
					printf("=================================================================================================\n");
					printf("Tenochtitlan era a capital de que imperio?\n\n a) Mongol\n b) Otomano\n c) Romano\n d) Asteca\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Asteca");
					sleep(6);
					break;
			case 31:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual destas flores e toxica?\n\n a) margarida\n b) lirio\n c) copo-de-leite\n d) begonia\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) copo-de-leite");
					sleep(6);
					break;
			case 32:
					system("cls"); 
					printf("=================================================================================================\n");
					printf("Onde ficam nossas cordas vocais?\n\n a) Na faringe\n b) Na laringe\n c) Na traqueia\n d) Nos bronquios\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Na laringe");
					sleep(6);
					break;
			case 33:
					system("cls");	
					printf("=================================================================================================\n");
					printf("Quantas casas tem um tabuleiro de xadrez\n\n a) 36\n b) 81\n c) 49\n d) 64\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					} 
					printf("\nResposta correta: d) 64");
					sleep(6);
					break;
			case 34:
					system("cls");
					printf("=================================================================================================\n");
					printf("O cerebro de um homem adulto pesa cerca de: \n\n a) 1,5 kg\n b) 3 kg\n c) 4,5 kg\n d) 6 kg\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) 1,5 kg");
					sleep(6);
					break;
			case 35:
					system("cls");
					printf("=================================================================================================\n");
					printf("Que orgao produz a insulina?\n\n a) Baco\n b) Figado\n c) Rim\n d) Pancreas\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Pancreas");
					sleep(6);
					break;
			case 36:
					system("cls"); 
					printf("=================================================================================================\n");
					printf("Quantas faces tem um icosaedro?\n\n a) 14\n b) 16\n c) 18\n d) 20\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) 20");
					sleep(6);
					break;
			case 37:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual destes primatas tem cauda?\n\n a) Chimpanze\n b) Orangotango\n c) Babuino\n d) Gorila\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Babuino");
					sleep(6);
					break;
			case 38:
					system("cls"); 
					printf("=================================================================================================\n");
					printf("Qual e o planeta mais proximo do sol?\n\n a) Venus\n b) Netuno\n c) Urano\n d) Mercurio\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Mercurio");
					sleep(6);
					break;
			case 39:
					system("cls"); 
					printf("=================================================================================================\n");
					printf("Qual desses angulos nao esta incluido entre os chamados \"angulos notaveis\" da trigonometria: \n\n a) 30\n b) 45\n c) 60\n d) 75\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) 75");
					sleep(6);
					break;
			case 40:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quantas vezes um kilobyte por segundo e maior que um kilobit por segundo?\n\n a) 8\n b) 100\n c) 254\n d) 1024\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) 8");
					sleep(6);
					break;
			case 41:
					system("cls");
					printf("=================================================================================================\n");
					printf("Offset e um tipo de: \n\n a) Escritorio eletronico\n b) Veiculo para todo terreno\n c) Impressao\n d) Tecnologia de celular\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Impressao");
					sleep(6);	
					break;
			case 42:
					system("cls"); 
					printf("=================================================================================================\n");
					printf("Fotofobia designa horror a que? \n\n a) A luz\n b) A ser fotografado\n c) Ver fotos antigas\n d) Perder a visao\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) A luz");
					sleep(6);
					break;
			case 43:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual e a unidade de medida de resistencia eletrica segundo o Sistema Internacional?\n\n a) Volt\n b) Ohm\n c) Watt\n d) Hertz\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					} 
					printf("\nResposta correta: b) Ohm");
					sleep(6);
					break;
			case 44:
					system("cls");
					printf("=================================================================================================\n");
					printf("Amarelo, pele de sapo e galia sao tipos de: \n\n a) Mamao\n b) Abacate\n c) Melao\n d) Morango\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Melao");
					sleep(6);
					break;
			case 45:
					system("cls");
					printf("=================================================================================================\n");
					printf("Quem foi o grego que, em 200 a.C., explicou o principo da alavanca? \n\n a) Democrito\n b) Pitagoras\n c) Arquimedes\n d) Aristoteles\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'c'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'c'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: c) Arquimedes");
					sleep(6);
					break;
			case 46: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Quem e considerado o \"Pai da medicina\"?\n\n a) Socrates\n b) Platao\n c) Herodoto\n d) Hipocrates\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Hipocrates");
					sleep(6);
					break;
			case 47:
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual desses elementos tem o maior numero atomico?\n\n a) Prata\n b) Oxigenio\n c) Carbono\n d) Hidrogenio\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'a'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'a'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: a) Prata");
					sleep(6);
					break;
			case 48: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Carl Sagan esta associado a: \n\n a) Astrologia\n b) Arqueologia\n c) Geologia\n d) Astronomia\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'd'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'd'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: d) Astronomia");
					sleep(6);
					break;
			case 49: 
					system("cls");
					printf("=================================================================================================\n");
					printf("Qual destes nao e uma das sete maravilhas do mundo?\n\n a) Coliseu\n b) Farol de Alexandria\n c) Muralha da China\n d) Cristo Redentor\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Farol de Alexandria");
					sleep(6);
					break;
			case 50:
					system("cls");
					printf("=================================================================================================\n");
					printf("Carpelo, estame e pedunculo sao partes que constituem a:\n\n a) Folha\n b) Flor\n c) Fruto\n d) Semente\n\n");
					printf("=================================================================================================\n");
					do{
						printf(" %s: ", player1);
						scanf(" %c", &escolha1);
					}while(escolha1>'d' || escolha1<'a');
					if(escolha1 == 'b'){
						pontuacao1=pontuacao1+100;
					}
					do{
						printf(" %s: ", player2);
						scanf(" %c", &escolha2);
					}while(escolha2>'d' || escolha2<'a');
					if(escolha2 == 'b'){
						pontuacao2=pontuacao2+100;
					}
					printf("\nResposta correta: b) Flor");
					sleep(6);	
					break;		
		}
	}while(pontuacao1<500 && pontuacao2<500);
	system("cls");
	printf("\n%s: %d \n%s: %d\n\n\n", player1, pontuacao1, player2, pontuacao2);
	if(pontuacao1>pontuacao2){
		printf("%s ganhou!\n\n\n", player1);
	}
	else if(pontuacao1==pontuacao2){
		printf("Empate!\n\n\n");
	}
	else{
		printf("%s ganhou!\n\n\n", player2);
	}
	system("pause");
}
