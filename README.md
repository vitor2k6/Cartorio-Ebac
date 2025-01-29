# 🖥️ Sistema de Gerenciamento de Usuários - Cartório da Ebac  

Este código implementa um sistema simples de gerenciamento de usuários para um cartório, permitindo registrar, consultar e deletar informações de usuários com base no CPF. Ele foi desenvolvido em **C** e utiliza operações de leitura e escrita de arquivos para armazenar e consultar os dados dos usuários.  

## 🔍 O Primeiro Passo: Cadastro de Usuários  
O processo começa com o **registro** de um novo usuário. O programa solicita que o CPF seja inserido para criar um arquivo específico para cada usuário. Em seguida, são pedidas as informações do usuário, como **nome**, **sobrenome** e **cargo**, que são salvas no arquivo correspondente ao CPF.

### Etapas de cadastro:  
1. O programa solicita o CPF para criar um arquivo.  
2. O nome, sobrenome e cargo do usuário são adicionados ao arquivo em formato CSV (valores separados por vírgula).  

## 🔄 Consultando Usuários  
A função de **consulta** permite verificar as informações de um usuário baseado no CPF. Quando o CPF é informado, o programa busca o arquivo correspondente e exibe as informações salvas.

### Etapas de consulta:  
1. O programa solicita o CPF do usuário a ser consultado.  
2. Ele tenta abrir o arquivo do CPF informado. Se o arquivo não existir, uma mensagem de erro é exibida. Caso contrário, as informações são exibidas na tela.

## ❌ Deletando Usuários  
A função de **deleção** permite excluir um usuário do sistema. Após inserir o CPF do usuário a ser deletado, o programa remove o arquivo correspondente ao CPF.

### Etapas de deleção:  
1. O programa solicita o CPF do usuário a ser deletado.  
2. Ele tenta abrir o arquivo do CPF informado. Se o arquivo existir, o arquivo é removido do sistema.

## 🛠️ Fluxo Principal  
O sistema é baseado em um menu interativo com as seguintes opções:  

- **1** → Registrar Usuário  
- **2** → Consultar Usuário  
- **3** → Deletar Usuário  
- **4** → Sair do Sistema  

O programa continua em execução até que o usuário escolha a opção para sair.  

## 🚀 Possíveis Melhorias  
- Adicionar validação de CPF para garantir que apenas números válidos sejam inseridos.  
- Implementar um sistema de autenticação para proteger o acesso ao cadastro, consulta e deleção.  
- Melhorar a interface do usuário para uma experiência mais amigável.  

Esse código é uma boa demonstração de como usar arquivos em C para gerenciar informações de usuários de forma simples e eficiente. 🖥️
