1.Identifique as entradas e saídas do sistema:
Entradas:	
3 botões = sinais digitais 
1 potenciômetro = sinal analógico 
Saídas:
LEDs = acionados pelo Arduino conforme a lógica

2.Apresente todos os componentes do sistema e para que eles servem
Arduino Uno: controla todo o sistema (lê entradas e define saídas)
Botões (3x): enviam comandos digitais (pressionado = ALTO)
Potenciômetro: gera valor analógico para controlar intensidade dos LEDs
Resistores: protegem o circuito e estabilizam sinais
LEDs (pinos 9, 10, 11): indicam o estado do sistema
Protoboard + jumpers: montagem do circuito

3.Apresente as regras de funcionamento a serem implementadas
Se botão 1 for pressionado = acende vermelho com intensidade controlada pelo
potenciômetro.
Se botão 2 for pressionado = acende a cor combinada, amarelo.
Se botão 3 for pressionado = acende azul com intensidade controlada
Se nenhum botão for pressionado = LED fica desligado
O potenciômetro sempre controla o brilho da cor ativa

4.Explique como você utilizaria estruturas if para controlar o sistema
O sistema usa  if  para verificar se cada botão está pressionado:
if (bot1 ==  alto) =  executa ações do LED 11
if (bot2 ==  alto) =  executa ações do LED 10
if (bot3 ==  alto) =  executa ações do LED 9

<img scr "[210136.png](https://github.com/Mewtho005/PensamentoComputacional/blob/main/210136.png)" width="50%" >
