#include <stdio.h>
#include <stdlib.h>
#include <windows.h>  // Para Sleep() e cores

// Função para imprimir texto com efeito digitado
void printWithDelay(const char *text, int delay) {
    while (*text) {
        printf("%c", *text);
        fflush(stdout);
        Sleep(delay);
        text++;
    }
}

// Função para mudar a cor do terminal aleatoriamente
void changeColor() {
    int color = (rand() % 15) + 1; // Cores de 1 a 15
    char command[10];
    sprintf(command, "color %X", color);
    system(command);
}

// Função para animação piscante do "HELLO WORLD"
void flashyHelloWorld() {
    int i;
    for (i = 0; i < 5; i++) {  
        system("cls");  // Limpa a tela
        changeColor();  // Troca a cor
        printWithDelay("HELLO WORLD!!!\n", 50);
        Sleep(300);
    }
}

// História interativa
void story(char name[]) {
    int choice;
    
    system("cls");
    changeColor();
    
    // Introdução
    printWithDelay("\n???? Bem-vindo ao mundo C, ", 80);
    printWithDelay(name, 80);
    printWithDelay("! ????\n\n", 80);
    
    Sleep(500);
    printWithDelay("Num mundo dominado por maquinas e algoritmos,\n", 50);
    printWithDelay("existe um segredo que poucos conseguiram desvendar...\n", 50);
    Sleep(500);
    printWithDelay("\nUm programa lendario conhecido como **O Codigo Perdido**.\n", 50);
    Sleep(500);
    printWithDelay("Ao liga-lo, voce sente que algo estranho acontece...\n\n", 50);
    
    // Primeira escolha
    printWithDelay("O que deseja fazer?\n", 50);
    printWithDelay("1?? Investigar mais sobre o codigo e desbloquear seus poderes.\n", 50);
    printWithDelay("2?? Tentar desligar o computador antes que seja tarde demais.\n", 50);
    printWithDelay("3?? Aceitar o desafio e se tornar o maior programador da historia.\n", 50);
    
    printf("\nEscolha (1, 2 ou 3): ");
    scanf("%d", &choice);
    
    system("cls");
    
    // Escolhas do jogador
    if (choice == 1) {
        printWithDelay("\n?? Voce decide investigar mais a fundo...\n", 50);
        Sleep(500);
        printWithDelay("O terminal pisca violentamente...\n", 50);
        printWithDelay("Linhas de codigo aparecem e somem...\n", 50);
        Sleep(500);
        printWithDelay("\n?? De repente, uma mensagem surge na tela: 'ERRO FATAL: O CODIGO TE ENCONTROU...'\n", 50);
        printWithDelay("O monitor desliga sozinho. Voce nunca mais conseguiu acessar o computador.\n", 50);
        printWithDelay("Final Secreto: **O Codigo Viu Tudo.**\n", 50);
    
    } else if (choice == 2) {
    printWithDelay("\n? Voce entra em panico e tenta desligar o computador...\n", 50);
    Sleep(500);
    printWithDelay("Mas o botao nao responde...\n", 50);
    printWithDelay("A tela escurece...\n", 50);
    Sleep(500);
    printWithDelay("\n?? O sistema foi restaurado. Tudo parece normal...\n", 50);
    printWithDelay("Mas uma linha de codigo foi adicionada no seu sistema sem voce perceber...\n", 50);
    printWithDelay("Final Alternativo: **O Codigo Ainda Vive...**\n", 50);

    // DESLIGAR O COMPUTADOR EM 5 SEGUNDOS
    system("shutdown /s /t 5");
    
    } else if (choice == 3) {
        printWithDelay("\n?? Voce aceita o desafio e se torna um programador lendario!\n", 50);
        Sleep(500);
        printWithDelay("Linhas de codigo aparecem na sua frente...\n", 50);
        printWithDelay("Seu conhecimento cresce exponencialmente...\n", 50);
        Sleep(500);
        printWithDelay("\n?? Parabens, ", 50);
        printWithDelay(name, 50);
        printWithDelay(", voce agora domina o Codigo Perdido!\n", 50);
        printWithDelay("Final Epico: **O Mestre do Codigo!**\n", 50);
    
    } else {
        printWithDelay("\n?? Escolha invalida! O Codigo nao aceita indecisao...\n", 50);
        printWithDelay("O sistema trava e seu destino permanece um misterio...\n", 50);
        printWithDelay("Final Misterioso: **O Codigo Te Observa.**\n", 50);
    }
}

int main() {
    char name[50];

    system("cls"); // Limpar a tela no início
    srand(time(NULL)); // Inicializa gerador de números aleatórios

    flashyHelloWorld();  // Exibe o "HELLO WORLD" piscante

    // Pergunta o nome do usuário
    printWithDelay("\nQual o seu nome, aventureiro?\n", 50);
    printf("> ");
    scanf("%49s", name);

    // Iniciar história interativa
    story(name);

    return 0;
}

