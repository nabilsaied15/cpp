#include<iostream>
#include<string>
#include<cmath>
// Pour importer la bibliothèque io : input et output
using namespace std;
// Permet d'utiliser les éléments de l'espace de noms std sans préfixe

int main()
{
    cout << "welcome to ibiza brother ";
    string myText = "Hello My Name is Nabil Saied \n";
    int myAge = 19;
    float myNumber = 5.99f;
    double myDoubleNum = 944.54545;
    char myLetter = 'N';
    bool myBoolean = true;
    cout << "\nwelcome to ibiza brother\n"
         << "je suis dans la merde\n";

    // Comment faire pour lire une entrée en C++ :
    int x1;
    cout << "\nVeuillez entrer votre numero inconnu X1 :";
    cin >> x1;
    cout << "Votre numero inconnu X1 est egal a :" << x1 << "\n";

    string ch;
    cout << "\n Veuillez entrer votre chaine de caracteres ch :";
    cin >> ch;
    getline(cin , ch);  
    // Pour prendre toute la ligne de la chaîne de caractères
    cout << "\n Votre chaine de caracteres est :" << ch ;


    //les opérations 
    int x= 5;
    int y=3;
    cout<<"Addition :" <<x+y<<endl;//8
    cout<<"Subtraction :" <<x+y<<endl;//2
    cout<<"Multiplication :" <<x+y<<endl;//15
    cout<<"Division:" <<x+y<<endl;//1
    cout<<"Modulus :" <<x+y<<endl;//2

    //les incrementations : 
     int a = 5, b = 5;

    // Exemple d'incrémentation
    cout << "Préfixe Incrémentation : " << ++a << endl;  // a est incrémenté à 6 avant d'être imprimé.
    cout << "Postfixe Incrémentation : " << b++ << endl; // b est imprimé à 5, puis incrémenté à 6.
    cout << "Valeur finale de b : " << b << endl;        // Nouvelle valeur de b est 6.

    // Réinitialisation des variables
    a = 5;
    b = 5;

    // Exemple de décrémentation
    cout << "Préfixe Décrémentation : " << --a << endl;  // a est décrémenté à 4 avant d'être imprimé.
    cout << "Postfixe Décrémentation : " << b-- << endl; // b est imprimé à 5, puis décrémenté à 4.
    cout << "Valeur finale de b : " << b << endl;        // Nouvelle valeur de b est 4.


    x=5;
    x=x+5;
    x+=5;
    //c'est la meme chose 

    //--------------------------------------------------------
    // les outils  de comparaisons:
    int x2=10;
    int y2=9;
    int z= 10;
    cout<<(x2>y2);//true il va afficher 1 se veut dire true 
    cout<<(x2>=y2);
    cout<<(x2<=y2);
    cout<<(x2==y2);//pour voir si ils sont égaux ou non 
    cout<<(x2!=y2); //different 
    // les opérations logique 
    cout<<(x2==y2 && x2==z);
    //&& --> et 
    //||-->not 

    //----------------------------------------------------------
    cout<< "-----------------------------------------------------------------------------";
    //string (tous d'avord on ajouter la bibliothéque string tout en haut )
    string firstName ="Nabil";
    string lastName ="Saied";
    string FullName= firstName + lastName;
    cout<< FullName  ;

    //pour calculer la taille d'une chaine de caractéres 
    string txt ="eikjjkfefkjelkjfekjflekj";
    cout<<"The length of the text txt string is "<<txt.length();
    //pour afficher la premiere lettre ou le premier caractére ou on on veut changer cette lettre par une autre ou par un autre caractére 
    txt[0]='z';
    //pour changer on doit utiliser une seul cote pas celle la " 
    cout<<"The length of the text txt string is "<<txt[0];


    //-------------------------------------------------------------------------------
    //les fonctions ou les opérations mathématique :
    //pour voir le maximum et le minimum 
    //la plupart des fonctions mathémathique se trouvent dans la bibliothéque cmath
    cout<<max(5,10)<<endl;
    cout<<min(5,10)<<endl;
    cout<<sqrt(64)<<endl;
    cout<<log(2)<<endl;
    cout<<cos(60)<<endl;
 

    //-------------------------------------------------------------------------------
    //structure conditionnel if 
    string result;
    int time=10;
    if (time<11)
    {
        cout<<"bonjour"<<endl;
    }else if(time<18) {
        cout<<"Au revoir "<<endl;
    //il ya deux conditons le time doit etre a la fois inferieur a 11 et inferieur a 18 
    }else{
        cout<<"bonsoir"<<endl;
    }
    //il ya une condition que le time est supérieur a 18
    // c'est la méthode de turnely operator  
    result=(time<11)?"bonjour":"Au revoir";
    // condition vrai le symbole est ?
    //si la condittion est fausse le symbole est :


    //-------------------------------------------------------------------------------
    //switch
    int day =1;
    if (day==1)
    {
        cout<<"Monday"<<endl;
    }else if (day==2){
        cout<<"Tuesday"<<endl;
    }else if (day==3){
        cout<<"Wednesday"<<endl;
    }
    //lorsque on sait le nombres des cas possibles on peut utiliser le switch du coup on peut le remplacer par sa :
    int day =1;
    switch (day)
    {
    case 1:
        cout<<"Monday"<<endl;
        break;
    case 2:
        cout<<"Tuesday"<<endl;
        break;
    case 3:
        cout<<"Wednesday"<<endl;
        break;
    case 4:
        cout<<"Thursday"<<endl;
        break;
    case 5:
        cout<<"Friday"<<endl;
        break;
    case 6:
        cout<<"Saturday"<<endl;
        break;
    case 7:
        cout<<"Sunday"<<endl;
        break;
    default:
        break;
    }


    return 0;
}
// La fonction principale : l'exécution commence ic