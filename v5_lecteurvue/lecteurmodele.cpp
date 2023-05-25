#include "lecteurmodele.h"
#include <QSqlQuery>
#include <QSqlRecord>
#include <QSqlField>

LecteurModele::LecteurModele()
{
    _dataBase = new Database;
    _numDiaporamaCourant = 1;   // =  le lecteur est vide
}

void LecteurModele::avancer()
{
    _posImageCourante = (_posImageCourante +1) % nbImages();
}

void LecteurModele::reculer()
{
    _posImageCourante = (_posImageCourante -1) % nbImages();
}

void LecteurModele::changerDiaporama(unsigned int pNumDiaporama)
{
    // s'il y a un diaporama courant, le vider, puis charger le nouveau Diaporama
    if (numDiaporamaCourant() > 0)
    {
        viderDiaporama();
    }
    _numDiaporamaCourant = pNumDiaporama;
    if (numDiaporamaCourant() > 0)
    {
        QSqlQuery query;
        //query.prepare("SELECT titre Diaporama FROM Diaporamas WHERE idDiaporama = :num");
        //query.addBindValue(pNumDiaporama);
        //query.exec();

        //query.prepare("SELECT titre Diaporama FROM Diaporamas WHERE idDiaporama = :num");
        //query.bindValue(":num", pNumDiaporama);
        //query.exec();

        //query.prepare("SELECT titre Diaporama FROM Diaporamas WHERE idDiaporama = (?) ");

        //QVariantList ints;
        //ints << pNumDiaporama;
        //query.addBindValue(ints);
        //query.execBatch();

        query.exec(QString{"SELECT * FROM Diaporamas WHERE idDiaporama = %1"}.arg(pNumDiaporama));


        QSqlRecord rec = query.record();
        for (int i = 0; query.next(); i++) {
            qDebug() << query.value(1) << Qt::endl;
        }

        chargerDiaporama(); // charge le diaporama courant
    }

}

unsigned int LecteurModele::positionDuMax(unsigned int deb, unsigned int fin)
{
    unsigned int posMax = deb;
    for (unsigned int i=deb+1; i<fin; i++)
    {
        if (_diaporama[i]->getRang() > _diaporama[posMax]->getRang())
        {
            posMax = i;
        }
    }
    return posMax;
}

void LecteurModele::triDiaporama()
{
    unsigned int pos;
    Image* valAux;
    for (unsigned int i=nbImages()-1; i>1; i--)
    {
        pos = (*this).positionDuMax(0,i);
        valAux = _diaporama[pos];
        _diaporama[pos] = _diaporama[i];
        _diaporama[i] = valAux;
    }
}

void LecteurModele::chargerDiaporama()
{
    /* Chargement des images associées au diaporama courant
       Dans une version ultérieure, ces données proviendront d'une base de données,
       et correspondront au diaporama choisi */
    Image* imageACharger;
    imageACharger = new Image(3, "personne", "Blanche Neige", ":/images/images/Disney_3.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(2, "personne", "Cendrillon", ":/images/images/Disney_2.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(4, "animal", "Mickey", ":/images/images/Disney_4.gif");
    _diaporama.push_back(imageACharger);
    imageACharger = new Image(1, "personne", "Grincheux", ":/images/images/Disney_1.gif");
    _diaporama.push_back(imageACharger);


     // trie du contenu du diaporama par ordre croissant selon le rang de l'image dans le diaporama
    (*this).triDiaporama();

     _posImageCourante = 0;

     //cout << "Diaporama num. " << numDiaporamaCourant() << " selectionne. " << endl;
     //cout << nbImages() << " images chargees dans le diaporama" << endl;
}

void LecteurModele::viderDiaporama()
{
    if (nbImages () > 0)
    {
        unsigned int taille = nbImages();
        for (unsigned int i = 0; i < taille ; i++)
        {
            _diaporama.pop_back(); /* Removes the last element in the vector,
                                      effectively reducing the container size by one.
                                      AND deletes the removed element */
        }
     _posImageCourante = 0;
    }
    //cout << nbImages() << " images restantes dans le diaporama." << endl;

}

void LecteurModele::afficher()
{
    /* affiche les information sur le lecteur :
     * 1) vide (si num. de diaporama = 0) OU BIEN  numéro de diaporama affiché
     * 2) Si un diaporama courant est chargé (num. de diaporama > 0), affiche l'image courante OU BIEN 'diaporama vide'
     *     si ce diaporama n'a aucun image */
    if (numDiaporamaCourant() > 0)
    {
        //cout << "Diaporama num. " << numDiaporamaCourant() << endl;
        imageCourante()->Image::afficher();
    }
    else
    {
        //cout << "Lecteur vide" << endl;
    }
}

unsigned int LecteurModele::nbImages()
{
    return _diaporama.size();
}

Image *LecteurModele::imageCourante()
{
    return _diaporama[_posImageCourante];
}

unsigned int LecteurModele::numDiaporamaCourant()
{
    return _numDiaporamaCourant;
}
