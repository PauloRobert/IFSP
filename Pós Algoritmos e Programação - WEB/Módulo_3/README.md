
# 🎯 Jogo das Portas Misteriosas

Um jogo simples e interativo em C desenvolvido como parte do Módulo 3 da pós-graduação no IFSP, focado no uso de estruturas de repetição e aleatoriedade, sem o uso de vetores, funções ou procedimentos.

---

## 🧠 Ideia e Objetivo

O objetivo deste jogo é criar uma dinâmica divertida utilizando apenas os conceitos básicos da linguagem C, como:

- Estruturas de repetição (`while`)
- Comandos condicionais (`if/else`)
- Geração de números aleatórios (`rand`)
- Entrada e saída padrão (`scanf/printf`)

O jogador deve adivinhar em qual das 3 portas está o prêmio. Cada escolha errada custa uma vida. Acertos rendem pontos!

---

## 🎮 Regras e Interações

✅ O jogador começa com **3 vidas**  
🚪 Em cada rodada, escolhe **uma das 3 portas**  
🎁 A porta premiada é **sorteada aleatoriamente**  
🎯 **Se acertar**, ganha **1 ponto**  
❌ **Se errar**, perde **1 vida**  
💀 O jogo termina quando as **vidas chegam a 0**  

---

## 📷 Exemplo de Gameplay

```
=== Jogo das Portas Misteriosas ===
Você tem 3 vidas. Escolha a porta certa para ganhar pontos!

Escolha uma porta (1, 2 ou 3): 2
Ops! A porta premiada era a 3. Você perdeu uma vida.
Vidas restantes: 2 | Pontos: 0
----------------------------------

Escolha uma porta (1, 2 ou 3): 1
Parabéns! Você escolheu a porta certa!
Vidas restantes: 2 | Pontos: 1
----------------------------------

...
Fim de jogo! Sua pontuação final foi: 4
```

---

## 🔧 Requisitos e Execução

- Compilador C (gcc, clang, etc.)
- Terminal ou console para execução

### 🔨 Para compilar:

```bash
gcc portas.c -o portas
```

### ▶️ Para rodar:

```bash
./portas
```

---

## 👨‍💻 Tecnologias e Restrições

- Linguagem: C
- Sem uso de vetores, matrizes, funções ou procedimentos
- Utiliza: `while`, `if`, `scanf`, `printf`, `rand`

---

## 📁 Estrutura do Código

```c
int vidas = 3;
int pontos = 0;
while (vidas > 0) {
    // Sorteio de porta
    // Leitura da escolha
    // Verificação e pontuação
}
```

---

## 📚 Projeto Acadêmico

📍 Curso: Pós-graduação em Desenvolvimento de Software  
📍 Instituição: IFSP  
📅 Módulo 3 – Estruturas de Repetição e Aleatoriedade

---

## 📎 Licença

Este projeto é de uso educacional, sem fins comerciais.

---
