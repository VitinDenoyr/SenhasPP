# SenhasPlusPlus
O arquivo "senhas++" é um programa simples que fiz com o objetivo de ser útil a gerenciamento de senhas de forma básica, além de ser o meu
primeiro projeto de um programa funcional, usando o google forms.

Guia das funções:
-FORMATAÇÃO DE SENHA
Dada uma senha no campo inserido, o programa trata de remover da sua senha tudo o que você desmarcar das caixas de seleção,
podendo ser letras minúsculas, maiúsculas, dígitos ou caracteres especiais.

-GERAÇÃO DE SENHA
Gera uma senha aleatória na respectiva caixa de texto.
O tamanho da senha pode ser configurado como de 1 a 100 caracteres.

-CRIPTOGRAFAR SENHA
Usa algoritmos básicos de criptografia para tornar uma senha um pouco mais difícil de ser deduzida, mas
sem torná-la completamente aleatória, de modo que sabendo os processos usados para criptografar, um usuário
pode partir de uma senha fácil de memorizar, realizar os processos de criptografar, e obter uma senha considerávelmente melhor.

*SOMA (n)
A criptografia de soma funciona análogamente a Cifra de Cesar, onde inserindo um inteiro n de 1 a 25,
o algoritmo transforma cada letra e algarismo da senha em seu sucessor n vezes. Em caso de não haver 
sucessor, o sucessor é considerado o primeiro da sequência (EX: Sucessor de "z" = "a", Sucessor de "9" = "0").

*SOMA PARCIAL (n) (k)
A soma parcial usa o mesmo método da soma, porém, agora usamos o parâmetro k para executar o seguinte filtro:
"apenas os termos cuja posição seja múltipla de k, sendo a primeira posição = 1, serão afetados pelo algoritmo"

*ESPELHAMENTO
O espelhamento é um algoritmo simples que inverte a ordem que os caracteres aparecem na senha.
EX: abcde -> edcba , a318b) -> )b813a

*INVERSÃO
O algoritmo de inversão afeta números e letras, trocando cada um por sua respectiva contraparte no alfabeto/sistema numérico
a x° letra do alfabeto é trocada pela (26-x)° letra do alfabeto e o x° menor algarismo é trocado pelo x° maior algarismo.
EX: 124ab -> 875zy , AaBb09 -> ZzYy90