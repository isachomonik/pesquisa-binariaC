## Pesquisa binária em C
<p>Algoritmo de pesquisa binária em linguagem C</p>
<p>A pesquisa binária é um dos diversos e mais conhecidos algoritmos do mundo da programação, a pesquisa binária permite diminuir drasticamente o tempo de pesquisa de um item em uma lista. Em um algoritmo de busca simples, utilizando de uma lista telefônica com 4 bilhões de nomes e esperando o pior resultado possível, o número de etapas necessárias para encontrar determinado nome, seria de 4 bilhões. Utilizando a pesquisa binária, o número de etapas cai pra 32!</p>

## Funcionamento:
<p>O algortimo recebe uma lista ordenada de items e realiza um "chute" no meio da lista, depois ele verifica se o chute está do meio pra baixo ou do meio pra cima da lista, dependendo da resposta o algoritmo discarta a outra parte e realiza outro chute, novamente no meio da lista. O algoritmo realiza esse padrão até encontrar o item buscado na lista, retornando seu indíce.</p>

###

## Exemplo:
<p>Dado uma lista com 100 números de 1 a 100, o algortimo primeiro chuta em *lista/2* que seria 50, vamos supor que o número desejado seja 57. O algoritmo então, sabendo que o número está de 50 pra cima, descarta os números abaixo de 50. Agora ele faz outro chute para o número 75, que é a metade do que restou da lista. O número está abaixo de 75, então os números acima são descartados e um novo chute é realizado, agora com o número 63. O padrão anterior se repete e um novo chute é feito, agora para o número 57, que é o número que buscamos. Pronto, o algoritmo encontrou o item buscado em apenas 4 tentativas. Levando em conta o pior resultado em um algoritmo de pesquisa simples, o número de passos seria de 100 e caiu pra 4.</p>
