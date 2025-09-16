==============================
RELATÓRIO DO PROGRAMA EM C
==============================

✅ RESUMO:
Programa de calculadora interativa que permite ao usuário realizar operações matemáticas básicas (soma, subtração, multiplicação e divisão) com dois números. O sistema funciona em loop até que o usuário escolha a opção de sair.

🧠 VARIÁVEIS USADAS:
- int opcao → armazena a escolha do usuário no menu
- float num1, num2, resultado → números para cálculo e resultado final
- char nome[100] → armazena o nome completo do usuário

🔧 FUNÇÕES PRINCIPAIS:
- setlocale() → define o idioma para português
- scanf() → entrada de dados (nome, números, opção)
- printf() → exibe mensagens e resultados
- do...while → mantém o programa em execução até que o usuário escolha sair
- switch...case → executa a operação matemática escolhida

⚠️ OBSERVAÇÕES:
- A leitura do nome com `scanf("%[^\n]s", nome);` pode causar problemas se houver lixo no buffer.
- A linha `printf("\Finalizado.\n", nome);` contém erro de escape. Corrigir para `printf("Finalizado.\n");`.
==============================
