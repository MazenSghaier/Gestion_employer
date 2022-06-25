#include "institution.h"

/*Institution::Institution(int taille)
{
 if (taille>1)
   {
    liste=new employer[taille];
    capacite=taille;
    }
}*/
/*--------------------------------------------------------------------------------------------------------------*/
void Institution::ajoute(employer a)
{

    liste[nb]=a;
    nb=nb+1;
}
/*--------------------------------------------------------------------------------------------------------------*/
int Institution::verif_taille(int a)
{
    if (a>1) return 1;
    else return 0;
}
/*--------------------------------------------------------------------------------------------------------------*/
int Institution::vide_tab()
{
    if(nb==0)
        return 0;
}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution:: modif_nom(std::string c,int x )
{

    liste[x].set_nom(c);

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution:: modif_prenom(std::string c,int x )
{

    liste[x].set_prenom(c);

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution:: modif_CIN(std::string c,int x )
{

    liste[x].set_CIN(c);

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution:: modif_age(int c,int x )
{

    liste[x].set_age(c);

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution:: modif_salaire(int c,int x )
{

    liste[x].set_salaire(c);

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution::supprimer(int x)
{
    for(int i=x;i<=nb;i++) liste[i]=liste[i+1];
}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution::set_mot(std::string c)
{
    mot=c;
}
/*--------------------------------------------------------------------------------------------------------------*/
std::string Institution::get_mot()
{
    return mot;
}
/*--------------------------------------------------------------------------------------------------------------*/

void Institution::set_user(std::string c)
{
    user=c;
}
/*--------------------------------------------------------------------------------------------------------------*/

std::string Institution::get_user()
{
    return user;
}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution::set_nb(int c)
{
    nb=c;
}
/*--------------------------------------------------------------------------------------------------------------*/
int Institution::get_nb()
{
    return nb;
}
/*--------------------------------------------------------------------------------------------------------------*/
int Institution::get_capacite()
{
    return capacite;
}
/*--------------------------------------------------------------------------------------------------------------*/
employer Institution:: lista(int indice)
{
    if(indice <capacite)
    return liste[indice];
}
/*--------------------------------------------------------------------------------------------------------------*/
void parsepa(string Line,int*a,int*b,string *name,string *prenom )
{
    if(Line.length()>1)
    {
        int i=0;
        int j=0;
        char str[50];
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *a=std::stoi(str);
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *b=std::stoi(str);
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *name=str;
        i++;
        j=0;
        while(i<(int)Line.length())
        {
                    str[j]=Line[i];
                    i++;
                    j++;
         }
         str[j]='\0';
         *prenom=str;
}
}
/*--------------------------------------------------------------------------------------------------------------*/
void parse(string Line,string *name,string *prenom ,string *cin,int *a,int *s,int *n,int *k)
{
    if(Line.length()>1)
    {
        int i=0;
        int j=0;
        char str[50];
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *name=str;
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *prenom=str;
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *cin=str;
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *a=std::stoi(str);
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *s=std::stoi(str);
        i++;
        j=0;
        while(Line[i]!=',')
        {
            str[j]=Line[i];
            i++;
            j++;
        }
        str[j]='\0';
        *n=std::stoi(str);
        i++;
        j=0;
        while(i<(int)Line.length())
        {
                    str[j]=Line[i];
                    i++;
                    j++;
         }
         str[j]='\0';
         *k=std::stoi(str);

    }

}
/*--------------------------------------------------------------------------------------------------------------*/
void Institution::saveInstitution()
{
    QFile Fich1(QCoreApplication::applicationDirPath()+QString::fromStdString("/Institution.csv"));
    Fich1.open(QFile::WriteOnly |QFile::Text);
    QTextStream File1(&Fich1);
    File1<<capacite<<","<<nb<<","<<QString::fromStdString(user)<<","<<QString::fromStdString(mot)<<"\n";

    Fich1.close();

    QFile Fich2(QCoreApplication::applicationDirPath()+QString::fromStdString("/Directeur.csv"));
    Fich2.open(QFile::WriteOnly |QFile::Text);
    QTextStream File2(&Fich2);
    File2<<"Nom,Prenom,CIN,age,salaire,conge"<<"\n";

        File2<<QString::fromStdString(liste[0].get_nom())<<","<<QString::fromStdString(liste[0].get_prenom())<<","<<QString::fromStdString(liste[0].get_CIN())<<","<<liste[0].get_age()<<","<<liste[0].get_salaire()<<","<<liste[0].get_nb_con()<<"\n";

    Fich2.close();

    QFile Fich3(QCoreApplication::applicationDirPath()+QString::fromStdString("/Responsable.csv"));
    Fich3.open(QFile::WriteOnly |QFile::Text);
    QTextStream File3(&Fich3);
    File3<<"Nom,Prenom,CIN,age,salaire,conge,rang"<<"\n";
    for(int i=0;i<capacite;i++)
    {
    if(liste[i].get_rang()==2)
        File2<<QString::fromStdString(liste[i].get_nom())<<","<<QString::fromStdString(liste[i].get_prenom())<<","<<QString::fromStdString(liste[i].get_CIN())<<","<<liste[i].get_age()<<","<<liste[i].get_salaire()<<","<<liste[i].get_nb_con()<<","<<i<<"\n";
    }
    Fich3.close();

    QFile Fich4(QCoreApplication::applicationDirPath()+QString::fromStdString("/Technicien.csv"));
    Fich4.open(QFile::WriteOnly |QFile::Text);
    QTextStream File4(&Fich4);
    File4<<"Nom,Prenom,CIN,age,salaire,conge,rang"<<"\n";
    for(int i=0;i<capacite;i++)
    {
    if(liste[i].get_rang()==3)
        File4<<QString::fromStdString(liste[i].get_nom())<<","<<QString::fromStdString(liste[i].get_prenom())<<","<<QString::fromStdString(liste[i].get_CIN())<<","<<liste[i].get_age()<<","<<liste[i].get_salaire()<<","<<liste[i].get_nb_con()<<","<<i<<"\n";;
    }
    Fich4.close();

    QFile Fich5(QCoreApplication::applicationDirPath()+QString::fromStdString("/Agen_de_laboratoire.csv"));
    Fich5.open(QFile::WriteOnly |QFile::Text);
    QTextStream File5(&Fich5);
    File5<<"Nom,Prenom,CIN,age,salaire,conge,rang"<<"\n";
    for(int i=0;i<capacite;i++)
    {
    if(liste[i].get_rang()==4)
        File5<<QString::fromStdString(liste[i].get_nom())<<","<<QString::fromStdString(liste[i].get_prenom())<<","<<QString::fromStdString(liste[i].get_CIN())<<","<<liste[i].get_age()<<","<<liste[i].get_salaire()<<","<<liste[i].get_nb_con()<<","<<i<<"\n";;
    }
    Fich5.close();

    QFile Fich6(QCoreApplication::applicationDirPath()+QString::fromStdString("/Ouvrier.csv"));
    Fich6.open(QFile::WriteOnly |QFile::Text);
    QTextStream File6(&Fich6);
    File6<<"Nom,Prenom,CIN,age,salaire,conge,rang"<<"\n";
    for(int i=0;i<capacite;i++)
    {
    if(liste[i].get_rang()==5)
        File6<<QString::fromStdString(liste[i].get_nom())<<","<<QString::fromStdString(liste[i].get_prenom())<<","<<QString::fromStdString(liste[i].get_CIN())<<","<<liste[i].get_age()<<","<<liste[i].get_salaire()<<","<<liste[i].get_nb_con()<<","<<i<<"\n";;
    }
    Fich6.close();
}

/*--------------------------------------------------------------------------------------------------------------*/
int Institution::loadInstitution(std::string var ,std::string bar)
{
    typedef struct losad{
    employer tab[20];
    int indice[20];
    int taille=0;
    }losad;
    employer ready[20];
    losad load;
    QFile Fich1(QCoreApplication::applicationDirPath()+QString::fromStdString("/Institution.csv"));
    Fich1.open(QFile::ReadOnly |QFile::Text);
    QTextStream File1(&Fich1);
    QString Line;
    string umu,tom;
    int nbn,cap;


        Line=File1.readLine();
        parsepa(Line.toStdString(),&cap,&nbn,&umu,&tom);
        nb=nbn;
        capacite=cap;
        user=umu;
        mot=tom;


    Fich1.close();
    if(user==var&&mot==bar){
    QFile Fich2(QCoreApplication::applicationDirPath()+QString::fromStdString("/Directeur.csv"));
    Fich2.open(QFile::ReadOnly |QFile::Text);
    QTextStream File2(&Fich2);
    Line=File2.readLine();
    int i=0;
    string n,p,cin;
    int Age,sal,nbo,k;

        Line=File2.readLine();
        parse(Line.toStdString(),&n,&p,&cin,&Age,&sal,&nbo,&k);
        employer e(n,p,cin,Age,sal,nbo);
        Directeur d(e,nbn,1);
        load.tab[0]=d;
        load.indice[0]=0;
        load.taille++;

    Fich2.close();
    QFile Fich3(QCoreApplication::applicationDirPath()+QString::fromStdString("/Responsable.csv"));
    Fich3.open(QFile::ReadOnly |QFile::Text);
    QTextStream File3(&Fich3);
    Line=File3.readLine();
    i=1;

    while(!File3.atEnd() && i<=nb)
    {
        Line=File3.readLine();
        parse(Line.toStdString(),&n,&p,&cin,&Age,&sal,&nbo,&k);
        employer e(n,p,cin,Age,sal,nbo);
        Emp_responsable d(e,nbo,2);
        load.tab[i]=d;
        load.indice[i]=k;
        load.taille++;
        i++;

    }
    Fich3.close();
    QFile Fich4(QCoreApplication::applicationDirPath()+QString::fromStdString("/Technicien.csv"));
    Fich4.open(QFile::ReadOnly |QFile::Text);
    QTextStream File4(&Fich4);
    Line=File4.readLine();
    i=1;
    while(!File4.atEnd() && i<=nbo)
    {
        Line=File4.readLine();
        parse(Line.toStdString(),&n,&p,&cin,&Age,&sal,&nbo,&k);
        employer e(n,p,cin,Age,sal,nbo);
        Emp_Technicien d(e,nbo,3);
        load.tab[i]=d;
        load.indice[i]=k;
        load.taille++;
        i++;
    }
    Fich4.close();
    QFile Fich5(QCoreApplication::applicationDirPath()+QString::fromStdString("/Agent_de_labo.csv"));
    Fich5.open(QFile::ReadOnly |QFile::Text);
    QTextStream File5(&Fich5);
    Line=File5.readLine();
    i=1;
    while(!File5.atEnd() && i<=nbo)
    {
        Line=File5.readLine();
        parse(Line.toStdString(),&n,&p,&cin,&Age,&sal,&nbo,&k);
        employer e(n,p,cin,Age,sal,nbo);
        Agent_de_labo d(e,nbo,4);
        load.tab[i]=d;
        load.indice[i]=k;
        load.taille++;
        i++;
    }
    Fich5.close();

    QFile Fich6(QCoreApplication::applicationDirPath()+QString::fromStdString("/Ouvrier.csv"));
    Fich6.open(QFile::ReadOnly |QFile::Text);
    QTextStream File6(&Fich6);
    Line=File6.readLine();
    i=1;
    while(!File6.atEnd() && i<=nbo)
    {
        Line=File6.readLine();
        parse(Line.toStdString(),&n,&p,&cin,&Age,&sal,&nbo,&k);
        employer e(n,p,cin,Age,sal,nbo);
        Ouvrier d(e,nbo,5);
        load.tab[i]=d;
        load.indice[i]=k;
        load.taille++;
        i++;
    }
    Fich6.close();
    int x=0;
    do{
    for(int j=0;j<=load.taille;j++)
     {
        if(load.indice[j]==j)
        {   ajoute(load.tab[j]);
            x++;
            for(int ow=j;ow<=load.taille;ow++) load.tab[ow]=load.tab[ow+1];
            load.taille--;
        }
    }

    }while(x<=nb);

    }
    else if((user !=var&& bar==mot)||(user!="system"&& mot!="system")) return 1;
    else if((user ==var&& bar!=mot)||(user!="system"&& mot!="system")) return 2;
    else return 3;
}
