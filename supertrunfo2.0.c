#include <stdio.h>

int main() {

char estado[50], codigodacarta[50], nomedacidade[50],estado2[50], codigodacarta2[50], nomedacidade2[50];
int  numerodepontosturisticos, numerodepontosturisticos2;
float PIB,area,PIB2,area2;
unsigned long int populacao,populacao2;
float densidade,densidade2;
float poder,poder2;
float capital,capital2;

//carta 1//

printf("### Insira os dados da sua primeira carta ###\n");
printf("UM EXEMPLO DE MODELO:\nCarta 1:\nEstado: A\nCódigo: A01\nNome da Cidade: São Paulo\nPopulação: 12325000\nÁrea: 1521.11 km²\nPIB: 699.28 bilhões de reais\nNúmero de Pontos Turísticos: 50\n");

printf("\nCarta 1:\n");

printf("Estado: ");
scanf("%s", estado);

printf("Codigo da carta: ");
scanf("%s", codigodacarta);

printf("Nome da cidade: ");
scanf("%s", nomedacidade);

printf("Populacao: ");
scanf("%lu", &populacao);

printf("Area (em km2): ");
scanf("%f", &area);

printf("PIB: ");
scanf("%f", &PIB);

printf("Numero de pontos turisticos: ");
scanf("%i", &numerodepontosturisticos);

//carta 2//

 printf("\nINSIRA OS DADOS DA SUA SEGUNDA CARTA!\n");


printf("\n### Carta 2: ###\n");


printf("Estado: ");
scanf("%s", estado2);

printf("Codigo da carta: ");
scanf("%s", codigodacarta2);

printf("Nome da cidade: ");
scanf("%s", nomedacidade2);

printf("Populacao: ");
scanf("%lu", &populacao2);

printf("Area (em km2): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &PIB2);

printf("Numero de pontos turisticos: ");
scanf("%i", &numerodepontosturisticos2);

poder = densidade+capital+populacao+PIB+area+numerodepontosturisticos;
poder2 = densidade2+capital2+populacao2+PIB2+area2+numerodepontosturisticos2;
int rp;
rp= populacao>populacao2;
int ra;
ra= area>area2;
int rpib;
rpib= PIB>PIB2;
int rnp;
rnp= numerodepontosturisticos>numerodepontosturisticos2;
int rpibpc;
rpibpc= capital>capital2;
int rdp;
rdp= densidade<densidade2;
int  rpoder;
rpoder= poder>poder2;
int rp2;
rp2= populacao<populacao2;
int ra2;
ra2= area<area2;
int rpib2;
rpib2= PIB<PIB2;
int rnp2;
rnp2= numerodepontosturisticos<numerodepontosturisticos2;
int rpibpc2;
rpibpc2= capital<capital2;
int rdp2;
rdp2= densidade>densidade2;
int  rpoder2;
rpoder2= poder<poder2;
densidade=populacao/area;
densidade2=populacao2/area2;
capital=PIB/populacao;
capital2=PIB2/populacao2;
//informaçoes das cartas //

//carta 1//

printf("\nSUA PIMEIRA CARTA TEM OS SEGUINTES ATRIBUTOS!\n");
printf("\n ### SUA PIMEIRA CARTA TEM OS SEGUINTES ATRIBUTOS! ###\n");
printf("carta: 1\n");
printf("Estado: %s \n", estado);
printf("codigo da carta: %s \n", codigodacarta);
printf("nome da cidade: %s \n", nomedacidade);
printf("populaçao: %lu \n", populacao);
printf("Area: %.3f (em km2) \n", area);
printf("PIB: %.3f de reais \n", PIB);
printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos);
printf("a Densidade Populacional e de :%.2f hab/km²\n", densidade);
printf("o PIB per Capita e de:%.2f reais\n", capital);
printf(" o poder da sua carta e :%.2f pontos\n",poder);

//carta 2//

printf("\n ### SUA SEGUNDA CARTA TEM OS SEGUINTES ATRIBUTOS! ###\n");
printf("carta: 2\n");
printf("Estado: %s \n", estado2);
printf("codigo da carta: %s \n", codigodacarta2);
printf("nome da cidade: %s \n", nomedacidade2);
printf("populaçao: %lu \n", populacao2);
printf("Area: %.3f (em km2) \n", area2);
printf("PIB: %.3f de reais \n", PIB2);
printf("Numero de pontos turisticos: %i \n", numerodepontosturisticos2);
printf("a Densidade Populacional e de :%.2f hab/km²\n", densidade2);
printf("o PIB per Capita e de:%.2f reais\n", capital2);
printf(" o poder da sua carta e :%.2f pontos\n",poder2);


//COMPARAÇAO DE CARTAS//
int escolha,escolha2;
char pais[50];
printf("***AGORA VAMOS JOGAR,ESCOLHA DOIS ATRIBUTO PARA A COMPETIÇAO!***\n");
printf("ESCREVA O PAIS DA SUA CARTA!\n");
scanf("%s", &pais);
printf("1= POPULAÇAO\n");
printf("2= AREA\n");
printf("3= PIB\n");
printf("4= NUMERO DE PONTOS TURISTICOS\n");
printf("5= CAPITAL\n");
printf("6= DENSIDADE\n");
printf("7= PODER\n");
scanf("%d", &escolha);



printf("agora com as carta selecionadas,vamos começar!\n");

int resultado,resultado2;

switch (escolha)
{
case 1:
    printf("voce escolheu 'POPULAÇAO' como valor:%lu\n",populacao);
    resultado = populacao > populacao2 ? 1 : 0;
    break;
case 2:
    printf("voce escolheu 'AREA' com o valor: %.2f\n",area);
    resultado = area > area2 ? 1 : 0;
    break;
case 3:
    printf("voce escolheu 'PIB' com o valor: %.2f\n", PIB);
    resultado = PIB > PIB2 ? 1 : 0;
    break;
case 4:
    printf("voce escolheu 'NUMERO DE PONTOS TURISTICOS' com o valor:%d\n",numerodepontosturisticos);
    resultado = numerodepontosturisticos > numerodepontosturisticos2 ? 1 : 0;
    break;
case 5:
    printf("voce escolheu 'CAPITAL' com o valor:%.2f\n", capital);
    resultado = capital > capital2 ? 1 : 0;
    break;
case 6:
    printf("voce escolheu 'DENSIDADE' com o valor:%.2f\n",densidade);
    resultado = densidade < densidade2 ? 1 : 0;
    break;
case 7:
    printf("voce escolheu 'PODER' com o valor:%.2f\n",poder);
    resultado = poder > poder2 ? 1 : 0;
    break;

default:
    printf("opçao invalida! \n");
    break;
}

printf("agora escolha o seu segundo atributo para a disputa!\n");
scanf("%d", &escolha2);



    if (escolha == escolha2) {
    printf("as opçao sao iguais, escolha outra opçao!\n");
    }else {
        switch (escolha2)
{
case 1:
    printf("voce escolheu 'POPULAÇAO' como valor:%lu\n",populacao);
    resultado2 = populacao > populacao2 ? 1 : 0;
    break;
case 2:
    printf("voce escolheu 'AREA' com o valor: %.2f\n",area);
    resultado2 = area > area2 ? 1 : 0;
    break;
case 3:
    printf("voce escolheu 'PIB' com o valor: %.2f\n", PIB);
    resultado2 = PIB > PIB2 ? 1 : 0;
    break;
case 4:
    printf("voce escolheu 'NUMERO DE PONTOS TURISTICOS' com o valor:%d\n",numerodepontosturisticos);
    resultado2 = numerodepontosturisticos > numerodepontosturisticos2 ? 1 : 0;
    break;
case 5:
    printf("voce escolheu 'CAPITAL' com o valor:%.2f\n", capital);
    resultado2 = capital > capital2 ? 1 : 0;
    break;
case 6:
    printf("voce escolheu 'DENSIDADE' com o valor:%.2f\n",densidade);
    resultado2 = densidade < densidade2 ? 1 : 0;
    break;
case 7:
    printf("voce escolheu 'PODER' com o valor:%.2f\n",poder);
    resultado2 = poder > poder2 ? 1 : 0;
    break;

default:
    printf("opçao invalida! \n");
    break;

    }}

    if (resultado && resultado2){
        printf("carta 1 do pais : %s \n", pais);
    printf("PARABENS!VOCE GANHOU.\n");

    }else if (resultado != resultado2){
        printf("DEU EMPATI!\n");
    }else {
         printf("carta 2 ganhou!");
        printf("VOCE PERDEU!\n");
    }
    
    

return 0;
}