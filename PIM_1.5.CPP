#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
#include <locale.h>
#include <windows.h>
#define SIZE 200

// Declaracao das variaveis telas
FILE *file;
void tela_clinica_1(); //OK
void tela_clinica_2(); //OK
void tela_clinica_3(); //OK
void tela_cadastro_login();
//clinica1 telas
void tela_cadastrar_paciente_clinica1();
void tela_lista_cadastros_clinica1();
void tela_pesquisa_paciente_clinica1();
void tela_menu_clinica1();
void tela_cadastrar_medico_clinica1();
void tela_lista_medicos_clinica1();
void tela_pesquisa_medico_clinica1();
void tela_agendar_clinica1();
void tela_lista_agendamentos_clinica1();
void tela_pesquisa_agendamentos_clinica1();
//clinica2 telas
void tela_cadastrar_paciente_clinica2();
void tela_lista_cadastros_clinica2();
void tela_pesquisa_paciente_clinica2();
void tela_menu_clinica2();
void tela_cadastrar_medico_clinica2();
void tela_lista_medicos_clinica2();
void tela_pesquisa_medico_clinica2();
void tela_agendar_clinica2();
void tela_lista_agendamentos_clinica2();
void tela_pesquisa_agendamentos_clinica2();
//clinica3 telas
void tela_cadastrar_paciente_clinica3();
void tela_lista_cadastros_clinica3();
void tela_pesquisa_paciente_clinica3();
void tela_menu_clinica3();
void tela_cadastrar_medico_clinica3();
void tela_lista_medicos_clinica3();
void tela_pesquisa_medico_clinica3();
void tela_agendar_clinica3();
void tela_lista_agendamentos_clinica3();
void tela_pesquisa_agendamentos_clinica3();
//admin telas
void tela_adm();
void tela_relatorio();
void tela_impressao_pacientes();
void tela_impressao_medicos();
void tela_totalizacao_diaria_mensal();
void tela_impressao_usuarios();
void tela_impressao_diaria();
void tela_impressao_mensal();
//Declaracao variaveis
int escolha_clinica, escolha_login;
int acess_login, acess_sen;
//Variaveis tela_clinica1
char clinica1_sen[SIZE] = ("Clin123");
char clinica1_sen_confirmacao[SIZE];
int acess_clinica1_sen;
//Variaveis tela_clinica2
char clinica2_sen[SIZE] = ("Clin123");
char clinica2_sen_confirmacao[SIZE];
int acess_clinica2_sen;
//Variaveis tela_clinica3
char clinica3_sen[SIZE] = ("Clin123");
char clinica3_sen_confirmacao[SIZE];
int acess_clinica3_sen;
//Variaveis tela_adm()
char adm[SIZE] = ("Admin"), adm_sen[SIZE] = ("Porta21");
char adm_confirmacacao[SIZE], adm_sen_confirmacao[SIZE];
int acess_adm, acess_adm_sen;
int escolha_adm;
struct agendamento
{
    char nome[SIZE];
    char data[SIZE];
    char hora[SIZE];
    char procedimento[SIZE];
    char medico[SIZE];
    char CRM[SIZE];
    float valor;
};
struct medico
{
    int linha;
    char nome[SIZE];
    char especializacao[SIZE];
    char CRM[SIZE];
};
struct paciente
{
    int linha;
    char nome[SIZE];
    char email[SIZE];
    char cpf[SIZE];
    char sexo[SIZE];
    char endereco[SIZE];
    char rg[SIZE];
    char bairro[SIZE];
    char telefone[SIZE];
    char datanasc[SIZE];
};
int main()
{
    do
    {
        fflush(stdin);
        system("cls");
        printf("Digite qual clinica deseja entrar\n (1) - Clinica 01\n (2) - Clinica 02\n (3) - Clinica 03\n (4) - Entrar como ADM\n (5) - Sair\n>>> ");
        scanf("%d", &escolha_login);

        switch (escolha_login)
        {
        case 1:
            tela_clinica_1();
            break;
        case 2:
            tela_clinica_2();
            break;
        case 3:
            tela_clinica_3();
            break;
        case 4:
            tela_adm();
            break;
        case 5:
            printf("\nAte logo!!");
            getche();
            break;
        default:
            printf("\nOpcao invalida!!");
            break;
        }
    }
    while (escolha_login != 5);
    return 0;
}
void tela_clinica_1()
{
    system("cls");
    fflush(stdin);
    printf("Digite a senha da CLINICA 01: ");
    gets(clinica1_sen_confirmacao);
    acess_clinica1_sen = strcmp(clinica1_sen, clinica1_sen_confirmacao);
    if (acess_clinica1_sen == 0)
    {
        printf("Logado com sucesso!!");
        getche();
        tela_menu_clinica1();
    }
    else
    {
        printf("\nSenha incorreta!!");
        getche();
        return;
    }
}
void tela_clinica_2()
{
    system("cls");
    fflush(stdin);
    printf("Digite a senha da CLINICA 02: ");
    gets(clinica2_sen_confirmacao);
    acess_clinica2_sen = strcmp(clinica2_sen, clinica2_sen_confirmacao);
    if (acess_clinica2_sen == 0)
    {
        printf("Logado com sucesso!!");
        getche();
        tela_menu_clinica2();
    }
    else
    {
        printf("\nSenha incorreta!!");
        getche();
        return;
    }
}
void tela_clinica_3()
{
    system("cls");
    fflush(stdin);
    printf("Digite a senha da CLINICA 03: ");
    gets(clinica3_sen_confirmacao);
    acess_clinica3_sen = strcmp(clinica3_sen, clinica3_sen_confirmacao);
    if (acess_clinica3_sen == 0)
    {
        printf("Logado com sucesso!!");
        getche();
        tela_menu_clinica3();
    }
    else
    {
        printf("\nSenha incorreta!!");
        getche();
        return;
    }
}
void tela_adm()
{
    system("cls");
    fflush(stdin);
    printf("Digite o login do ADMIN: ");
    gets(adm_confirmacacao);
    printf("Digite a senha: ");
    gets(adm_sen_confirmacao);
    acess_adm = strcmp(adm, adm_confirmacacao);
    acess_adm_sen = strcmp(adm_sen, adm_sen_confirmacao);
    if(acess_adm == 0 && acess_adm_sen == 0)
    {
        printf("Logado com sucesso!!");
        getche();
        tela_relatorio();
    }
    else
    {
        printf("\nLogin ou senha incorretos!!\n");
        getche();
        return;
    }
    return;
}
//CLINICA 1
void tela_menu_clinica1()
{
    int op;
    do
    {
        system("cls");
        fflush(stdin);
        printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 1 =-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("   (MENU)    \n(1) - Cadastrar paciente\n(2) - Cadastros de pacientes\n(3) - Pesquisar paciente\n(4) - Cadastrar medico\n(5) - Cadastros de medicos\n(6) - Pesquisar medico\n(7) - Cadastrar agendamento\n(8) - Agendamentos\n(9) - Pesquisar agendamento\n(0) - Voltar\n>>> ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            tela_cadastrar_paciente_clinica1();
            break;
        case 2:
            tela_lista_cadastros_clinica1();
            break;
        case 3:
            tela_pesquisa_paciente_clinica1();
            break;
        case 4:
            tela_cadastrar_medico_clinica1();
            break;
        case 5:
            tela_lista_medicos_clinica1();
            break;
        case 6:
            tela_pesquisa_medico_clinica1();
            break;
        case 7:
            tela_agendar_clinica1();
            break;
        case 8:
            tela_lista_agendamentos_clinica1();
            break;
        case 9:
            tela_pesquisa_agendamentos_clinica1();
            break;
        case 0:
            return;
        default:
            printf("\nOpcao invalida.\n");
            getche();
            break;
        }
    }
    while(op!=0);
}
void tela_cadastrar_paciente_clinica1()
{
    int ultima_linha = 0;
    struct paciente pac;
    fflush(stdin);
    system("cls");
    file = fopen("Pacientes1.txt", "r");
    while(fread(&pac, sizeof(struct paciente),1,file))
        ultima_linha = pac.linha;
    fclose(file);
    file = fopen("Pacientes1.txt", "a");
    pac.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE PACIENTES =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(pac.nome);
    printf("Digite o email: ");
    gets(pac.email);
    printf("Informe o Sexo: ");
    gets(pac.sexo);
    printf("Digite o endereco: ");
    gets(pac.endereco);
    printf("Digite o bairro: ");
    gets(pac.bairro);
    printf("Digite a data de nascimento: ");
    gets(pac.datanasc);
    printf("Digite o cpf: ");
    gets(pac.cpf);
    printf("Digite o RG: ");
    gets(pac.rg);
    printf("Digite o telefone: ");
    gets(pac.telefone);
    fwrite(&pac, sizeof(struct paciente), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_cadastros_clinica1()
{
    struct paciente pac[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Pacientes1.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= PACIENTES CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&pac[num_pacientes], sizeof(struct paciente), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nNumero do cadastro: %d", pac[i].linha);
        printf("\nNome: %s ", pac[i].nome);
        printf("\nEmail: %s",pac[i].email);
        printf("\nSexo: %s", pac[i].sexo);
        printf("\nEndereco: %s", pac[i].endereco);
        printf("\nBairro: %s", pac[i].bairro);
        printf("\nData de Nascimento: %s", pac[i].datanasc);
        printf("\nCPF: %s", pac[i].cpf);
        printf("\nRG: %s", pac[i].rg);
        printf("\nTelefone: %s", pac[i].telefone);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_paciente_clinica1()
{
    struct paciente pac;
    char pesquisa[SIZE];
    int pesquisas_encontradas, op;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE PACIENTE NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o cpf do paciente:\n");
    gets(pesquisa);
    file = fopen ("Pacientes1.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&pac, sizeof(struct paciente), 1, file))
    {
        pesquisas_encontradas = strcmp(pac.cpf, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nNumero do cadastro: %d", pac.linha);
            printf("\nNome: %s ", pac.nome);
            printf("\nEmail: %s", pac.email);
            printf("\nSexo: %s", pac.sexo);
            printf("\nEndereco: %s", pac.endereco);
            printf("\nBairro: %s", pac.bairro);
            printf("\nData de Nascimento: %s", pac.datanasc);
            printf("\nCPF: %s", pac.cpf);
            printf("\nRG: %s", pac.rg);
            printf("\nTelefone: %s", pac.telefone);
            printf("\n");
            fclose(file);
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou paciente nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_cadastrar_medico_clinica1()
{
    int ultima_linha = 0;
    struct medico med;
    system("cls");
    fflush(stdin);
    file = fopen("Medicos1.txt", "r");
    while(fread(&med, sizeof(struct medico),1,file))
        ultima_linha = med.linha;
    fclose(file);
    file = fopen("Medicos1.txt", "a");
    med.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE MEDICOS =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(med.nome);
    printf("Digite a especializacao: ");
    gets(med.especializacao);
    printf("Digite o CRM: ");
    gets(med.CRM);
    fwrite(&med, sizeof(struct medico), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_medicos_clinica1()
{
    struct medico med[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Medicos1.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= MEDICOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&med[num_pacientes], sizeof(struct medico), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nNumero do cadastro: %d", med[i].linha);
        printf("\nNome: %s ", med[i].nome);
        printf("\nEspecializacao: %s",med[i].especializacao);
        printf("\nCRM: %s", med[i].CRM);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_medico_clinica1()
{
    struct medico med;
    char pesquisa[SIZE];
    int pesquisas_encontradas;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE MEDICO NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o CRM:\n");
    gets(pesquisa);
    file = fopen ("Medicos1.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&med, sizeof(struct medico), 1, file))
    {
        pesquisas_encontradas = strcmp(med.CRM, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nNumero do cadastro: %d", med.linha);
            printf("\nNome: %s ", med.nome);
            printf("\nEspecializacao: %s", med.especializacao);
            printf("\nCRM: %s", med.CRM);
            fclose(file);
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou medico nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_agendar_clinica1()
{
    struct agendamento agenda;
    system("cls");
    fflush(stdin);
    file = fopen("Agendamentos1.txt", "a");
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTO DE CONSULTA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome do paciente: ");
    gets(agenda.nome);
    printf("Digite a data do agendamento: ");
    gets(agenda.data);
    printf("Digite o horario do agendamento: ");
    gets(agenda.hora);
    printf("Digite o procedimento da consulta: ");
    gets(agenda.procedimento);
    printf("Digite o nome do medico que ira atender: ");
    gets(agenda.medico);
    printf("Digite o CRM: ");
    gets(agenda.CRM);
    printf("Digite o preco da consulta: ");
    scanf("%f", &agenda.valor);
    fwrite(&agenda, sizeof(struct agendamento), 1, file);
    fclose(file);
    printf("\nAgendamento realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_agendamentos_clinica1()
{
    struct agendamento agenda[SIZE];
    int num_agendas = 0;
    system("cls");
    file = fopen("Agendamentos1.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");

    while(fread(&agenda[num_agendas], sizeof(struct agendamento), 1, file))
    {
        num_agendas++;
    }
    for(int i = 0; i < num_agendas; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nPaciente: %s ", agenda[i].nome);
        printf("\nData: %s", agenda[i].data);
        printf("\nHorario: %s", agenda[i].hora);
        printf("\nProcedimento: %s",agenda[i].procedimento);
        printf("\nMedico: %s", agenda[i].medico);
        printf("\nCRM: %s", agenda[i].CRM);
        printf("\nPreco da consulta: %.2f", agenda[i].valor);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_agendamentos_clinica1()
{
    FILE*tmp;
    struct agendamento agenda;
    char pesquisa[SIZE];
    int pesquisas_encontradas,op;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE AGENDAMENTOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite a data desejada:\n");
    gets(pesquisa);
    file = fopen ("Agendamentos1.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nPaciente: %s ", agenda.nome);
            printf("\nData: %s", agenda.data);
            printf("\nHorario: %s", agenda.hora);
            printf("\nProcedimento: %s",agenda.procedimento);
            printf("\nMedico: %s", agenda.medico);
            printf("\nCRM: %s", agenda.CRM);
            printf("\nPreco da consulta: %.2f", agenda.valor);
            printf("\n");
        }
    }
    if((fread(&agenda, sizeof(struct agendamento), 1, file))== NULL && (pesquisas_encontradas != 0))
        printf("\nDados incorretos ou agendamento nao cadastrado.\n\n");
    fclose(file);
    do
    {
        printf("\n   (MENU)    \n(1) - Cancelar agendamento\n(2) - Voltar\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            fflush(stdin);
            printf("\nDigite o nome do paciente que deseja cancelar o agendamento: ");
            gets(pesquisa);
            file = fopen ("Agendamentos1.txt", "r");
            tmp = fopen ("tmp.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, file)!= NULL)
            {
                pesquisas_encontradas = strcmp(agenda.nome, pesquisa);
                if(pesquisas_encontradas != 0)
                    fwrite(&agenda, sizeof(struct agendamento), 1, tmp);
            }
            fclose(file);
            rewind(tmp);
            file = fopen ("Agendamentos1.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, tmp)!= NULL)
                fwrite(&agenda, sizeof(struct agendamento), 1, file);
            fclose(file);
            fclose(tmp);
            remove("tmp.txt");
            printf("Agendamento cancelado!!\n");
            getche();
            return;
        case 2:
            return;
        default:
            printf("Opcao invalida!!\n");
            break;
        }
    }
    while(op != 2);
    getche();
}
//CLINICA 2
void tela_menu_clinica2()
{
    int op;
    do
    {
        system("cls");
        fflush(stdin);
        printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 2 =-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("   (MENU)    \n(1) - Cadastrar paciente\n(2) - Cadastros de pacientes\n(3) - Pesquisar paciente\n(4) - Cadastrar medico\n(5) - Cadastros de medicos\n(6) - Pesquisar medico\n(7) - Cadastrar agendamento\n(8) - Agendamentos\n(9) - Pesquisar agendamento\n(0) - Voltar\n>>> ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            tela_cadastrar_paciente_clinica2();
            break;
        case 2:
            tela_lista_cadastros_clinica2();
            break;
        case 3:
            tela_pesquisa_paciente_clinica2();
            break;
        case 4:
            tela_cadastrar_medico_clinica2();
            break;
        case 5:
            tela_lista_medicos_clinica2();
            break;
        case 6:
            tela_pesquisa_medico_clinica2();
            break;
        case 7:
            tela_agendar_clinica2();
            break;
        case 8:
            tela_lista_agendamentos_clinica2();
            break;
        case 9:
            tela_pesquisa_agendamentos_clinica2();
            break;
        case 0:
            return;
        default:
            printf("\nOpcao invalida.\n");
            getche();
            break;
        }
    }
    while(op!=0);
}
void tela_cadastrar_paciente_clinica2()
{
    int ultima_linha = 0;
    struct paciente pac;
    fflush(stdin);
    system("cls");
    file = fopen("Pacientes2.txt", "r");
    while(fread(&pac, sizeof(struct paciente),1,file))
        ultima_linha = pac.linha;
    fclose(file);
    file = fopen("Pacientes2.txt", "a");
    pac.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE PACIENTES =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(pac.nome);
    printf("Digite o email: ");
    gets(pac.email);
    printf("Informe o Sexo: ");
    gets(pac.sexo);
    printf("Digite o endereco: ");
    gets(pac.endereco);
    printf("Digite o bairro: ");
    gets(pac.bairro);
    printf("Digite a data de nascimento: ");
    gets(pac.datanasc);
    printf("Digite o cpf: ");
    gets(pac.cpf);
    printf("Digite o RG: ");
    gets(pac.rg);
    printf("Digite o telefone: ");
    gets(pac.telefone);
    fwrite(&pac, sizeof(struct paciente), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_cadastros_clinica2()
{
    struct paciente pac[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Pacientes2.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= PACIENTES CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&pac[num_pacientes], sizeof(struct paciente), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\nNumero do cadastro: %d", pac[i].linha);
        printf("\nNome: %s ", pac[i].nome);
        printf("\nEmail: %s",pac[i].email);
        printf("\nSexo: %s", pac[i].sexo);
        printf("\nEndereco: %s", pac[i].endereco);
        printf("\nBairro: %s", pac[i].bairro);
        printf("\nData de Nascimento: %s", pac[i].datanasc);
        printf("\nCPF: %s", pac[i].cpf);
        printf("\nRG: %s", pac[i].rg);
        printf("\nTelefone: %s", pac[i].telefone);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_paciente_clinica2()
{
    struct paciente pac;
    char pesquisa[SIZE];
    int pesquisas_encontradas;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE PACIENTE NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o cpf do paciente:\n");
    gets(pesquisa);
    file = fopen ("Pacientes2.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&pac, sizeof(struct paciente), 1, file))
    {
        pesquisas_encontradas = strcmp(pac.cpf, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\nNumero do cadastro: %d", pac.linha);
            printf("\nNome: %s ", pac.nome);
            printf("\nEmail: %s", pac.email);
            printf("\nSexo: %s", pac.sexo);
            printf("\nEndereco: %s", pac.endereco);
            printf("\nBairro: %s", pac.bairro);
            printf("\nData de Nascimento: %s", pac.datanasc);
            printf("\nCPF: %s", pac.cpf);
            printf("\nRG: %s", pac.rg);
            printf("\nTelefone: %s", pac.telefone);
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou paciente nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_cadastrar_medico_clinica2()
{
    int ultima_linha = 0;
    struct medico med;
    system("cls");
    fflush(stdin);
    file = fopen("Medicos2.txt", "r");
    while(fread(&med, sizeof(struct medico),1,file))
        ultima_linha = med.linha;
    fclose(file);
    file = fopen("Medicos2.txt", "a");
    med.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE MEDICOS =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(med.nome);
    printf("Digite a especializacao: ");
    gets(med.especializacao);
    printf("Digite o CRM: ");
    gets(med.CRM);
    fwrite(&med, sizeof(struct medico), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_medicos_clinica2()
{
    struct medico med[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Medicos2.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= MEDICOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&med[num_pacientes], sizeof(struct medico), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nNumero do cadastro: %d", med[i].linha);
        printf("\nNome: %s ", med[i].nome);
        printf("\nEspecializacao: %s",med[i].especializacao);
        printf("\nCRM: %s", med[i].CRM);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_medico_clinica2()
{
    struct medico med;
    char pesquisa[SIZE];
    int pesquisas_encontradas;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE MEDICO NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o CRM:\n");
    gets(pesquisa);
    file = fopen ("Medicos2.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&med, sizeof(struct medico), 1, file))
    {
        pesquisas_encontradas = strcmp(med.CRM, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nNumero do cadastro: %d", med.linha);
            printf("\nNome: %s ", med.nome);
            printf("\nEspecializacao: %s", med.especializacao);
            printf("\nCRM: %s", med.CRM);
            fclose(file);
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou medico nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_agendar_clinica2()
{
    int ultima_linha = 0;
    struct agendamento agenda;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTO DE CONSULTA =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Agendamentos2.txt", "a");
    printf("Digite o nome do paciente: ");
    gets(agenda.nome);
    printf("Digite a data do agendamento: ");
    gets(agenda.data);
    printf("Digite o horario do agendamento: ");
    gets(agenda.hora);
    printf("Digite o procedimento da consulta: ");
    gets(agenda.procedimento);
    printf("Digite o nome do medico que ira atender: ");
    gets(agenda.medico);
    printf("Digite o CRM: ");
    gets(agenda.CRM);
    printf("Digite o preco da consulta: ");
    scanf("%f", &agenda.valor);
    fwrite(&agenda, sizeof(struct agendamento), 1, file);
    fclose(file);
    printf("\nAgendamento realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_agendamentos_clinica2()
{
    struct agendamento agenda[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Agendamentos2.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&agenda[num_pacientes], sizeof(struct agendamento), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nPaciente: %s ", agenda[i].nome);
        printf("\nData: %s", agenda[i].data);
        printf("\nHorario: %s", agenda[i].hora);
        printf("\nProcedimento: %s",agenda[i].procedimento);
        printf("\nMedico: %s", agenda[i].medico);
        printf("\nCRM: %s", agenda[i].CRM);
        printf("\nPreco da consulta: %.2f", agenda[i].valor);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_agendamentos_clinica2()
{
    FILE*tmp;
    struct agendamento agenda;
    char pesquisa[SIZE];
    int pesquisas_encontradas,op;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE AGENDAMENTOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite a data desejada:\n");
    gets(pesquisa);
    file = fopen ("Agendamentos2.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nPaciente: %s ", agenda.nome);
            printf("\nData: %s", agenda.data);
            printf("\nHorario: %s", agenda.hora);
            printf("\nProcedimento: %s",agenda.procedimento);
            printf("\nMedico: %s", agenda.medico);
            printf("\nCRM: %s", agenda.CRM);
            printf("\nPreco da consulta: %.2f", agenda.valor);
            printf("\n");
        }
    }
    if((fread(&agenda, sizeof(struct agendamento), 1, file))== NULL && (pesquisas_encontradas != 0))
        printf("\nDados incorretos ou agendamento nao cadastrado.\n\n");
    fclose(file);
    do
    {
        printf("\n   (MENU)    \n(1) - Cancelar agendamento\n(2) - Voltar\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            fflush(stdin);
            printf("\nDigite o nome do paciente que deseja cancelar o agendamento: ");
            gets(pesquisa);
            file = fopen ("Agendamentos2.txt", "r");
            tmp = fopen ("tmp.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, file)!= NULL)
            {
                pesquisas_encontradas = strcmp(agenda.nome, pesquisa);
                if(pesquisas_encontradas != 0)
                    fwrite(&agenda, sizeof(struct agendamento), 1, tmp);
            }
            fclose(file);
            rewind(tmp);
            file = fopen ("Agendamentos2.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, tmp)!= NULL)
                fwrite(&agenda, sizeof(struct agendamento), 1, file);
            fclose(file);
            fclose(tmp);
            remove("tmp.txt");
            printf("Agendamento cancelado!!\n");
            getche();
            return;
        case 2:
            return;
        default:
            printf("Opcao invalida!!\n");
            break;
        }
    }
    while(op != 2);
    getche();
}
//CLINICA 3
void tela_menu_clinica3()
{
    int op;
    do
    {
        system("cls");
        fflush(stdin);
        printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 3 =-=-=-=-=-=-=-=-=-=-=\n\n");
        printf("   (MENU)    \n(1) - Cadastrar paciente\n(2) - Cadastros de pacientes\n(3) - Pesquisar paciente\n(4) - Cadastrar medico\n(5) - Cadastros de medicos\n(6) - Pesquisar medico\n(7) - Cadastrar agendamento\n(8) - Agendamentos\n(9) - Pesquisar agendamento\n(0) - Voltar\n>>> ");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            tela_cadastrar_paciente_clinica3();
            break;
        case 2:
            tela_lista_cadastros_clinica3();
            break;
        case 3:
            tela_pesquisa_paciente_clinica3();
            break;
        case 4:
            tela_cadastrar_medico_clinica3();
            break;
        case 5:
            tela_lista_medicos_clinica3();
            break;
        case 6:
            tela_pesquisa_medico_clinica3();
            break;
        case 7:
            tela_agendar_clinica3();
            break;
        case 8:
            tela_lista_agendamentos_clinica3();
            break;
        case 9:
            tela_pesquisa_agendamentos_clinica3();
            break;
        case 0:
            return;
        default:
            printf("\nOpcao invalida.\n");
            getche();
            break;
        }
    }
    while(op!=0);
}
void tela_cadastrar_paciente_clinica3()
{
    int ultima_linha = 0;
    struct paciente pac;
    fflush(stdin);
    system("cls");
    file = fopen("Pacientes3.txt", "r");
    while(fread(&pac, sizeof(struct paciente),1,file))
        ultima_linha = pac.linha;
    fclose(file);
    file = fopen("Pacientes3.txt", "a");
    pac.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE PACIENTES =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(pac.nome);
    printf("Digite o email: ");
    gets(pac.email);
    printf("Informe o Sexo: ");
    gets(pac.sexo);
    printf("Digite o endereco: ");
    gets(pac.endereco);
    printf("Digite o bairro: ");
    gets(pac.bairro);
    printf("Digite a data de nascimento: ");
    gets(pac.datanasc);
    printf("Digite o cpf: ");
    gets(pac.cpf);
    printf("Digite o RG: ");
    gets(pac.rg);
    printf("Digite o telefone: ");
    gets(pac.telefone);
    fwrite(&pac, sizeof(struct paciente), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_cadastros_clinica3()
{
    struct paciente pac[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Pacientes3.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= PACIENTES CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&pac[num_pacientes], sizeof(struct paciente), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
        printf("\nNumero do cadastro: %d", pac[i].linha);
        printf("\nNome: %s ", pac[i].nome);
        printf("\nEmail: %s",pac[i].email);
        printf("\nSexo: %s", pac[i].sexo);
        printf("\nEndereco: %s", pac[i].endereco);
        printf("\nBairro: %s", pac[i].bairro);
        printf("\nData de Nascimento: %s", pac[i].datanasc);
        printf("\nCPF: %s", pac[i].cpf);
        printf("\nRG: %s", pac[i].rg);
        printf("\nTelefone: %s", pac[i].telefone);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_paciente_clinica3()
{
    struct paciente pac;
    char pesquisa[SIZE];
    int pesquisas_encontradas;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE PACIENTE NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o cpf do paciente:\n");
    gets(pesquisa);
    file = fopen ("Pacientes3.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&pac, sizeof(struct paciente), 1, file))
    {
        pesquisas_encontradas = strcmp(pac.cpf, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            printf("\nNumero do cadastro: %d", pac.linha);
            printf("\n\nNome: %s ", pac.nome);
            printf("\nEmail: %s", pac.email);
            printf("\nSexo: %s", pac.sexo);
            printf("\nEndereco: %s", pac.endereco);
            printf("\nBairro: %s", pac.bairro);
            printf("\nData de Nascimento: %s", pac.datanasc);
            printf("\nCPF: %s", pac.cpf);
            printf("\nRG: %s", pac.rg);
            printf("\nTelefone: %s", pac.telefone);
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou paciente nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_cadastrar_medico_clinica3()
{
    int ultima_linha = 0;
    struct medico med;
    system("cls");
    fflush(stdin);
    file = fopen("Medicos3.txt", "r");
    while(fread(&med, sizeof(struct medico),1,file))
        ultima_linha = med.linha;
    fclose(file);
    file = fopen("Medicos3.txt", "a");
    med.linha = ultima_linha + 1;
    printf("\n=-=-=-=-=-=-=-=-=-=-= CADASTRO DE MEDICOS =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o nome: ");
    gets(med.nome);
    printf("Digite a especializacao: ");
    gets(med.especializacao);
    printf("Digite o CRM: ");
    gets(med.CRM);
    fwrite(&med, sizeof(struct medico), 1, file);
    fclose(file);
    printf("\nCadastro realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_medicos_clinica3()
{
    struct medico med[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Medicos3.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= MEDICOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&med[num_pacientes], sizeof(struct medico), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nNumero do cadastro: %d", med[i].linha);
        printf("\nNome: %s ", med[i].nome);
        printf("\nEspecializacao: %s",med[i].especializacao);
        printf("\nCRM: %s", med[i].CRM);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_medico_clinica3()
{
    struct medico med;
    char pesquisa[SIZE];
    int pesquisas_encontradas;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE MEDICO NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite o CRM:\n");
    gets(pesquisa);
    file = fopen ("Medicos3.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&med, sizeof(struct medico), 1, file))
    {
        pesquisas_encontradas = strcmp(med.CRM, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nNumero do cadastro: %d", med.linha);
            printf("\nNome: %s ", med.nome);
            printf("\nEspecializacao: %s", med.especializacao);
            printf("\nCRM: %s", med.CRM);
            fclose(file);
            break;
        }
    }
    if (pesquisas_encontradas != 0)
        printf("\nDados incorretos ou medico nao cadastrado.\n\n");
    fclose(file);
    getche();
}
void tela_agendar_clinica3()
{
    int ultima_linha = 0;
    struct agendamento agenda;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTO DE CONSULTA =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Agendamentos3.txt", "a");
    printf("Digite o nome do paciente: ");
    gets(agenda.nome);
    printf("Digite a data do agendamento: ");
    gets(agenda.data);
    printf("Digite o horario do agendamento: ");
    gets(agenda.hora);
    printf("Digite o procedimento da consulta: ");
    gets(agenda.procedimento);
    printf("Digite o nome do medico que ira atender: ");
    gets(agenda.medico);
    printf("Digite o CRM: ");
    gets(agenda.CRM);
    printf("Digite o preco da consulta: ");
    scanf("%f", &agenda.valor);
    fwrite(&agenda, sizeof(struct agendamento), 1, file);
    fclose(file);
    printf("\nAgendamento realizado com sucesso pressione (enter) para continuar: ");
    getche();
}
void tela_lista_agendamentos_clinica3()
{
    struct agendamento agenda[SIZE];
    int num_pacientes = 0;
    system("cls");
    file = fopen("Agendamentos3.txt", "r");
    printf("\n=-=-=-=-=-=-=-=-=-=-= AGENDAMENTOS CADASTRADOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    if(file == NULL)
        printf("Arquivo de armazenamento nao encontrado.\n");
    while(fread(&agenda[num_pacientes], sizeof(struct agendamento), 1, file))
    {
        num_pacientes++;
    }
    for(int i = 0; i < num_pacientes; i++)
    {
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nPaciente: %s ", agenda[i].nome);
        printf("\nData: %s", agenda[i].data);
        printf("\nHorario: %s", agenda[i].hora);
        printf("\nProcedimento: %s",agenda[i].procedimento);
        printf("\nMedico: %s", agenda[i].medico);
        printf("\nCRM: %s", agenda[i].CRM);
        printf("\nPreco da consulta: %.2f", agenda[i].valor);
        printf("\n");
    }
    fclose(file);
    getche();
}
void tela_pesquisa_agendamentos_clinica3()
{
    FILE*tmp;
    struct agendamento agenda;
    char pesquisa[SIZE];
    int pesquisas_encontradas,op;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= BUSCA DE AGENDAMENTOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Digite a data desejada:\n");
    gets(pesquisa);
    file = fopen ("Agendamentos3.txt", "r");
    if(file == NULL)
    {
        printf ("\nArquivo de armazenamento nao encontrado.\n\n");
        getche();
        return;
    }
    while(fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);
        if(pesquisas_encontradas == 0)
        {
            printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
            printf("\nPaciente: %s ", agenda.nome);
            printf("\nData: %s", agenda.data);
            printf("\nHorario: %s", agenda.hora);
            printf("\nProcedimento: %s",agenda.procedimento);
            printf("\nMedico: %s", agenda.medico);
            printf("\nCRM: %s", agenda.CRM);
            printf("\nPreco da consulta: %.2f", agenda.valor);
            printf("\n");
        }
    }
    if((fread(&agenda, sizeof(struct agendamento), 1, file))== NULL && (pesquisas_encontradas != 0))
        printf("\nDados incorretos ou agendamento nao cadastrado.\n\n");
    fclose(file);
    do
    {
        printf("\n   (MENU)    \n(1) - Cancelar agendamento\n(2) - Voltar\n");
        scanf("%d", &op);
        switch(op)
        {
        case 1:
            fflush(stdin);
            printf("\nDigite o nome do paciente que deseja cancelar o agendamento: ");
            gets(pesquisa);
            file = fopen ("Agendamentos3.txt", "r");
            tmp = fopen ("tmp.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, file)!= NULL)
            {
                pesquisas_encontradas = strcmp(agenda.nome, pesquisa);
                if(pesquisas_encontradas != 0)
                    fwrite(&agenda, sizeof(struct agendamento), 1, tmp);
            }
            fclose(file);
            rewind(tmp);
            file = fopen ("Agendamentos3.txt", "w+");
            while(fread(&agenda, sizeof(struct agendamento), 1, tmp)!= NULL)
                fwrite(&agenda, sizeof(struct agendamento), 1, file);
            fclose(file);
            fclose(tmp);
            remove("tmp.txt");
            printf("Agendamento cancelado!!\n");
            getche();
            return;
        case 2:
            return;
        default:
            printf("Opcao invalida!!\n");
            break;
        }
    }
    while(op != 2);
    getche();
}
//ADMIN
void tela_relatorio()
{
    do
    {
        system("cls");
        fflush(stdin);
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("ADMIN");
        printf("=-=-=-=-=-=-=-=-=-=-=-=-=");
        printf("\nDigite qual opcao deseja realizar\n(1) - Quantidade de pacientes por clinica\n(2) - Quantidade de medicos por clinica\n(3) - Estatisticas das clinicas\n(4) - Senhas do acesso das clinicas\n(0) - Voltar\n>>> ");
        scanf("%d", &escolha_adm);
        switch (escolha_adm)
        {
        case 1:
            tela_impressao_pacientes();
            break;
        case 2:
            tela_impressao_medicos();
            break;
        case 3:
            tela_totalizacao_diaria_mensal();
            break;
        case 4:
            tela_impressao_usuarios();
            break;
        case 0:
            return;
        default:
            printf("Opcao invalida");
            getche();
            break;
        }
    }
    while(escolha_adm != 0);
}
void tela_impressao_pacientes()
{
    int quantidade_paciente_clinica1, quantidade_paciente_clinica2, quantidade_paciente_clinica3;
    int total_pacientes;
    int ultima_linha = 0;
    struct paciente pac;

    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= PACIENTES NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Pacientes1.txt", "r");
    if(file != NULL)
    {
        while(fread(&pac, sizeof(struct paciente),1,file))
            ultima_linha = pac.linha;
        quantidade_paciente_clinica1 = ultima_linha;
    }
    else
        quantidade_paciente_clinica1 = 0;
    fclose(file);
    file = fopen("Pacientes2.txt", "r");
    if(file != NULL)
    {
        while(fread(&pac, sizeof(struct paciente),1,file))
            ultima_linha = pac.linha;
        quantidade_paciente_clinica2 = ultima_linha;
    }
    else
        quantidade_paciente_clinica2 = 0;
    fclose(file);
    file = fopen("Pacientes3.txt", "r");
    if(file != NULL)
    {
        while(fread(&pac, sizeof(struct paciente),1,file))
            ultima_linha = pac.linha;
        quantidade_paciente_clinica3 = ultima_linha;
    }
    else
        quantidade_paciente_clinica3 = 0;
    fclose(file);
    total_pacientes =  quantidade_paciente_clinica1 + quantidade_paciente_clinica2 + quantidade_paciente_clinica3;

    printf("\nA quantidade de cadastros de pacidentes em cada clinica sao:\n");
    printf("Clinica 1: %d\nClinica 2: %d\nClinica 3: %d\nTotal de pacientes nas tres clinicas: %d\n", quantidade_paciente_clinica1, quantidade_paciente_clinica2, quantidade_paciente_clinica3, total_pacientes);
    getche();
}
void tela_totalizacao_diaria_mensal()
{
    int op_adm_totalizacao, op_adm_totalizacao_clinica1;

    system("cls");
    fflush(stdin);

    printf("\n=-=-=-=-=-=-=-=-=-=-= ESTATISTICAS DAS CLINICAS =-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nDigite qual opcao deseja realizar:\n (1) - Diario\n (2) - Mensal\n (0) - Voltar\n>>> ");
    scanf("%d", &op_adm_totalizacao);

    switch(op_adm_totalizacao)
    {
    case 1:
        tela_impressao_diaria();
        break;
    case 2:
        tela_impressao_mensal();
        break;
    case 0:
        return;
    }
}
void tela_impressao_usuarios()
{
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= SENHAS DAS CLINICAS =-=-=-=-=-=-=-=-=-=-=\n");
    printf("\nSenha Clinica 01: %s", clinica1_sen);
    printf("\nSenha Clinica 02: %s", clinica2_sen);
    printf("\nSenha Clinica 03: %s", clinica3_sen);
    getche();
    return;
}
void tela_impressao_diaria()
{
    float preco_clinica1 = 0, preco_clinica2 = 0, preco_clinica3 = 0, faturamento = 0;
    int agenda_do_dia1 = 0, agenda_do_dia2 = 0, agenda_do_dia3 = 0;
    int pesquisas_encontradas;
    char pesquisa[SIZE];
    struct agendamento agenda;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= ESTATISTICAS DAS CLINICAS =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Agendamentos1.txt", "r");
    printf("Digite a data para busca\n>>> ");
    gets(pesquisa);
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);

        if(pesquisas_encontradas == 0)
        {
            agenda_do_dia1++;
            preco_clinica1+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 1 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do dia: %d\n", agenda_do_dia1);
    printf("Faturamento do dia: %.2f\n", preco_clinica1);
    file = fopen("Agendamentos2.txt", "r");
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);

        if(pesquisas_encontradas == 0)
        {
            agenda_do_dia2++;
            preco_clinica2+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 2 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do dia: %d\n", agenda_do_dia2);
    printf("Faturamento do dia: %.2f\n", preco_clinica2);
    file = fopen("Agendamentos3.txt", "r");
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        pesquisas_encontradas = strcmp(agenda.data, pesquisa);

        if(pesquisas_encontradas == 0)
        {
            agenda_do_dia3++;
            preco_clinica3+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 3 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do dia: %d\n", agenda_do_dia3);
    printf("Faturamento do dia: %.2f\n", preco_clinica3);
    faturamento = preco_clinica1+preco_clinica2+preco_clinica3;
    printf("\nTotal de faturamento das clinicas: %.2f", faturamento);
    getche();
}
void tela_impressao_medicos()
{
    int quantidade_medico_clinica1, quantidade_medico_clinica2, quantidade_medico_clinica3;
    int total_medicos;
    int ultima_linha = 0;
    struct medico med;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= MEDICOS NO SISTEMA =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Medicos1.txt", "r");
    if(file != NULL)
    {
        while(fread(&med, sizeof(struct medico),1,file))
            ultima_linha = med.linha;
        quantidade_medico_clinica1 = ultima_linha;
    }
    else
        quantidade_medico_clinica1 = 0;
    fclose(file);
    file = fopen("Medicos2.txt", "r");
    if(file != NULL)
    {
        while(fread(&med, sizeof(struct medico),1,file))
            ultima_linha = med.linha;
        quantidade_medico_clinica2 = ultima_linha;
    }
    else
        quantidade_medico_clinica2 = 0;
    fclose(file);
    file = fopen("Medicos3.txt", "r");
    if(file != NULL)
    {
        while(fread(&med, sizeof(struct medico),1,file))
            ultima_linha = med.linha;
        quantidade_medico_clinica3 = ultima_linha;
    }
    else
        quantidade_medico_clinica3 = 0;
    fclose(file);
    total_medicos =  quantidade_medico_clinica1 + quantidade_medico_clinica2 + quantidade_medico_clinica3;
    printf("\nA quantidade de cadastros de medicos em cada clinica sao:\n");
    printf("Clinica 1: %d\nClinica 2: %d\nClinica 3: %d\nTotal de medicos nas tres clinicas: %d\n", quantidade_medico_clinica1, quantidade_medico_clinica2, quantidade_medico_clinica3, total_medicos);
    getche();
}
void tela_impressao_mensal()
{
    float preco_clinica1 = 0, preco_clinica2 = 0, preco_clinica3 = 0, faturamento = 0;
    int agenda_do_mes1 = 0, agenda_do_mes2 = 0, agenda_do_mes3 = 0, pes;
    char pesquisa[SIZE], teste[2];
    struct agendamento agenda;
    system("cls");
    fflush(stdin);
    printf("\n=-=-=-=-=-=-=-=-=-=-= ESTATISTICAS DAS CLINICAS =-=-=-=-=-=-=-=-=-=-=\n\n");
    file = fopen("Agendamentos1.txt", "r");
    printf("Digite o mes e o ano para buscar\n>>> ");
    gets(pesquisa);
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        if ((pesquisa[0] == agenda.data[3]) && (pesquisa[1] == agenda.data[4])&& (pesquisa[5] == agenda.data[8]) && (pesquisa[6] == agenda.data[9]))
        {
            agenda_do_mes1++;
            preco_clinica1+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 1 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do mes: %d\n", agenda_do_mes1);
    printf("Faturamento do mes: %.2f\n", preco_clinica1);
    file = fopen("Agendamentos2.txt", "r");
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        if ((pesquisa[0] == agenda.data[3]) && (pesquisa[1] == agenda.data[4])&& (pesquisa[5] == agenda.data[8]) && (pesquisa[6] == agenda.data[9]))
        {
            agenda_do_mes2++;
            preco_clinica2+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 2 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do mes: %d\n", agenda_do_mes2);
    printf("Faturamento do mes: %.2f\n", preco_clinica2);
    file = fopen("Agendamentos3.txt", "r");
    while (fread(&agenda, sizeof(struct agendamento), 1, file))
    {
        if ((pesquisa[0] == agenda.data[3]) && (pesquisa[1] == agenda.data[4])&& (pesquisa[5] == agenda.data[8]) && (pesquisa[6] == agenda.data[9]))
        {
            agenda_do_mes3++;
            preco_clinica3+= agenda.valor;
        }
    }
    fclose(file);
    printf("\n=-=-=-=-=-=-=-=-=-=-= CLINICA 3 =-=-=-=-=-=-=-=-=-=-=\n\n");
    printf("Atendimentos do mes: %d\n", agenda_do_mes3);
    printf("Faturamento do mes: %.2f\n", preco_clinica3);
    faturamento = preco_clinica1+preco_clinica2+preco_clinica3;
    printf("\nTotal de faturamento das clinicas: %.2f", faturamento);
    getche();
}
