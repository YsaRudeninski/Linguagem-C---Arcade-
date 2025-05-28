#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>

int main()
{
	//minha variaveis de compra comprar
	char tipoP ,info [17],validade[7],PIX[50];
	char comprar;
	int tentativas = 0;
    int valido = 0;
    int contador;
	//info dos jogos 
	double precoJogo;
	int Comprado [11] = {0};
	int escolha;
	//info login
	char sn;
    char senha[20];  
    char login[20]; 
    char senhadigitada[20];
    char logindigitado[20];
    int funcao, logado = 1;
    //info perfil
    char perfilNome[50], perfilDatanasc[20], perfilTelefone[20], perfilEndereco[70];
    int perfilNumEnd;
	
	int menu;
	char continua ;
	continua = 's';
	
	setlocale(LC_ALL, "Portuguese");
	
	while (logado == 1) {
        printf("\033[1;96m\n\n       ******************\n");
        printf("       *                *\n");
        printf("       *  ARCADE STORE  *\n");
        printf("       *                *\n");
        printf("       ******************\033[m\n\n");
        printf("      1- CADASTRO\n      2- LOGIN\n      0- Finalizar Programa\n\n");
        printf(" Digite o número para a função desejada: ");
        scanf("%d", &funcao);
        system("cls");


        switch (funcao) {
            case 0:
                printf("Saindo do programa...\n");
                exit(0);
                break;


            case 1:
				printf("\033[1;96m\n\n      ******************\n");
		        printf("      *                *\n");
		        printf("      *  ARCADE STORE  *\n");
		        printf("      *                *\n");
		        printf("      ******************\033[m\n\n");
                printf("==============================\n");
                printf("          CADASTRO\n");
                printf("==============================\033[m\n\n");

                
                printf("\nNome completo: ");
                getchar(); 
                fgets(perfilNome, sizeof(perfilNome), stdin);  
                
            	printf("\nData de Nascimento (DD/MM/AAA): ");
                fgets(perfilDatanasc, sizeof(perfilDatanasc), stdin);
                
            	printf("\nTelefone: ");
                fgets(perfilTelefone, sizeof(perfilTelefone), stdin);
                
                printf("\nEndereço: ");
                fgets(perfilEndereco, sizeof(perfilEndereco), stdin);
                
                printf("\nNº ");
                scanf(" %d", &perfilNumEnd);
                
                printf("\nUsuário: ");
                getchar();
                fgets(login,sizeof(login),stdin);
                login[strcspn(login,"\n")]='\0';
                
                printf("\nSenha: ");
                fgets(senha,sizeof(senha),stdin);
                senha[strcspn(senha,"\n")]='\0';
                system("cls");

				printf("\033[1;96m\n\n      ******************\n");
		        printf("      *                *\n");
		        printf("      *  ARCADE STORE  *\n");
		        printf("      *                *\n");
		        printf("      ******************\033[m\n\n");
                printf("==============================\n");
                printf("          CADASTRO\n");
                printf("==============================\033[m\n\n");
                printf(" Confirmar Usuário e senha?\n\n");
                printf("    Usuário: \033[1;33m%s\033[m  \n", login);
                printf("    Senha:   \033[1;33m%s\033[m ", senha);
                printf("\n\n Digite \033[1;32m's'\033[m para confirmar");
                printf("\n ou \033[1;31m'n'\033[m para digitar de novo: ");
                scanf(" %c", &sn);
                system("cls");


                if (sn == 'n') {
                    while (sn == 'n') {
						printf("\033[1;96m\n\n      ******************\n");
				        printf("      *                *\n");
				        printf("      *  ARCADE STORE  *\n");
				        printf("      *                *\n");
				        printf("      ******************\033[m\n\n");

                        printf("==============================\n");
                        printf("          CADASTRO\n");
                        printf("==============================\033[m\n\n");
                        printf("    Usuário:  ");
                        getchar();
                        fgets(login,sizeof(login),stdin);
                        login[strcspn(login,"\n")]='\0';
                        printf("    Senha:    ");
                        getchar();
                        fgets(senha,sizeof(senha),stdin);
                        senha[strcspn(senha,"\n")]='\0';
                        system("cls");


						printf("\033[1;96m\n\n      ******************\n");
				        printf("      *                *\n");
				        printf("      *  ARCADE STORE  *\n");
				        printf("      *                *\n");
				        printf("      ******************\033[m\n\n");
                        printf("==============================\n");
                        printf("          CADASTRO\n");
                        printf("==============================\033[m\n\n");
                        printf(" Confirmar Usuário e senha?\n\n");
                        printf("    Usuario: \033[1;33m%s\033[m  \n", login);
                        printf("    Senha:   \033[1;33m%s\033[m ", senha);
                        printf("\n\n Digite \033[1;32m's'\033[m para confirmar");
                        printf("\n ou \033[1;31m'n'\033[m para digitar de novo: ");
                        scanf(" %c", &sn);
                        system("cls");
                    }
                }
                break;

    

            case 2:
				printf("\033[1;96m\n\n      ******************\n");
		        printf("      *                *\n");
		        printf("      *  ARCADE STORE  *\n");
		        printf("      *                *\n");
		        printf("      ******************\033[m\n\n");
                printf("==============================\n");
                printf("           LOGIN\n");
                printf("==============================\033[m\n\n");
                printf("    Usuário:  ");
                getchar();                 
                fgets(logindigitado,sizeof(logindigitado),stdin);                 
                logindigitado[strcspn(logindigitado,"\n")]='\0';
                printf("    Senha:    ");
                fgets(senhadigitada,sizeof(senhadigitada),stdin);                 
                senhadigitada[strcspn(senhadigitada,"\n")]='\0'; 


                if (strcmp(senhadigitada, senha) != 0 || strcmp(logindigitado, login) != 0) {
                    while (1) {
                        system("cls");
						printf("\033[1;96m\n\n      ******************\n");
				        printf("      *                *\n");
				        printf("      *  ARCADE STORE  *\n");
				        printf("      *                *\n");
				        printf("      ******************\033[m\n\n");
                        printf("==============================\n");
                        printf("           LOGIN\n");
                        printf("==============================\033[m\n\n");
                        printf("\n \033[0;91mLOGIN ou SENHA incorretos.\n     Tente novamente.\033[m\n");
                        printf("\n\n    usuário: ");
                        getchar();                 
                        fgets(logindigitado,sizeof(logindigitado),stdin);                 
                        logindigitado[strcspn(logindigitado,"\n")]='\0';
                        printf("    Senha: ");
                        fgets(senhadigitada,sizeof(senhadigitada),stdin);                 
                        senhadigitada[strcspn(senhadigitada,"\n")]='\0';


                        if (strcmp(senhadigitada, senha) == 0 && strcmp(logindigitado, login) == 0) {
                            printf("\n  \033[1;96mLOGIN BEM - SUCEDIDO !\033[m\n");
                            sleep(2);
                            system("cls"); 
                            break; 
                        }
                        printf("\n\n   Redefinir senha?");
                        printf("\n   Digite \033[1;32m's'\033[m para confirmar: ");
                        scanf(" %c", &sn);
                        if (sn == 's') {
                            while (sn == 's') {
                            system("cls");
							printf("\033[1;96m\n\n      ******************\n");
					        printf("      *                *\n");
					        printf("      *  ARCADE STORE  *\n");
					        printf("      *                *\n");
					        printf("      ******************\n\n");
	                        printf("==============================\n");
	                        printf("           CADASTRO\n");
	                        printf("==============================\033[m\n\n");
                            printf("    Usuário: ");
                            getchar();
                            fgets(login,sizeof(login),stdin);
                            login[strcspn(login,"\n")]='\0';
                            printf("    Senha: ");
                            getchar();
                            fgets(senha,sizeof(senha),stdin);
                            senha[strcspn(senha,"\n")]='\0';
                            system("cls");
    
							printf("\033[1;96m\n\n      ******************\n");
					        printf("      *                *\n");
					        printf("      *  ARCADE STORE  *\n");
					        printf("      *                *\n");
					        printf("      ******************\n\n");
							printf("==============================\n");
	                        printf("           CADASTRO\n");
	                        printf("==============================\033[m\n\n");
                            printf(" Confirmar usuário e Senha?\n\n");
                            printf("    Usuário: \033[1;33m%s\033[m  \n", login);
                            printf("    Senha:   \033[1;33m%s\033[m ", senha);
                            printf("\n\n Digite \033[1;32m's'\033[m para confirmar");
                            printf("\n ou \033[1;31m'n'\033[m para digitar de novo: ");
                            scanf(" %c", &sn);
                            system("cls");
                            if (sn == 's'){
                            sn='n';
                            break;
                            }
                    }
                }
                    }
                }
                logado = 2;
                break;
                
            
        }
    }

    system("cls");
    
	printf("\033[1;96m\n\n      ******************\n");
	printf("      *                *\n");
	printf("      *  ARCADE STORE  *\n");
	printf("      *                *\n");
	printf("      ******************\n\n");
    printf("\n \033[1;96m   BEM VINDO, %s!  \n\n", login);
    printf("\n        Aguarde...\033[m  \n\n");
    sleep(2.5);
    system("cls");

	
while (continua == 's' || continua == 'S')
	{
		system("cls");	printf("==================================================\n");
	printf("\n     >>> Bem Vindo a ARCADE STORE \033[1m%s\033[0m <<<           \n\n",login);
	printf("==================================================\n");

	
		printf("\n[1] Loja");
		printf("\n[2] Biblioteca");
		printf("\n[3] Perfil");
		printf("\n[4] Sair");

		printf("\n\nPara onde você dejesa ir? ");
		scanf(" %d", &menu);

		switch (menu){
			case 1:
			system("cls");
			// Cabeçalho
			printf("\033[36m------------------------------------------------------------------------------------------------------------------------\033[0m\n");
			printf("\033[1;37m                                  \003Bem-vindo ao catálogo da Arcade Store!\003\033[0m\n");
			printf("\033[36m------------------------------------------------------------------------------------------------------------------------\033[0m\n");

			// Catálogo dos jogos
			printf("\n\033[33m1. Nome : \033[0mGod of War Ragnarok\n\033[32m  preço: R$ 299.90");
			if (Comprado[0] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m2. Nome : \033[0mThe Last of Us Part II\n\033[32m   preço: R$ 249.90");
			if (Comprado[1] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m3. Nome : \033[0mElden Ring\n\033[32m   preço: R$ 279.99");
			if (Comprado[2] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m4. Nome : \033[0mRed Dead Redemption 2\n\033[32m   preço: R$ 199.90");
			if (Comprado[3] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m5. Nome : \033[0mCyberpunk 2077\n\033[32m   preço: R$ 149.90");
			if (Comprado[4] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m6. Nome : \033[0mHogwarts Legacy\n\033[32m   preço: R$ 299.90");
			if (Comprado[5] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m7. Nome : \033[0mDandara\n\033[32m   preço: R$ 39.90");
			if (Comprado[6] == 1)
			{
    		printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m8. Nome : \033[0mFIFA 25\n\033[32m   preço: R$ 349.90");
			if (Comprado[7] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m9. Nome : \033[0mDodgeball Academia\n\033[32m   preço: R$ 69.99");
			if (Comprado[8] == 1)
			{
			printf(" \033[1;32m[comprado]\033[0m\n");
			}

			printf("\n\033[33m10. Nome: \033[0mAssassin's Creed Mirage\n\033[32m    preço: R$ 229.90");
			if (Comprado[9] == 1)
			{
				printf(" \033[1;32m[comprado]\033[0m\n");
			}
			
			printf("\n\033[33m11. Nome: \033[0mA lenda do cabeça de Cuia\n\033[32m    preço: R$ 13.79");
			if (Comprado[10] == 1)
			{
		    printf(" \033[1;32m[comprado]\033[0m\n");
			}	

			printf("\n\033[35mDigite o número do jogo para mais informações ou '0' para voltar ao menu: \033[0m");
			scanf("%d", &escolha);
			system("cls");
				
				

			//info dos jogos
			switch (escolha)
			{
			case 1:
			if (Comprado  [0] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                     God of War Ragnarok                    |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, Aventura\n");
			    printf("\033[1mDesenvolvedora:\033[0m Santa Monica Studio\n");
			    printf("Ano de Lançamento: 2022\n");
			    printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
			    printf("Modo de Jogo: Singleplayer\n");
			    printf("Idiomas: PT-BR, EN, ES e mais\n");
			    printf("Campanha: \033[1m25 a 40 horas\033[0m\n");
			    printf("\033[33mAvaliação: 94/100\033[0m (Metacritic)\n");
			    printf("\033[1mDescrição:\033[0m Kratos e Atreus enfrentam deuses nórdicos em meio ao fim do mundo.\n");
			    printf("\033[1;32mComprar por R$299.90\033[0m\n");
			    printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
				
			}
			else {
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 299.90;
				break;
		
			case 2:
			if (Comprado  [1] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                   The Last of Us Part II                   |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, Aventura, Sobrevivência\n");
				printf("\033[1mDesenvolvedora:\033[0m Naughty Dog\n");
				printf("Ano de Lançamento: 2020\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
				printf("Modo de Jogo: Singleplayer\n");
				printf("Idiomas: PT-BR, EN e outros\n");
				printf("Campanha: \033[1m25 a 35 horas\033[0m\n");
				printf("\033[33mAvaliação: 93/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Uma história intensa de vingança e sobrevivência em um mundo devastado.\n");
				printf("\033[1;32mComprar por R$249.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			}else{
			
					printf("\033[1;32mO jogo  já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 249.90;
				break;

			case 3:
			if (Comprado  [2] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                         Elden Ring                         |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, RPG\n");
				printf("\033[1mDesenvolvedora:\033[0m FromSoftware\n");
				printf("Ano de Lançamento: 2022\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 16+\n");
				printf("Modo de Jogo: Singleplayer, Coop Online\n");
				printf("Idiomas: Legendas PT-BR e outros\n");
				printf("Campanha: \033[1m50 a 100 horas\033[0m\n");
				printf("\033[33mAvaliação: 96/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Um mundo de fantasia com liberdade total e desafios brutais.\n");
				printf("\033[1;32mComprar por R$279.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			}else{
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 279.90;
				break;

			case 4:
			if (Comprado  [3] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                  Red Dead Redemption 2                     |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, Aventura, Faroeste\n");
				printf("\033[1mDesenvolvedora:\033[0m Rockstar Games\n");
				printf("Ano de Lançamento: 2018\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
				printf("Modo de Jogo: Singleplayer, Multiplayer Online\n");
				printf("Idiomas: Legendas PT-BR e outros\n");
				printf("Campanha: \033[1m50 a 80 horas\033[0m\n");
				printf("\033[33mAvaliação: 97/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m A história de um fora-da-lei em um mundo imersivo do Velho Oeste.\n");
				printf("\033[1;32mComprar por R$199.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");			
			}else{
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 199.90;
				break;

			case 5:
			if (Comprado  [4] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                       Cyberpunk 2077                       |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, RPG, Futurista\n");
				printf("\033[1mDesenvolvedora:\033[0m CD Projekt Red\n");
				printf("Ano de Lançamento: 2020 (atualizado em 2023)\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 18+\n");
				printf("Modo de Jogo: Singleplayer\n");
				printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
				printf("Campanha: \033[1m30 a 60 horas\033[0m\n");
				printf("\033[33mAvaliação: 80/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Viva como um mercenário cibernético numa cidade futurista.\n");
				printf("\033[1;32mComprar por R$149.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			}else{
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 149.90;
				break;

			case 6:
			if (Comprado  [5] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                     Hogwarts Legacy                        |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Aventura, RPG, Magia\n");
				printf("\033[1mDesenvolvedora:\033[0m Portkey Games\n");
				printf("Ano de Lançamento: 2023\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 12+\n");
				printf("Modo de Jogo: Singleplayer\n");
				printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
				printf("Campanha: \033[1m30 a 50 horas\033[0m\n");
				printf("\033[33mAvaliação: 84/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Explore Hogwarts no século XIX como um aluno especial.\n");
				printf("\033[1;32mComprar por R$299.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			}else{
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 299.90;
				break;

			case 7:
		   		 if (Comprado[6] == 0) {
		        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
		        printf("\033[36;1m|                          Dandara                           |\033[0m\n");
		        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
		        printf("Gênero: Ação, Plataforma, Metroidvania\n");
		        printf("\033[1mDesenvolvedora:\033[0m Long Hat House\n");
		        printf("Ano de Lançamento: 2018\n");
		        printf("\033[1;31mClassificação Indicativa:\033[0m 12+\n");
		        printf("Modo de Jogo: Singleplayer\n");
		        printf("Idiomas: PT-BR, EN e outros\n");
		        printf("Campanha: \033[1m5 a 10 horas\033[0m\n");
		        printf("\033[33mAvaliação: 85/100\033[0m (Metacritic)\n");
		        printf("\033[1mDescrição:\033[0m Um metroidvania desafiador com uma protagonista forte em um mundo cheio de mistérios.\n");
		        printf("\033[1;32mComprar por R$46.99\033[0m\n");
		        printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
		    } else {
		        printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
		        printf("\033[1;34mVoltando ao menu...\033[0m\n");    
		        sleep(3); 
		        continue;
		    }
		    precoJogo = 39.90;
		    break;

			case 8:
			if (Comprado  [7] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                          FIFA 25                           |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Esportes, Futebol\n");
				printf("\033[1mDesenvolvedora:\033[0m EA Sports\n");
				printf("Ano de Lançamento: 2024\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m Livre\n");
				printf("Modo de Jogo: Singleplayer, Multiplayer\n");
				printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
				printf("Campanha: \033[1mInfinita (partidas e temporadas)\033[0m\n");
				printf("\033[33mAvaliação: 78/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Jogue com realismo total nos modos Ultimate Team e Carreira.\n");
				printf("\033[1;32mComprar por R$349.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			}else{
					printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
				    printf("\033[1;34mVoltando ao menu...\033[0m\n");    
				    sleep(3); 
				continue;
			}
				precoJogo = 349.90;
				break;

			case 9:
			   if (Comprado[8] == 0) {
			        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
			        printf("\033[36;1m|                   Dodgeball Academia                        |\033[0m\n");
			        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
			        printf("Gênero: RPG, Esportes\n");
			        printf("\033[1mDesenvolvedora:\033[0m Pocket Trap\n");
			        printf("Ano de Lançamento: 2021\n");
			        printf("\033[1;31mClassificação Indicativa:\033[0m 10+\n");
			        printf("Modo de Jogo: Singleplayer\n");
			        printf("Idiomas: Legendas PT-BR e outros\n");
			        printf("Campanha: \033[1m10 a 15 horas\033[0m\n");
			        printf("\033[33mAvaliação: 85/100\033[0m (Metacritic)\n");
			        printf("\033[1mDescrição:\033[0m Um RPG divertido onde você luta em torneios de queimada na academia.\n");
			        printf("\033[1;32mComprar por R$69.99\033[0m\n");
			        printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			} else {
			        printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
			        printf("\033[1;34mVoltando ao menu...\033[0m\n");    
			        sleep(3); 
			        continue;
			}
			    precoJogo =  69.99;
			    break;

			case 10:
			if (Comprado[9] == 0){
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("\033[36;1m|                Assassin's Creed Mirage                      |\033[0m\n");
				printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
				printf("Gênero: Ação, Aventura, Stealth\n");
				printf("\033[1mDesenvolvedora:\033[0m Ubisoft\n");
				printf("Ano de Lançamento: 2023\n");
				printf("\033[1;31mClassificação Indicativa:\033[0m 16+\n");
				printf("Modo de Jogo: Singleplayer\n");
				printf("Idiomas: Áudio/Legenda PT-BR e outros\n");
				printf("Campanha: \033[1m20 a 25 horas\033[0m\n");
				printf("\033[33mAvaliação: 81/100\033[0m (Metacritic)\n");
				printf("\033[1mDescrição:\033[0m Uma volta às origens da franquia com furtividade e assassinatos.\n");
				printf("\033[1;32mComprar por R$229.90\033[0m\n");
				printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
			} else {
				printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
   				printf("\033[1;34mVoltando ao menu...\033[0m\n");    
    			sleep(3); 
				continue;
			}
				precoJogo = 229.90;
				break;
			
			case 11:
		    if (Comprado[10] == 0){
		        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
		        printf("\033[36;1m|                   A lenda do cabeça de Cuia                 |\033[0m\n");
		        printf("\033[36;1m+-------------------------------------------------------------+\033[0m\n");
		        printf("Gênero: Ação, Aventura, Plataforma\n");
		        printf("\033[1mDesenvolvedora:\033[0m Tamu Games\n");
		        printf("Ano de Lançamento: 2021\n");
		        printf("\033[1;31mClassificação Indicativa:\033[0m 12+\n");
		        printf("Modo de Jogo: Singleplayer\n");
		        printf("Idiomas: PT-BR\n");
		        printf("Campanha: \033[1m3 a 6 horas\033[0m\n");
		        printf("\033[33mAvaliação: 80/100\033[0m (Metacritic)\n");
		        printf("\033[1mDescrição:\033[0m Um jogo de aventura com uma vibe brazuca, cheio de humor e folclore.\n");
		        printf("\033[1;32mComprar por R$13,79\033[0m\n");
		        printf("\033[1mDigite C para pagar OU M para voltar ao menu!\033[0m\n\n");
		    } else {
		        printf("\033[1;32mO jogo já foi comprado.\033[0m\n"); 
		        printf("\033[1;34mVoltando ao menu...\033[0m\n");    
		        sleep(3); 
		        continue;
		    }
			    precoJogo = 13.79;
			    break;

			case 0:
			continue;
				break;
			default:

				printf("Opção inválida. Tente novamente!\n");
				
				}
				
			//Local de Pagamento
			scanf(" %c", &comprar);
			if (comprar == 'c' || comprar == 'C')
			{
				system("cls");
				printf("============================================\n");
				printf("        BEM-VINDO AO LOCAL DE PAGAMENTO     \n");
				printf("============================================\n\n");

				printf("Falta pouco para voce adquirir seu NOVO JOGO!\n\n");
				printf("Informe o tipo de pagamento desejado:\n\n");
				printf("  [C] Cartão de credito\n");
				printf("  [D] Cartão de débito\n");
				printf("  [P] Pix\n");
				printf("  [M] Voltar ao menu\n\n");
				printf("Digite a opção correspondente: ");
				getchar();
				scanf(" %c", &tipoP);
				
				//Pagamento em Crédito
if (tipoP == 'C' || tipoP == 'c') {
	tentativas = 0;
	valido = 0;
					
    printf("\033[1;33m\n--- Pagamento por Cartão de crédito ---\n\033[0m");

    while (tentativas < 3) {
        printf("Digite o \033[1m Número do seu Cartão (16 digitos): \033[0m");
        scanf(" %16s", info);
        fflush(stdin);

        printf("Digite a \033[1m data de validade (Ex: 01/25): \033[0m");
        scanf(" %5s", validade);

        if (strlen(info) == 16 && strlen(validade) == 5 && validade[2] == '/') {
            valido = 1;
            break;
        } else {
            printf("\033[1;31m\nNúmero do cartão ou data invalido! Tentativa %d de 3.\n\033[0m", tentativas + 1);
            tentativas++;
        }
    }

    if (valido == 0) {
        printf("\nNúmero de tentativas excedido. Cancelando pagamento e voltando ao menu...\n");
        sleep(5);
        continue;
        break;
          } else{
        printf("Validando seu cartão");
        fflush(stdout);
        for (contador= 0; contador < 3; contador++) {
            sleep(1);
            printf(".");
            fflush(stdout);
        }
        printf("\033[1;32m\nPagamento de R$ %.2lf realizado com sucesso!\n\033[0m", precoJogo);
		printf("\033[1;36mBom jogo!\n\033[0m");
		printf ("voltando ao menu");
		Comprado[escolha - 1] = 1;
		for (contador= 0; contador < 3; contador++) {
            sleep(1);
            printf(".");
            fflush(stdout);
        }
		continue;
		break;
    }
}

				// Pagamento por Débito
if (tipoP == 'D' || tipoP == 'd') {
	tentativas = 0;
	valido = 0;
					
    printf("\033[1;33m\n--- Pagamento por Cartão de débito ---\n\033[0m");

    while (tentativas < 3) {
        printf("Digite o \033[1m Número do seu cartão (16 Digitos): \033[0m");
        scanf(" %16s", info);
        fflush(stdin);

        printf("Digite a \033[1m data de validade (Ex: 01/25): \033[0m");
        scanf(" %5s", validade);

        if (strlen(info) == 16 && strlen(validade) == 5 && validade[2] == '/') {
            valido = 1;
            break;
        } else {
            printf("\033[1;31m\nNúmero do cartão ou data invalido! Tentativa %d de 3.\n\033[0m", tentativas + 1);
            tentativas++;
        }
    }

    if (valido == 0) {
        printf("\nNúmero de tentativas excedido. Cancelando pagamento e voltando ao menu...\n");
        sleep(5);
        continue;
        break;
          } else{
        printf("Validando seu cartão");
        fflush(stdout);
        for (contador= 0; contador < 3; contador++) {
            sleep(1);
            printf(".");
            fflush(stdout);
        }
        printf("\033[1;32m\nPagamento de R$ %.2lf realizado com sucesso!\n\033[0m", precoJogo);
		printf("\033[1;36mBom jogo!\n\033[0m");
		printf ("voltando ao menu \n");
		for (contador= 0; contador < 3; contador++) {
            sleep(1);
            printf(".");
            fflush(stdout);
        }
		Comprado[escolha - 1] = 1;
		continue;
    }
}

				// Pagamento por PIX
				else if (tipoP == 'P' || tipoP == 'p')
				{
					
					printf("\033[1;35m\n--- Pagamento por PIX ---\n\033[0m");
					printf("Digite sua \033[1m chave PIX: \033[0m");
					scanf(" %49s", PIX);
					printf ("Analisando Chave");
					fflush(stdout);
					for (contador=0;contador<3;contador++){
						sleep(1);
						printf(".");
						fflush(stdout);
					}
						
					printf("\033[1;32m\nPagamento de R$ %.2lf realizado com sucesso!\n\033[0m", precoJogo);
					printf("\033[1;36mBom jogo!\n\033[0m");
					Comprado[escolha - 1] = 1;
					printf("voltando ao menu");
					for (contador= 0; contador < 3; contador++) {
            		sleep(1);
           			 printf(".");
            		fflush(stdout);
        			}
					continue;
				}
				else if (tipoP == 'M' || tipoP == 'm'){
					printf("voltando..");
					fflush(stdout);
					sleep(1);
					continue;
					break;
				}else	{
					printf("\033[1;31m\nOpção inválida!\n\033[0m");
				}
				
	}else if (comprar == 'm' || comprar == 'M'){
		printf ("voltando");
		 fflush(stdout);
        for (contador= 0; contador < 3; contador++) {
            sleep(1);
            printf(".");
            fflush(stdout);
        }
				continue;
				break;	
				}
			break;
		case 2:
			system("cls");
			printf("==================================================\n");
			printf("               >>> BIBLIOTECA <<<           \n");
			printf("==================================================\n");
if (Comprado[0] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mGod of War Ragnarok\033[0m\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[1] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mThe Last of Us Part II\033[0m\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[2] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mElden Ring\033[0m\t\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[3] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mRed Dead Redemption 2\033[0m\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[4] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mCyberpunk 2077\033[0m\t\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[5] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mHogwarts Legacy\033[0m\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[6] == 1)
{
    printf("\033[1;32m?\033[0m \033[33mDandara\033[0m\t\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[7] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mFIFA 25\033[0m\t\t\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[8] == 1)
{
    printf("\033[1;32m?\033[0m \033[33mDodgeball Academia\033[0m\t\t\t\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[9] == 1)
{
	printf("\033[1;32m?\033[0m \033[33mAssassin's Creed Mirage\033[0m\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

if (Comprado[10] == 1)
{
    printf("\033[1;32m?\033[0m \033[33mCabeça de Cuia\033[0m\t\033[1;37m[PRONTO PARA JOGAR]\033[0m\n");
}

			break;
		case 3:
			printf("==================================================\n");
			printf("                >>> PERFIL <<<           \n");
			printf("==================================================\n\n");
			printf("Nome de usuário: %s\n\n", login);
        	printf("Nome: %s\n", perfilNome);
        	printf("Data de nascimento: %s\n", perfilDatanasc);
        	printf("Telefone: %s\n", perfilTelefone);
        	printf("Endereço: %s", perfilEndereco);
        	printf("Nº%d\n", perfilNumEnd);
            printf("Conquistas: 0\n\n");
            printf("Amigos: 0\n\n\n");
			break;
			
		case 4:
			system("cls");
			printf("\n\n\nMuito obrigado por visitar a Arcade Store, volte sempre!\003");
			return 0;
			
		default:
			printf("Opção inválida!\n");
		}
		printf("Deseja voltar ao menu?(s/n)");
		scanf(" %c", &continua);
		system("cls");
		
		
	}
	return 0;
}